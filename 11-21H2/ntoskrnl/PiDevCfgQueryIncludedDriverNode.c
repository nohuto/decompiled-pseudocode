/*
 * XREFs of PiDevCfgQueryIncludedDriverNode @ 0x14094CFE8
 * Callers:
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x1407455A8 (PiDevCfgQueryIncludedDriverConfigurations.c)
 * Callees:
 *     PnpDuplicateUnicodeString @ 0x1402D1DA4 (PnpDuplicateUnicodeString.c)
 *     PnpValidateRegistryMultiSz @ 0x14039A190 (PnpValidateRegistryMultiSz.c)
 *     _wcsicmp @ 0x1403E1490 (_wcsicmp.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     PiDevCfgGetDriverConfigurationKeyScope @ 0x140561968 (PiDevCfgGetDriverConfigurationKeyScope.c)
 *     RtlCreateUnicodeString @ 0x14066A0F0 (RtlCreateUnicodeString.c)
 *     IopGetRegistryValue @ 0x14067B838 (IopGetRegistryValue.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     PiDevCfgGetDriverPackageId @ 0x140745620 (PiDevCfgGetDriverPackageId.c)
 *     PiDevCfgOpenDriverConfiguration @ 0x1407472EC (PiDevCfgOpenDriverConfiguration.c)
 *     PiDevCfgFreeDriverNode @ 0x1407474E4 (PiDevCfgFreeDriverNode.c)
 *     _PnpOpenObjectRegKey @ 0x14077C924 (_PnpOpenObjectRegKey.c)
 *     _SysCtxRegOpenKey @ 0x14077FFEC (_SysCtxRegOpenKey.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall PiDevCfgQueryIncludedDriverNode(__int64 a1, const wchar_t *a2, const WCHAR *a3, int a4, __int64 *a5)
{
  const WCHAR *v6; // r14
  int v8; // ebx
  unsigned int *v9; // r13
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  const wchar_t *v14; // rdx
  int v15; // eax
  __int64 v16; // rcx
  int DriverPackageId; // eax
  int v18; // eax
  int v19; // eax
  __int64 v20; // rax
  __int64 Pool2; // rax
  __int64 v22; // rsi
  UNICODE_STRING *v23; // rcx
  _QWORD *v24; // rax
  NTSTATUS RegistryValue; // eax
  wchar_t *i; // rdi
  int v28; // ecx
  char v29; // r14
  int DriverConfigurationKeyScope; // eax
  int v31; // ecx
  int v32; // ecx
  __int64 v33; // rax
  wchar_t v34; // dx
  HANDLE KeyHandle; // [rsp+40h] [rbp-20h] BYREF
  unsigned int *v36; // [rsp+48h] [rbp-18h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+50h] [rbp-10h] BYREF
  HANDLE Handle; // [rsp+A8h] [rbp+48h] BYREF
  int v39; // [rsp+B8h] [rbp+58h]

  v39 = a4;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  v6 = a2;
  UnicodeString.Buffer = 0LL;
  Handle = 0LL;
  v8 = 0;
  KeyHandle = 0LL;
  v9 = 0LL;
  v36 = 0LL;
  if ( !a2 )
  {
    v14 = *(const wchar_t **)(a1 + 96);
    if ( !v14 || wcsicmp(a3, v14) )
    {
      v15 = PiDevCfgOpenDriverConfiguration(*(void **)(a1 + 16), a3, &KeyHandle);
      v8 = v15;
      if ( v15 == -1073741772 )
      {
        v8 = 0;
      }
      else if ( v15 < 0 )
      {
        goto LABEL_48;
      }
    }
    if ( KeyHandle )
    {
      v6 = *(const WCHAR **)(a1 + 48);
      goto LABEL_19;
    }
    v6 = *(const WCHAR **)(a1 + 344);
    if ( v6 )
    {
      if ( *v6 )
      {
        while ( 1 )
        {
          DriverPackageId = PiDevCfgGetDriverPackageId((int)v6, (__int64)&UnicodeString);
          v8 = DriverPackageId;
          if ( DriverPackageId == -1073741772 )
            goto LABEL_38;
          if ( DriverPackageId < 0 )
            goto LABEL_48;
          v18 = PnpOpenObjectRegKey(
                  *(__int64 *)&PiPnpRtlCtx,
                  (__int64)UnicodeString.Buffer,
                  8u,
                  131097,
                  0,
                  (__int64)&Handle);
          v8 = v18;
          if ( v18 == -1073741772 )
            goto LABEL_38;
          if ( v18 < 0 )
            goto LABEL_48;
          v19 = PiDevCfgOpenDriverConfiguration(Handle, a3, &KeyHandle);
          v8 = v19;
          if ( v19 < 0 )
          {
            if ( v19 != -1073741772 )
              goto LABEL_48;
            ZwClose(Handle);
            Handle = 0LL;
            RtlFreeUnicodeString(&UnicodeString);
            v20 = -1LL;
            do
              ++v20;
            while ( v6[v20] );
            v6 += v20 + 1;
            if ( *v6 )
              continue;
          }
          goto LABEL_40;
        }
      }
      if ( v8 < 0 )
        goto LABEL_48;
LABEL_40:
      if ( KeyHandle )
      {
LABEL_41:
        Pool2 = ExAllocatePool2(256LL, 416LL, 1667526736LL);
        v22 = Pool2;
        if ( !Pool2 )
          goto LABEL_42;
        *(_DWORD *)(Pool2 + 184) = 32;
        v23 = (UNICODE_STRING *)(Pool2 + 40);
        v24 = (_QWORD *)(Pool2 + 224);
        v24[1] = v24;
        *v24 = v24;
        *(_QWORD *)(v22 + 216) = v22 + 208;
        *(_QWORD *)(v22 + 208) = v22 + 208;
        *(_QWORD *)(v22 + 376) = v22 + 368;
        *(_QWORD *)(v22 + 368) = v22 + 368;
        if ( RtlCreateUnicodeString(v23, v6)
          && PnpDuplicateUnicodeString(v22 + 56, (__int64)&UnicodeString)
          && RtlCreateUnicodeString((PUNICODE_STRING)(v22 + 88), a3) )
        {
          *(_DWORD *)(v22 + 104) = v39;
          RegistryValue = IopGetRegistryValue(KeyHandle, L"IncludeScope", 0, &v36);
          v9 = v36;
          v8 = RegistryValue;
          if ( RegistryValue == -1073741772 )
          {
            v8 = 0;
LABEL_77:
            *(_QWORD *)(v22 + 16) = Handle;
            *(_QWORD *)(v22 + 32) = KeyHandle;
            Handle = 0LL;
            KeyHandle = 0LL;
            *a5 = v22;
            goto LABEL_46;
          }
          if ( RegistryValue >= 0 )
          {
            if ( !PnpValidateRegistryMultiSz(v36) )
            {
              v8 = -1073741823;
              goto LABEL_45;
            }
            for ( i = (wchar_t *)((char *)v9 + v9[2]); ; i += v33 + 1 )
            {
              v34 = *i;
              if ( !*i )
                goto LABEL_77;
              v28 = *i - 42;
              if ( *i == 42 )
                v28 = i[1];
              if ( !v28 )
              {
                *(_DWORD *)(v22 + 104) = -1;
                goto LABEL_77;
              }
              v29 = 1;
              if ( v34 != 43 )
              {
                if ( v34 != 45 )
                  goto LABEL_68;
                v29 = 0;
              }
              ++i;
LABEL_68:
              DriverConfigurationKeyScope = PiDevCfgGetDriverConfigurationKeyScope(i);
              v31 = *(_DWORD *)(v22 + 104);
              if ( v29 )
                v32 = DriverConfigurationKeyScope | v31;
              else
                v32 = ~DriverConfigurationKeyScope & v31;
              *(_DWORD *)(v22 + 104) = v32;
              v33 = -1LL;
              do
                ++v33;
              while ( i[v33] );
            }
          }
        }
        else
        {
          v8 = -1073741670;
        }
LABEL_45:
        PiDevCfgFreeDriverNode((char *)v22);
LABEL_46:
        if ( v9 )
          ExFreePoolWithTag(v9, 0);
        goto LABEL_48;
      }
    }
    v8 = -1073740654;
    goto LABEL_50;
  }
  if ( wcsicmp(a2, *(const wchar_t **)(a1 + 48)) )
  {
    v11 = PiDevCfgGetDriverPackageId((int)v6, (__int64)&UnicodeString);
    v8 = v11;
    if ( v11 != -1073741772 )
    {
      if ( v11 < 0 )
        goto LABEL_48;
      v12 = PnpOpenObjectRegKey(
              *(__int64 *)&PiPnpRtlCtx,
              (__int64)UnicodeString.Buffer,
              8u,
              131097,
              0,
              (__int64)&Handle);
      v8 = v12;
      if ( v12 != -1073741772 )
      {
        if ( v12 < 0 )
          goto LABEL_48;
        v13 = PiDevCfgOpenDriverConfiguration(Handle, a3, &KeyHandle);
        v8 = v13;
        if ( v13 != -1073741772 )
        {
LABEL_23:
          if ( v13 < 0 )
            goto LABEL_48;
          goto LABEL_41;
        }
LABEL_11:
        v8 = -1073740654;
        goto LABEL_48;
      }
    }
LABEL_38:
    v8 = -1073740655;
    goto LABEL_48;
  }
  v10 = PiDevCfgOpenDriverConfiguration(*(void **)(a1 + 16), a3, &KeyHandle);
  v8 = v10;
  if ( v10 == -1073741772 )
    goto LABEL_11;
  if ( v10 < 0 )
    goto LABEL_48;
LABEL_19:
  if ( PnpDuplicateUnicodeString((__int64)&UnicodeString, a1 + 56) )
  {
    v16 = 0LL;
    if ( *(_QWORD *)&PiPnpRtlCtx )
      v16 = *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 224LL);
    v13 = SysCtxRegOpenKey(v16, *(_QWORD *)(a1 + 16), 0LL, 0, 0x20019u, (__int64)&Handle);
    v8 = v13;
    goto LABEL_23;
  }
LABEL_42:
  v8 = -1073741670;
LABEL_48:
  if ( KeyHandle )
    ZwClose(KeyHandle);
LABEL_50:
  if ( Handle )
    ZwClose(Handle);
  RtlFreeUnicodeString(&UnicodeString);
  return (unsigned int)v8;
}
