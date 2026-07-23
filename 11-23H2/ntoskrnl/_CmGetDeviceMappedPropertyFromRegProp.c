/*
 * XREFs of _CmGetDeviceMappedPropertyFromRegProp @ 0x1406CC800
 * Callers:
 *     _CmGetDeviceMappedProperty @ 0x1406CD240 (_CmGetDeviceMappedProperty.c)
 *     _CmGetDeviceCompoundFilters @ 0x1407FD720 (_CmGetDeviceCompoundFilters.c)
 *     _CmGetDeviceMappedPropertyKeys @ 0x14080A488 (_CmGetDeviceMappedPropertyKeys.c)
 *     _CmGetDeviceCompoundFiltersWorker @ 0x140A680BC (_CmGetDeviceCompoundFiltersWorker.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14022B7D0 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B2D0 (ZwClose.c)
 *     _PnpMultiSzGetLen @ 0x1406C93CC (_PnpMultiSzGetLen.c)
 *     _CmGetDeviceRegProp @ 0x1406CD48C (_CmGetDeviceRegProp.c)
 *     _CmOpenDeviceRegKey @ 0x1406CE0F4 (_CmOpenDeviceRegKey.c)
 *     RtlGUIDFromString @ 0x1406CF6F0 (RtlGUIDFromString.c)
 *     _PnpParseIndirectResourceString @ 0x14079E614 (_PnpParseIndirectResourceString.c)
 *     _PnpParseIndirectInfString @ 0x1407CB534 (_PnpParseIndirectInfString.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall CmGetDeviceMappedPropertyFromRegProp(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int *a5,
        GUID *a6,
        unsigned int a7,
        unsigned int *a8,
        int a9)
{
  GUID *v9; // r15
  unsigned int v11; // r13d
  int v12; // r11d
  DEVPROPKEY **v13; // rdx
  unsigned int i; // r8d
  DEVPROPKEY *v15; // r9
  DEVPROPKEY **v16; // rsi
  __int64 v17; // rcx
  int v18; // r12d
  int v19; // r8d
  int v20; // edx
  int v21; // ecx
  NTSTATUS v22; // eax
  __int64 v23; // rdx
  unsigned int v24; // r10d
  NTSTATUS DeviceRegProp; // ebx
  unsigned int v26; // eax
  unsigned int Len; // r9d
  int v28; // r12d
  int v29; // r13d
  __int64 v31; // rax
  GUID *Pool2; // rsi
  GUID *v33; // r12
  char v34; // al
  char v35; // al
  int v36; // r9d
  int v37; // eax
  int v38; // r9d
  unsigned int v39; // [rsp+40h] [rbp-B9h] BYREF
  int v40; // [rsp+44h] [rbp-B5h] BYREF
  __int64 v41; // [rsp+48h] [rbp-B1h]
  __int64 v42; // [rsp+50h] [rbp-A9h]
  int v43; // [rsp+58h] [rbp-A1h] BYREF
  __int64 v44; // [rsp+60h] [rbp-99h]
  int v45; // [rsp+68h] [rbp-91h] BYREF
  HANDLE Handle; // [rsp+70h] [rbp-89h] BYREF
  UNICODE_STRING DestinationString; // [rsp+78h] [rbp-81h] BYREF
  GUID Guid; // [rsp+88h] [rbp-71h] BYREF
  WCHAR SourceString[40]; // [rsp+A0h] [rbp-59h] BYREF

  v9 = a6;
  v44 = a3;
  v41 = a2;
  v42 = a1;
  v40 = 0;
  v45 = 0;
  v39 = 0;
  v43 = 0;
  Handle = 0LL;
  DestinationString = 0LL;
  Guid = 0LL;
  if ( (_WORD)a9 )
    return (unsigned int)-1073741811;
  *a5 = 0;
  *a8 = 0;
  if ( a6 )
  {
    v11 = a7;
    v9 = (GUID *)(-(__int64)(a7 != 0) & (unsigned __int64)a6);
  }
  else
  {
    v11 = 0;
  }
  v12 = *(_DWORD *)(a4 + 16);
  v13 = &CmDeviceRegPropMap;
  for ( i = 0; i < 0x21; ++i )
  {
    v15 = *v13;
    v16 = v13;
    if ( v12 == (*v13)->pid )
    {
      v17 = *(_QWORD *)a4 - *(_QWORD *)&v15->fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&v15->fmtid.Data1 )
        v17 = *(_QWORD *)(a4 + 8) - *(_QWORD *)v15->fmtid.Data4;
      if ( !v17 )
        break;
    }
    v13 += 3;
    v16 = 0LL;
  }
  if ( !v16 )
    return (unsigned int)-1073741802;
  v18 = *((_DWORD *)v16 + 3);
  switch ( v18 )
  {
    case 37:
    case 9:
      v38 = *((_DWORD *)v16 + 3);
      v28 = v42;
      v39 = 78;
      DeviceRegProp = CmGetDeviceRegProp(v42, v41, v44, v38, (__int64)&v40, (__int64)SourceString, (__int64)&v39, a9);
      if ( DeviceRegProp < 0 )
        goto LABEL_28;
      if ( v40 != *((_DWORD *)v16 + 4) )
        return (unsigned int)-1073741811;
      *a8 = 16;
      *a5 = *((_DWORD *)v16 + 2);
      if ( v11 >= *a8 )
      {
        SourceString[38] = 0;
        DeviceRegProp = RtlInitUnicodeStringEx(&DestinationString, SourceString);
        if ( DeviceRegProp >= 0 )
        {
          DeviceRegProp = RtlGUIDFromString(&DestinationString, &Guid);
          if ( DeviceRegProp >= 0 )
          {
            *v9 = Guid;
            return (unsigned int)DeviceRegProp;
          }
        }
        goto LABEL_28;
      }
      return (unsigned int)-1073741789;
    case 25:
      return (unsigned int)-1073741637;
    case 27:
      v28 = v42;
      v39 = 4;
      DeviceRegProp = CmGetDeviceRegProp(v42, v41, v44, 27, (__int64)&v40, (__int64)&v43, (__int64)&v39, a9);
      if ( DeviceRegProp < 0 )
        goto LABEL_28;
      if ( v40 != *((_DWORD *)v16 + 4) )
        return (unsigned int)-1073741811;
      *a8 = 1;
      *a5 = *((_DWORD *)v16 + 2);
      if ( v11 >= *a8 )
      {
        LOBYTE(v9->Data1) = -(v43 != 0);
        return (unsigned int)DeviceRegProp;
      }
      return (unsigned int)-1073741789;
  }
  v19 = v44;
  v20 = v41;
  v21 = v42;
  *a8 = v11;
  v22 = CmGetDeviceRegProp(v21, v20, v19, v18, (__int64)&v40, (__int64)v9, (__int64)a8, a9);
  v24 = 0;
  DeviceRegProp = v22;
  if ( v22 && v22 != -1073741789 )
    goto LABEL_27;
  if ( v40 != *((_DWORD *)v16 + 4) )
    return (unsigned int)-1073741811;
  v26 = *((_DWORD *)v16 + 2);
  *a5 = v26;
  if ( v26 != 18 )
    goto LABEL_19;
  v31 = *a8;
  v39 = *a8;
  if ( DeviceRegProp )
  {
    if ( DeviceRegProp != -1073741789 )
      goto LABEL_27;
    Pool2 = (GUID *)ExAllocatePool2(256LL, v31, 1380994640LL);
    if ( !Pool2 )
      return (unsigned int)-1073741801;
    v36 = v18;
    v29 = v41;
    v28 = v42;
    v37 = CmGetDeviceRegProp(v42, v41, v44, v36, (__int64)&v45, (__int64)Pool2, (__int64)&v39, a9);
    if ( v37 < 0 )
    {
      DeviceRegProp = v37;
      ExFreePoolWithTag(Pool2, 0);
      goto LABEL_29;
    }
    if ( v39 < 2 )
      goto LABEL_38;
    v33 = Pool2;
LABEL_35:
    v34 = PnpParseIndirectInfString(v33, v23);
    v24 = 0;
    if ( v34 || (v35 = PnpParseIndirectResourceString(v33), v24 = 0, v35) )
      *a5 = 25;
    if ( !Pool2 )
    {
LABEL_19:
      if ( !DeviceRegProp )
        goto LABEL_20;
LABEL_27:
      v28 = v42;
LABEL_28:
      v29 = v41;
LABEL_29:
      if ( DeviceRegProp != -1073741810 )
        return (unsigned int)DeviceRegProp;
      DeviceRegProp = CmOpenDeviceRegKey(v28, v29, 16, 0, 1, 0, (__int64)&Handle, 0LL);
      if ( !DeviceRegProp )
      {
        ZwClose(Handle);
        return (unsigned int)-1073741275;
      }
      if ( DeviceRegProp != -1073741810 && DeviceRegProp != -1073741632 )
        return (unsigned int)-1073741823;
      return (unsigned int)DeviceRegProp;
    }
LABEL_38:
    ExFreePoolWithTag(Pool2, 0);
    v24 = 0;
    goto LABEL_19;
  }
  if ( v11 >= 2 )
  {
    Pool2 = 0LL;
    v33 = v9;
    if ( v9 )
      goto LABEL_35;
  }
LABEL_20:
  if ( *a5 == 8210 )
  {
    Len = PnpMultiSzGetLen(v9);
    if ( 2 * (unsigned __int64)Len > *a8 )
    {
      DeviceRegProp = -1073741595;
      *a8 = v24;
      return (unsigned int)DeviceRegProp;
    }
    *a8 = 2 * Len;
  }
  if ( *a5 == 18 && *a8 == v24 )
  {
    *a8 = v24;
    *a5 = v24;
    return (unsigned int)-1073741275;
  }
  return (unsigned int)DeviceRegProp;
}
