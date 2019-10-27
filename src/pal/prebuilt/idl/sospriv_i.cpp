// Licensed to the .NET Foundation under one or more agreements.
// The .NET Foundation licenses this file to you under the MIT license.
// See the LICENSE file in the project root for more information.



/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 8.00.0613 */
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


#ifdef __cplusplus
extern "C"{
#endif 


#include <rpc.h>
#include <rpcndr.h>

#ifdef _MIDL_USE_GUIDDEF_

#ifndef INITGUID
#define INITGUID
#include <guiddef.h>
#undef INITGUID
#else
#include <guiddef.h>
#endif

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        DEFINE_GUID(name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8)

#else // !_MIDL_USE_GUIDDEF_

#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        EXTERN_C __declspec(selectany) const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif // !_MIDL_USE_GUIDDEF_

MIDL_DEFINE_GUID(IID, IID_ISOSEnum,0x286CA186,0xE763,0x4F61,0x97,0x60,0x48,0x7D,0x43,0xAE,0x43,0x41);


MIDL_DEFINE_GUID(IID, IID_ISOSHandleEnum,0x3E269830,0x4A2B,0x4301,0x8E,0xE2,0xD6,0x80,0x5B,0x29,0xB2,0xFA);


MIDL_DEFINE_GUID(IID, IID_ISOSStackRefErrorEnum,0x774F4E1B,0xFB7B,0x491B,0x97,0x6D,0xA8,0x13,0x0F,0xE3,0x55,0xE9);


MIDL_DEFINE_GUID(IID, IID_ISOSStackRefEnum,0x8FA642BD,0x9F10,0x4799,0x9A,0xA3,0x51,0x2A,0xE7,0x8C,0x77,0xEE);


MIDL_DEFINE_GUID(IID, IID_ISOSDacInterface,0x436f00f2,0xb42a,0x4b9f,0x87,0x0c,0xe7,0x3d,0xb6,0x6a,0xe9,0x30);


MIDL_DEFINE_GUID(IID, IID_ISOSDacInterface2,0xA16026EC,0x96F4,0x40BA,0x87,0xFB,0x55,0x75,0x98,0x6F,0xB7,0xAF);


MIDL_DEFINE_GUID(IID, IID_ISOSDacInterface3,0xB08C5CDC,0xFD8A,0x49C5,0xAB,0x38,0x5F,0xEE,0xF3,0x52,0x35,0xB4);


MIDL_DEFINE_GUID(IID, IID_ISOSDacInterface4,0x74B9D34C,0xA612,0x4B07,0x93,0xDD,0x54,0x62,0x17,0x8F,0xCE,0x11);


MIDL_DEFINE_GUID(IID, IID_ISOSDacInterface5,0x127d6abe,0x6c86,0x4e48,0x8e,0x7b,0x22,0x07,0x81,0xc5,0x81,0x01);


MIDL_DEFINE_GUID(IID, IID_ISOSDacInterface6,0x11206399,0x4B66,0x4EDB,0x98,0xEA,0x85,0x65,0x4E,0x59,0xAD,0x45);


MIDL_DEFINE_GUID(IID, IID_ISOSDacInterface7,0xc1020dde,0xfe98,0x4536,0xa5,0x3b,0xf3,0x5a,0x74,0xc3,0x27,0xeb);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



