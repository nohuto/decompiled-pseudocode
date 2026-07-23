/*
 * XREFs of _CmGetDeviceMappedPropertyFromComposite @ 0x1406CA3EC
 * Callers:
 *     _CmGetDeviceMappedProperty @ 0x1406CD240 (_CmGetDeviceMappedProperty.c)
 *     _CmGetDeviceMappedPropertyKeys @ 0x14080A488 (_CmGetDeviceMappedPropertyKeys.c)
 * Callees:
 *     RtlUnalignedStringCchLengthW @ 0x14022B77C (RtlUnalignedStringCchLengthW.c)
 *     RtlInitUnicodeStringEx @ 0x14022B7D0 (RtlInitUnicodeStringEx.c)
 *     RtlStringCbCopyExW @ 0x14034E960 (RtlStringCbCopyExW.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memcmp @ 0x1403DA530 (memcmp.c)
 *     wcscmp @ 0x1403DBB30 (wcscmp.c)
 *     ZwClose @ 0x14041B2D0 (ZwClose.c)
 *     _PnpMultiSzGetLen @ 0x1406C93CC (_PnpMultiSzGetLen.c)
 *     _CmGetDeviceRegProp @ 0x1406CD48C (_CmGetDeviceRegProp.c)
 *     _CmOpenDeviceRegKey @ 0x1406CE0F4 (_CmOpenDeviceRegKey.c)
 *     RtlGUIDFromString @ 0x1406CF6F0 (RtlGUIDFromString.c)
 *     _PnpGetObjectProperty @ 0x1406D0220 (_PnpGetObjectProperty.c)
 *     _CmIsDeviceSafeRemovalRequired @ 0x140798BD8 (_CmIsDeviceSafeRemovalRequired.c)
 *     _NtPlugPlayGetDeviceProperty @ 0x140799E50 (_NtPlugPlayGetDeviceProperty.c)
 *     _CmGetDeviceParent @ 0x14079A524 (_CmGetDeviceParent.c)
 *     _CmGetDeviceStatus @ 0x14079A758 (_CmGetDeviceStatus.c)
 *     _NtPlugPlayGetDeviceStatus @ 0x14079A9C8 (_NtPlugPlayGetDeviceStatus.c)
 *     _CmGetDeviceContainerIdFromBase @ 0x14079B254 (_CmGetDeviceContainerIdFromBase.c)
 *     _CmGetDeviceCompoundFilters @ 0x1407FD720 (_CmGetDeviceCompoundFilters.c)
 *     _CmGetDeviceSiblings @ 0x14083947C (_CmGetDeviceSiblings.c)
 *     _CmGetDeviceChildren @ 0x140839640 (_CmGetDeviceChildren.c)
 *     _CmGetDeviceRelationsList @ 0x1408514D4 (_CmGetDeviceRelationsList.c)
 */

__int64 __fastcall CmGetDeviceMappedPropertyFromComposite(
        __int64 a1,
        const wchar_t *a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        wchar_t *a6,
        unsigned int a7,
        int *a8,
        int a9)
{
  wchar_t *v9; // r14
  __int64 v10; // r13
  int *v11; // rsi
  int v13; // edx
  unsigned int DeviceRegProp; // ebx
  unsigned int v17; // r8d
  unsigned int v18; // r12d
  unsigned int v19; // eax
  int v20; // r13d
  __int64 v21; // rax
  int v22; // edi
  int v23; // r12d
  __int64 v25; // rcx
  _DWORD *v26; // r11
  __int64 v27; // rax
  __int64 v28; // rax
  int v29; // ecx
  int DeviceStatus; // eax
  __int64 v31; // rax
  int v32; // r8d
  int v33; // ecx
  __int64 v34; // rax
  int v35; // r8d
  int *v36; // rax
  int v37; // eax
  __int64 v38; // rax
  __int64 v39; // rax
  unsigned int ObjectProperty; // eax
  __int64 v41; // rax
  __int64 v42; // rax
  int v43; // eax
  int v44; // eax
  bool v45; // zf
  __int64 v46; // rax
  __int64 v47; // rax
  _DWORD *v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  int v51; // r8d
  int DeviceProperty; // eax
  __int64 v53; // rcx
  __int64 v54; // rax
  int v55; // ecx
  int v56; // eax
  bool v57; // zf
  __int64 v58; // rax
  int v59; // eax
  int v60; // eax
  __int64 v61; // rcx
  __int64 v62; // rax
  __int64 v63; // rax
  int v64; // ecx
  char v65; // cl
  __int64 v66; // rax
  __int64 v67; // rax
  unsigned int v68; // eax
  __int64 v69; // rax
  unsigned int DeviceParent; // eax
  unsigned int v71; // eax
  __int64 v72; // rax
  int v73; // eax
  int v74; // eax
  __int64 v75; // rax
  unsigned int DeviceSiblings; // eax
  int v77; // edx
  __int64 v78; // rcx
  __int64 v79; // rax
  __int64 v80; // rax
  int v81; // r8d
  int v82; // eax
  __int64 v83; // rcx
  __int64 v84; // rcx
  __int64 v85; // rax
  unsigned int DeviceChildren; // eax
  __int64 v87; // rax
  _DWORD *v88; // rax
  int Len; // eax
  unsigned int v90; // [rsp+20h] [rbp-E0h]
  unsigned int v91; // [rsp+20h] [rbp-E0h]
  int *dwFlags; // [rsp+28h] [rbp-D8h]
  char v93[8]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v94; // [rsp+68h] [rbp-98h]
  NTSTRSAFE_PCWSTR pszSrc; // [rsp+70h] [rbp-90h]
  int v96; // [rsp+78h] [rbp-88h] BYREF
  int v97; // [rsp+7Ch] [rbp-84h] BYREF
  unsigned int v98; // [rsp+80h] [rbp-80h] BYREF
  int v99; // [rsp+84h] [rbp-7Ch] BYREF
  unsigned int v100; // [rsp+88h] [rbp-78h]
  unsigned int v101; // [rsp+8Ch] [rbp-74h] BYREF
  unsigned int v102; // [rsp+90h] [rbp-70h] BYREF
  _DWORD *v103; // [rsp+98h] [rbp-68h]
  UNICODE_STRING DestinationString; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v105; // [rsp+B0h] [rbp-50h]
  int v106; // [rsp+B8h] [rbp-48h] BYREF
  int v107; // [rsp+BCh] [rbp-44h] BYREF
  size_t pcchLength; // [rsp+C0h] [rbp-40h] BYREF
  HANDLE Handle; // [rsp+C8h] [rbp-38h] BYREF
  __int128 Buf2; // [rsp+D0h] [rbp-30h] BYREF
  __int128 Buf1; // [rsp+E0h] [rbp-20h] BYREF
  wchar_t Str2[40]; // [rsp+F0h] [rbp-10h] BYREF
  WCHAR SourceString[40]; // [rsp+140h] [rbp+40h] BYREF

  v9 = a6;
  v10 = a1;
  v11 = a8;
  v94 = a1;
  pszSrc = a2;
  v13 = a9;
  v105 = a3;
  v103 = a5;
  DeviceRegProp = 0;
  v102 = 0;
  v96 = 0;
  v98 = 0;
  v99 = 0;
  v101 = 0;
  v106 = 0;
  pcchLength = 0LL;
  Handle = 0LL;
  v97 = 0;
  v107 = 0;
  v93[0] = 0;
  DestinationString = 0LL;
  Buf2 = 0LL;
  Buf1 = 0LL;
  if ( (_WORD)a9 )
    return (unsigned int)-1073741811;
  *a5 = 0;
  v17 = v13 & 0xFFFF0000;
  *v11 = 0;
  v100 = v13 & 0xFFFF0000;
  if ( a6 )
  {
    v18 = a7;
    v9 = (wchar_t *)(-(__int64)(a7 != 0) & (unsigned __int64)a6);
  }
  else
  {
    v18 = 0;
    a7 = 0;
  }
  v19 = *(_DWORD *)(a4 + 16);
  if ( v19 < 2 )
    return (unsigned int)-1073741264;
  switch ( v19 )
  {
    case 0xAu:
      v39 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_NAME.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_NAME.fmtid.Data1 )
        v39 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_NAME.fmtid.Data4;
      if ( v39 )
      {
        v75 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_Siblings.fmtid.Data1;
        if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_Siblings.fmtid.Data1 )
          v75 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_Siblings.fmtid.Data4;
        if ( v75 )
          return DeviceRegProp;
        v98 = v18 >> 1;
        DeviceSiblings = CmGetDeviceSiblings(a1, a2, v9, &v98);
        DeviceRegProp = DeviceSiblings;
        if ( DeviceSiblings != -1073741789 && DeviceSiblings )
          goto LABEL_30;
        *v11 = 2 * v98;
        *v103 = 8210;
        if ( a7 >= *v11 )
          goto LABEL_30;
        return (unsigned int)-1073741789;
      }
      ObjectProperty = PnpGetObjectProperty(
                         a1,
                         (_DWORD)a2,
                         1,
                         a3,
                         0LL,
                         (__int64)&DEVPKEY_Device_FriendlyName,
                         (__int64)a5,
                         (__int64)v9,
                         v18,
                         (__int64)&v96,
                         v17);
      DeviceRegProp = ObjectProperty;
      if ( ObjectProperty && ObjectProperty != -1073741789 )
      {
        v22 = (int)pszSrc;
        if ( ObjectProperty == -1073741275 )
        {
          v71 = PnpGetObjectProperty(
                  v10,
                  (_DWORD)pszSrc,
                  1,
                  v105,
                  0LL,
                  (__int64)&DEVPKEY_Device_DeviceDesc,
                  (__int64)v103,
                  (__int64)v9,
                  a7,
                  (__int64)&v96,
                  v100);
          DeviceRegProp = v71;
          if ( !v71 || v71 == -1073741789 )
          {
            *v11 = v96;
          }
          else if ( v71 == -1073741275 )
          {
            return DeviceRegProp;
          }
        }
        goto LABEL_74;
      }
      *v11 = v96;
LABEL_73:
      v22 = (int)pszSrc;
LABEL_74:
      v23 = v10;
      goto LABEL_32;
    case 0x100u:
      v25 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_InstanceId.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_InstanceId.fmtid.Data1 )
        v25 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_InstanceId.fmtid.Data4;
      if ( v25 )
        goto LABEL_21;
      DeviceRegProp = RtlUnalignedStringCchLengthW(a2, 0xC8uLL, &pcchLength);
      if ( (DeviceRegProp & 0x80000000) == 0 )
      {
        *v11 = 2 * pcchLength + 2;
        *v26 = 18;
        if ( v18 >= *v11 )
        {
          v22 = (int)pszSrc;
          DeviceRegProp = RtlStringCbCopyExW(v9, (unsigned int)*v11, pszSrc, 0LL, 0LL, 0x900u);
          v23 = v10;
          if ( (DeviceRegProp & 0x80000000) != 0 )
          {
            v88 = v103;
            *v11 = 0;
            *v88 = 0;
          }
          goto LABEL_32;
        }
        return (unsigned int)-1073741789;
      }
      goto LABEL_73;
    case 2u:
      v31 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_DevNodeStatus.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_DevNodeStatus.fmtid.Data1 )
        v31 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_DevNodeStatus.fmtid.Data4;
      if ( v31 )
      {
        v46 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_SafeRemovalRequired.fmtid.Data1;
        if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_SafeRemovalRequired.fmtid.Data1 )
          v46 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_SafeRemovalRequired.fmtid.Data4;
        if ( v46 )
        {
          v47 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_ContainerId.fmtid.Data1;
          if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_ContainerId.fmtid.Data1 )
            v47 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_ContainerId.fmtid.Data4;
          if ( v47 )
            return DeviceRegProp;
          v96 = 78;
          DeviceRegProp = CmGetDeviceRegProp(
                            a1,
                            (_DWORD)a2,
                            v105,
                            37,
                            (__int64)&v107,
                            (__int64)Str2,
                            (__int64)&v96,
                            v13);
          if ( (DeviceRegProp & 0x80000000) != 0 )
            goto LABEL_30;
          if ( wcscmp(L"{00000000-0000-0000-0000-000000000000}", Str2) )
          {
            v48 = v103;
            *v11 = 16;
            *v48 = 13;
            if ( a7 >= *v11 )
            {
              v22 = (int)pszSrc;
              DeviceRegProp = CmGetDeviceContainerIdFromBase(v10, pszSrc, Str2, SourceString);
              if ( (DeviceRegProp & 0x80000000) == 0 )
              {
                DeviceRegProp = RtlInitUnicodeStringEx(&DestinationString, SourceString);
                if ( (DeviceRegProp & 0x80000000) == 0 )
                  DeviceRegProp = RtlGUIDFromString(&DestinationString, (GUID *)v9);
              }
              goto LABEL_31;
            }
            return (unsigned int)-1073741789;
          }
          return (unsigned int)-1073741275;
        }
        *v11 = 1;
        *a5 = 17;
        if ( v18 < *v11 )
          return (unsigned int)-1073741789;
        v65 = -((unsigned __int8)CmIsDeviceSafeRemovalRequired(a1, a2, a3) != 0);
        goto LABEL_158;
      }
LABEL_55:
      DeviceRegProp = CmGetDeviceStatus(v10, (_DWORD)a2, v105, (unsigned int)&v99, (__int64)&v101, (__int64)&v102);
      if ( (DeviceRegProp & 0x80000000) == 0 )
      {
        v32 = *(_DWORD *)(a4 + 16);
        v33 = v99;
        if ( v32 == 2 )
        {
          v34 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_DevNodeStatus.fmtid.Data1;
          if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_DevNodeStatus.fmtid.Data1 )
            v34 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_DevNodeStatus.fmtid.Data4;
          if ( !v34 )
            goto LABEL_60;
        }
        if ( v32 != 3 )
          goto LABEL_163;
        v66 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_ProblemCode.fmtid.Data1;
        if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_ProblemCode.fmtid.Data1 )
          v66 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_ProblemCode.fmtid.Data4;
        if ( !v66 )
        {
LABEL_60:
          v35 = 7;
        }
        else
        {
LABEL_163:
          if ( (v99 & 0x400) == 0 )
            return (unsigned int)-1073741275;
          v35 = 24;
        }
        v36 = v103;
        *v11 = 4;
        *v36 = v35;
        if ( a7 < *v11 )
          return (unsigned int)-1073741789;
        v37 = *(_DWORD *)(a4 + 16);
        if ( v37 == 2 )
        {
          v38 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_DevNodeStatus.fmtid.Data1;
          if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_DevNodeStatus.fmtid.Data1 )
            v38 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_DevNodeStatus.fmtid.Data4;
          if ( !v38 )
          {
            *(_DWORD *)v9 = v33;
            return DeviceRegProp;
          }
        }
        else if ( v37 == 3 )
        {
          v67 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_ProblemCode.fmtid.Data1;
          if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_ProblemCode.fmtid.Data1 )
            v67 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_ProblemCode.fmtid.Data4;
          if ( !v67 )
          {
            v68 = (v33 & 0x400) != 0 ? v101 : 0;
LABEL_170:
            *(_DWORD *)v9 = v68;
            return DeviceRegProp;
          }
        }
        v68 = v102;
        goto LABEL_170;
      }
      goto LABEL_73;
    case 3u:
      v61 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_ProblemCode.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_ProblemCode.fmtid.Data1 )
        v61 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_ProblemCode.fmtid.Data4;
      if ( !v61 )
        goto LABEL_55;
      break;
  }
  if ( v19 != 12 )
  {
    v20 = 4;
    if ( v19 != 4 )
    {
      if ( v19 == 5 )
      {
        v27 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_RemovalRelations.fmtid.Data1;
        if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_RemovalRelations.fmtid.Data1 )
          v27 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_RemovalRelations.fmtid.Data4;
        if ( !v27 )
        {
          v20 = 8;
          goto LABEL_219;
        }
        v28 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_IsPresent.fmtid.Data1;
        if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_IsPresent.fmtid.Data1 )
          v28 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_IsPresent.fmtid.Data4;
        if ( v28 )
          return DeviceRegProp;
        *v11 = 1;
        *a5 = 17;
        if ( v18 < *v11 )
          return (unsigned int)-1073741789;
        DeviceRegProp = RtlInitUnicodeStringEx(&DestinationString, a2);
        if ( (DeviceRegProp & 0x80000000) != 0 )
          goto LABEL_30;
        v29 = v94;
        *(_BYTE *)v9 = 0;
        DeviceStatus = NtPlugPlayGetDeviceStatus(
                         v29,
                         (unsigned int)&DestinationString,
                         (unsigned int)&v99,
                         (unsigned int)&v101,
                         (__int64)&v102);
        DeviceRegProp = DeviceStatus;
        if ( DeviceStatus == -1073741810 )
          return 0;
        if ( DeviceStatus < 0 )
          return DeviceRegProp;
      }
      else
      {
        if ( v19 != 6 )
        {
          if ( v19 == 7 )
          {
            v83 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_BusRelations.fmtid.Data1;
            if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_BusRelations.fmtid.Data1 )
              v83 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_BusRelations.fmtid.Data4;
            if ( v83 )
              goto LABEL_20;
            v20 = 32;
          }
          else
          {
            if ( v19 != 11 )
            {
              switch ( v19 )
              {
                case 8u:
                  v49 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_Parent.fmtid.Data1;
                  if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_Parent.fmtid.Data1 )
                    v49 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_Parent.fmtid.Data4;
                  if ( v49 )
                  {
                    v50 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_ReportedDeviceIdsHash.fmtid.Data1;
                    if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_ReportedDeviceIdsHash.fmtid.Data1 )
                      v50 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_ReportedDeviceIdsHash.fmtid.Data4;
                    if ( v50 )
                      return DeviceRegProp;
                    *a5 = 7;
                    *v11 = 4;
                    DeviceRegProp = RtlInitUnicodeStringEx(&DestinationString, a2);
                    if ( (DeviceRegProp & 0x80000000) != 0 )
                      goto LABEL_30;
                    v51 = 13;
                    dwFlags = (int *)&a7;
                    goto LABEL_114;
                  }
                  v98 = v18 >> 1;
                  v23 = v94;
                  DeviceParent = CmGetDeviceParent(v94, a2, v9, &v98);
                  DeviceRegProp = DeviceParent;
                  if ( DeviceParent && DeviceParent != -1073741789 )
                    goto LABEL_184;
                  *v11 = 2 * v98;
                  *v103 = 18;
                  break;
                case 9u:
                  v85 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_Children.fmtid.Data1;
                  if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_Children.fmtid.Data1 )
                    v85 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_Children.fmtid.Data4;
                  if ( v85 )
                    return DeviceRegProp;
                  v98 = v18 >> 1;
                  v23 = v94;
                  DeviceChildren = CmGetDeviceChildren(v94, a2, v9, &v98);
                  DeviceRegProp = DeviceChildren;
                  if ( DeviceChildren != -1073741789 && DeviceChildren )
                    goto LABEL_184;
                  *v11 = 2 * v98;
                  *v103 = 8210;
                  break;
                case 0xFu:
                  v72 = *(_QWORD *)a4 - DEVPKEY_Device_IsConnected;
                  if ( *(_QWORD *)a4 == DEVPKEY_Device_IsConnected )
                    v72 = *(_QWORD *)(a4 + 8) - 0x293B573F92A15394LL;
                  if ( v72 )
                    return DeviceRegProp;
                  *a5 = 17;
                  *v11 = 1;
                  if ( !v18 )
                    return (unsigned int)-1073741789;
                  v23 = v94;
                  DeviceRegProp = RtlInitUnicodeStringEx(&DestinationString, a2);
                  if ( (DeviceRegProp & 0x80000000) == 0 )
                  {
                    *(_BYTE *)v9 = 0;
                    v73 = NtPlugPlayGetDeviceStatus(
                            v23,
                            (unsigned int)&DestinationString,
                            (unsigned int)&v99,
                            (unsigned int)&v101,
                            (__int64)&v102);
                    DeviceRegProp = v73;
                    if ( v73 == -1073741810 )
                      return 0;
                    if ( v73 < 0 || (v99 & 0x2000000) != 0 )
                      return DeviceRegProp;
                    v22 = (int)pszSrc;
                    v74 = PnpGetObjectProperty(
                            v23,
                            (_DWORD)pszSrc,
                            1,
                            0,
                            0LL,
                            (__int64)&DEVPKEY_Device_PresenceNotForDevice,
                            (__int64)&v97,
                            (__int64)v93,
                            1,
                            (__int64)&v96,
                            v100);
                    DeviceRegProp = v74;
                    if ( v74 < 0 )
                    {
                      if ( v74 != -1073741275 && v74 != -1073741789 )
                        goto LABEL_32;
                      DeviceRegProp = 0;
                      goto LABEL_51;
                    }
                    if ( v97 != 17 )
                      goto LABEL_51;
                    v45 = v93[0] == -1;
LABEL_92:
                    if ( v45 )
                      return DeviceRegProp;
                    goto LABEL_51;
                  }
LABEL_184:
                  v22 = (int)pszSrc;
                  goto LABEL_32;
                case 0x10u:
                  v54 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_IsRebootRequired.fmtid.Data1;
                  if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_IsRebootRequired.fmtid.Data1 )
                    v54 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_IsRebootRequired.fmtid.Data4;
                  if ( v54 )
                    return DeviceRegProp;
                  *a5 = 17;
                  *v11 = 1;
                  if ( !v18 )
                    return (unsigned int)-1073741789;
                  DeviceRegProp = RtlInitUnicodeStringEx(&DestinationString, a2);
                  if ( (DeviceRegProp & 0x80000000) != 0 )
                    goto LABEL_30;
                  v55 = v94;
                  *(_BYTE *)v9 = 0;
                  v56 = NtPlugPlayGetDeviceStatus(
                          v55,
                          (unsigned int)&DestinationString,
                          (unsigned int)&v99,
                          (unsigned int)&v101,
                          (__int64)&v102);
                  DeviceRegProp = v56;
                  if ( v56 != -1073741810 )
                  {
                    if ( v56 < 0 )
                      return DeviceRegProp;
                    if ( (v99 & 0x100) != 0 )
                      goto LABEL_51;
                    if ( (v99 & 0x400) == 0 )
                      return DeviceRegProp;
                    v57 = v101 == 14;
                    goto LABEL_133;
                  }
                  return 0;
                case 0xEu:
                  v79 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_Stack.fmtid.Data1;
                  if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_Stack.fmtid.Data1 )
                    v79 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_Stack.fmtid.Data4;
                  if ( v79 )
                    return DeviceRegProp;
                  *a5 = 8210;
                  DeviceRegProp = RtlInitUnicodeStringEx(&DestinationString, a2);
                  if ( (DeviceRegProp & 0x80000000) != 0 )
                    goto LABEL_30;
                  dwFlags = v11;
                  v51 = 14;
LABEL_114:
                  v90 = v18;
                  v23 = v94;
                  DeviceProperty = NtPlugPlayGetDeviceProperty(
                                     v94,
                                     (unsigned int)&DestinationString,
                                     v51,
                                     (_DWORD)v9,
                                     v90,
                                     (__int64)dwFlags);
                  DeviceRegProp = DeviceProperty;
                  if ( DeviceProperty != -1073741772 )
                  {
                    if ( DeviceProperty >= 0 )
                      return DeviceRegProp;
                    goto LABEL_184;
                  }
                  return (unsigned int)-1073741275;
                default:
LABEL_20:
                  LODWORD(v10) = v94;
                  v17 = v100;
                  goto LABEL_21;
              }
              if ( a7 < *v11 )
                return (unsigned int)-1073741789;
              goto LABEL_184;
            }
            v84 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_TransportRelations.fmtid.Data1;
            if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_TransportRelations.fmtid.Data1 )
              v84 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_TransportRelations.fmtid.Data4;
            if ( v84 )
              goto LABEL_20;
            v20 = 64;
          }
LABEL_219:
          v91 = v18 >> 1;
          v23 = v94;
          DeviceRegProp = CmGetDeviceRelationsList(v94, (_DWORD)a2, v20, (_DWORD)v9, v91, (__int64)&v98);
          if ( DeviceRegProp == -1073741772 )
            return (unsigned int)-1073741275;
          if ( !DeviceRegProp || DeviceRegProp == -1073741789 )
          {
            *v103 = 8210;
            if ( DeviceRegProp )
              Len = v98;
            else
              Len = PnpMultiSzGetLen(v9);
            *v11 = 2 * Len;
            return DeviceRegProp;
          }
          goto LABEL_184;
        }
        v41 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_PowerRelations.fmtid.Data1;
        if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_PowerRelations.fmtid.Data1 )
          v41 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_PowerRelations.fmtid.Data4;
        if ( !v41 )
        {
          v20 = 16;
          goto LABEL_219;
        }
        v42 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_HasProblem.fmtid.Data1;
        if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_HasProblem.fmtid.Data1 )
          v42 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_HasProblem.fmtid.Data4;
        if ( v42 )
          return DeviceRegProp;
        *a5 = 17;
        *v11 = 1;
        if ( !v18 )
          return (unsigned int)-1073741789;
        v23 = v94;
        DeviceRegProp = RtlInitUnicodeStringEx(&DestinationString, a2);
        if ( (DeviceRegProp & 0x80000000) != 0 )
          goto LABEL_184;
        *(_BYTE *)v9 = 0;
        v43 = NtPlugPlayGetDeviceStatus(
                v23,
                (unsigned int)&DestinationString,
                (unsigned int)&v99,
                (unsigned int)&v101,
                (__int64)&v102);
        DeviceRegProp = v43;
        if ( v43 == -1073741810 )
          return 0;
        if ( v43 < 0 )
          return DeviceRegProp;
        if ( (v99 & 0x8000) == 0 )
        {
          if ( (v99 & 0x400) == 0 || v101 <= 0x1D && (v77 = 591396864, _bittest(&v77, v101)) )
          {
            if ( (v99 & 8) != 0 )
              return DeviceRegProp;
            v22 = (int)pszSrc;
            v44 = PnpGetObjectProperty(
                    v23,
                    (_DWORD)pszSrc,
                    1,
                    v105,
                    0LL,
                    (__int64)&DEVPKEY_Device_Capabilities,
                    (__int64)&v97,
                    (__int64)&v106,
                    4,
                    (__int64)&v96,
                    v100);
            DeviceRegProp = v44;
            if ( v44 == -1073741275 )
              return 0;
            if ( v44 < 0 )
              goto LABEL_32;
            v45 = (v106 & 0x40) == 0;
            goto LABEL_92;
          }
        }
      }
LABEL_51:
      *(_BYTE *)v9 = -1;
      return DeviceRegProp;
    }
    v62 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_EjectionRelations.fmtid.Data1;
    if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_EjectionRelations.fmtid.Data1 )
      v62 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_EjectionRelations.fmtid.Data4;
    if ( !v62 )
      goto LABEL_219;
    v63 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_InLocalMachineContainer.fmtid.Data1;
    if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_InLocalMachineContainer.fmtid.Data1 )
      v63 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_InLocalMachineContainer.fmtid.Data4;
    if ( v63 )
      return DeviceRegProp;
    v23 = v94;
    v64 = v94;
    *a5 = 17;
    *v11 = 1;
    DeviceRegProp = PnpGetObjectProperty(
                      v64,
                      (_DWORD)a2,
                      1,
                      a3,
                      0LL,
                      (__int64)&DEVPKEY_Device_ContainerId,
                      (__int64)&v97,
                      (__int64)&Buf2,
                      16,
                      (__int64)&v96,
                      v17);
    if ( (DeviceRegProp & 0x80000000) != 0 )
      goto LABEL_184;
    DeviceRegProp = PnpGetObjectProperty(
                      v23,
                      (unsigned int)L"HTREE\\ROOT\\0",
                      1,
                      0,
                      0LL,
                      (__int64)&DEVPKEY_Device_BaseContainerId,
                      (__int64)&v97,
                      (__int64)&Buf1,
                      16,
                      (__int64)&v96,
                      v100);
    if ( (DeviceRegProp & 0x80000000) != 0 )
      goto LABEL_184;
    if ( a7 < *v11 )
      return (unsigned int)-1073741789;
    v65 = (memcmp(&Buf1, &Buf2, 0x10uLL) != 0) - 1;
LABEL_158:
    *(_BYTE *)v9 = v65;
    return DeviceRegProp;
  }
  v78 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_ProblemStatus.fmtid.Data1;
  if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_ProblemStatus.fmtid.Data1 )
    v78 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_ProblemStatus.fmtid.Data4;
  if ( !v78 )
    goto LABEL_55;
LABEL_21:
  switch ( v19 )
  {
    case 0x14u:
      v87 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_DependencyProviders.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_DependencyProviders.fmtid.Data1 )
        v87 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_DependencyProviders.fmtid.Data4;
      if ( v87 )
        return DeviceRegProp;
      *a5 = 8210;
      DeviceRegProp = RtlInitUnicodeStringEx(&DestinationString, a2);
      if ( (DeviceRegProp & 0x80000000) != 0 )
        goto LABEL_30;
      v81 = 15;
LABEL_235:
      v82 = NtPlugPlayGetDeviceProperty(v10, (unsigned int)&DestinationString, v81, (_DWORD)v9, v18, (__int64)v11);
      DeviceRegProp = v82;
      if ( v82 == -1073741772 )
        return (unsigned int)-1073741275;
      if ( v82 >= 0 )
        return DeviceRegProp;
      goto LABEL_30;
    case 0x15u:
      v80 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_DependencyDependents.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_DependencyDependents.fmtid.Data1 )
        v80 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_DependencyDependents.fmtid.Data4;
      if ( v80 )
        return DeviceRegProp;
      *a5 = 8210;
      DeviceRegProp = RtlInitUnicodeStringEx(&DestinationString, a2);
      if ( (DeviceRegProp & 0x80000000) != 0 )
        goto LABEL_30;
      v81 = 16;
      goto LABEL_235;
    case 0x1Au:
      v58 = *(_QWORD *)a4 - DEVPKEY_Device_OmitFromSystemSpec;
      if ( *(_QWORD *)a4 == DEVPKEY_Device_OmitFromSystemSpec )
        v58 = *(_QWORD *)(a4 + 8) + 0x298AF3586C1A6853LL;
      if ( v58 )
        return DeviceRegProp;
      *a5 = 17;
      *v11 = 1;
      if ( v18 )
      {
        *(_BYTE *)v9 = 0;
        v59 = PnpGetObjectProperty(
                v10,
                (_DWORD)a2,
                1,
                a3,
                0LL,
                (__int64)DEVPKEY_Device_UpdateWithUngroupedDrivers,
                (__int64)&v97,
                (__int64)v93,
                1,
                (__int64)&v96,
                v17);
        DeviceRegProp = v59;
        if ( v59 >= 0 )
        {
          if ( v97 == 17 && v96 == 1 )
          {
            v57 = v93[0] == 0;
LABEL_133:
            if ( !v57 )
              return DeviceRegProp;
            goto LABEL_51;
          }
        }
        else if ( v59 != -1073741275 && v59 != -1073741789 )
        {
          goto LABEL_30;
        }
        v22 = (int)pszSrc;
        v60 = PnpGetObjectProperty(
                v10,
                (_DWORD)pszSrc,
                1,
                v105,
                0LL,
                (__int64)DEVPKEY_Device_DriverInGroup,
                (__int64)&v97,
                (__int64)v93,
                1,
                (__int64)&v96,
                v100);
        DeviceRegProp = v60;
        if ( v60 < 0 )
        {
          if ( v60 != -1073741275 && v60 != -1073741789 )
            goto LABEL_31;
          return 0;
        }
        if ( v97 != 17 || v96 != 1 )
          return DeviceRegProp;
        v57 = v93[0] == -1;
        goto LABEL_133;
      }
      return (unsigned int)-1073741789;
  }
  if ( v19 != 22 )
    goto LABEL_25;
  v53 = *(_QWORD *)a4 - DEVPKEY_Device_CompoundUpperFilters;
  if ( *(_QWORD *)a4 == DEVPKEY_Device_CompoundUpperFilters )
    v53 = *(_QWORD *)(a4 + 8) - 0x293B573F92A15394LL;
  if ( v53 )
  {
LABEL_25:
    if ( v19 != 23 )
    {
      if ( v19 != 102 )
        return DeviceRegProp;
      v69 = *(_QWORD *)a4 - DEVPKEY_Device_EffectiveRestrictedSD;
      if ( *(_QWORD *)a4 == DEVPKEY_Device_EffectiveRestrictedSD )
        v69 = *(_QWORD *)(a4 + 8) - 0x57C1C6A499921E96LL;
      if ( v69 )
        return DeviceRegProp;
      DeviceRegProp = PnpGetObjectProperty(
                        v10,
                        (_DWORD)a2,
                        1,
                        a3,
                        0LL,
                        (__int64)&DEVPKEY_Device_RestrictedSD,
                        (__int64)&v97,
                        (__int64)v9,
                        v18,
                        (__int64)&v96,
                        v17);
      if ( (int)(DeviceRegProp + 0x80000000) < 0 || DeviceRegProp == -1073741789 )
      {
        if ( v97 == 19 )
        {
          *v103 = 19;
          *v11 = v96;
          goto LABEL_30;
        }
      }
      else if ( DeviceRegProp != -1073741275 )
      {
        goto LABEL_30;
      }
      v22 = (int)pszSrc;
      DeviceRegProp = PnpGetObjectProperty(
                        v10,
                        (_DWORD)pszSrc,
                        1,
                        v105,
                        0LL,
                        (__int64)&DEVPKEY_Device_InheritedRestrictedSD,
                        (__int64)&v97,
                        (__int64)v9,
                        a7,
                        (__int64)&v96,
                        v100);
      if ( (int)(DeviceRegProp + 0x80000000) < 0 || DeviceRegProp == -1073741789 )
      {
        if ( v97 == 19 )
        {
          *v103 = 19;
          *v11 = v96;
        }
        else
        {
          DeviceRegProp = -1073741275;
        }
      }
      goto LABEL_31;
    }
    v21 = *(_QWORD *)a4 - DEVPKEY_Device_CompoundLowerFilters;
    if ( *(_QWORD *)a4 == DEVPKEY_Device_CompoundLowerFilters )
      v21 = *(_QWORD *)(a4 + 8) - 0x293B573F92A15394LL;
    if ( v21 )
      return DeviceRegProp;
  }
  DeviceRegProp = CmGetDeviceCompoundFilters(v10, (_DWORD)a2, v105, a4, (__int64)a5, (__int64)v9, v18, (__int64)v11);
LABEL_30:
  v22 = (int)pszSrc;
LABEL_31:
  v23 = v94;
LABEL_32:
  if ( DeviceRegProp != -1073741810 )
    return DeviceRegProp;
  DeviceRegProp = CmOpenDeviceRegKey(v23, v22, 16, 0, 1, 0, (__int64)&Handle, 0LL);
  if ( !DeviceRegProp )
  {
    ZwClose(Handle);
    return (unsigned int)-1073741275;
  }
  if ( DeviceRegProp != -1073741810 && DeviceRegProp != -1073741632 )
    return (unsigned int)-1073741823;
  return DeviceRegProp;
}
