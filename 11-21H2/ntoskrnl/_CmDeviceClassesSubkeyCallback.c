/*
 * XREFs of _CmDeviceClassesSubkeyCallback @ 0x14083E6C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1402DFB70 (RtlInitUnicodeStringEx.c)
 *     RtlStringCchCopyW @ 0x1402E0200 (RtlStringCchCopyW.c)
 *     RtlStringCchCopyExW @ 0x1402E0340 (RtlStringCchCopyExW.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     _CmValidateDeviceInterfaceName @ 0x14077F150 (_CmValidateDeviceInterfaceName.c)
 *     _RegRtlQueryValue @ 0x14077FC64 (_RegRtlQueryValue.c)
 *     _SysCtxRegOpenKey @ 0x14077FFEC (_SysCtxRegOpenKey.c)
 *     _CmIsDeviceInterfaceEnabled @ 0x140781748 (_CmIsDeviceInterfaceEnabled.c)
 *     RtlEqualUnicodeString @ 0x1407CD6A0 (RtlEqualUnicodeString.c)
 *     _PnpCtxRegEnumKeyWithCallback @ 0x14083EAEC (_PnpCtxRegEnumKeyWithCallback.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall CmDeviceClassesSubkeyCallback(__int64 a1, __int64 a2, const wchar_t *a3, unsigned int *a4)
{
  unsigned __int64 v6; // rsi
  __int64 v7; // rcx
  __int64 v9; // r14
  wchar_t *v10; // rdi
  char v11; // r12
  __int64 v12; // rax
  int v13; // eax
  wchar_t *Pool2; // rax
  size_t v15; // rdx
  wchar_t *v16; // r11
  _WORD *v17; // r11
  __int64 v18; // r8
  unsigned int v19; // esi
  unsigned __int8 (__fastcall *v20)(__int64, wchar_t *, __int64, _QWORD); // rax
  unsigned int v21; // eax
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rsi
  int v27; // [rsp+30h] [rbp-50h] BYREF
  unsigned int KeyHandle[3]; // [rsp+34h] [rbp-4Ch] BYREF
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+40h] [rbp-40h] BYREF
  size_t pcchRemaining; // [rsp+48h] [rbp-38h] BYREF
  UNICODE_STRING String2; // [rsp+50h] [rbp-30h] BYREF
  UNICODE_STRING String1; // [rsp+60h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-10h] BYREF
  char v34; // [rsp+C8h] [rbp+48h] BYREF

  v6 = -1LL;
  *(_QWORD *)&KeyHandle[1] = 0LL;
  v27 = 0;
  v7 = *a4;
  ppszDestEnd = 0LL;
  v9 = 0LL;
  pcchRemaining = 0LL;
  v10 = 0LL;
  v34 = 0;
  v11 = 0;
  DestinationString = 0LL;
  String1 = 0LL;
  String2 = 0LL;
  if ( (_DWORD)v7 == 1 )
  {
    v23 = -1LL;
    do
      ++v23;
    while ( a3[v23] );
    if ( v23 != 38 || *a3 != 123 )
      return 0LL;
  }
  else
  {
    if ( (unsigned int)(v7 - 2) <= 1 )
    {
      v12 = -1LL;
      do
        ++v12;
      while ( a3[v12] );
      if ( !v12 || *a3 != 35 )
        return 0LL;
    }
    if ( (unsigned int)v7 >= 3 && ((_DWORD)v7 != 3 || !*((_BYTE *)a4 + 1428)) )
      goto LABEL_10;
  }
  v24 = 0LL;
  if ( a1 )
    v24 = *(_QWORD *)(a1 + 224);
  if ( (int)SysCtxRegOpenKey(v24, a2, (__int64)a3, 8u, 0x20019u, (__int64)&KeyHandle[1]) < 0 )
    goto LABEL_37;
LABEL_10:
  v13 = *a4;
  if ( *a4 >= 3 )
  {
    if ( v13 == 3 )
    {
      do
        ++v6;
      while ( a3[v6] );
      if ( v6 > 1 && *a3 == 35 )
        v11 = 1;
    }
LABEL_19:
    Pool2 = (wchar_t *)ExAllocatePool2(256LL, 1008LL, 1380994640LL);
    v10 = Pool2;
    if ( !Pool2 )
      goto LABEL_36;
    v15 = 504LL;
    if ( *((_WORD *)a4 + 2) )
    {
      if ( RtlStringCchCopyExW(Pool2, 0x1F8uLL, (NTSTRSAFE_PCWSTR)a4 + 2, &ppszDestEnd, &pcchRemaining, 0x900u) < 0 )
        goto LABEL_35;
      v16 = ppszDestEnd;
      v15 = pcchRemaining - 1;
      *ppszDestEnd = 0;
    }
    else
    {
      v16 = Pool2;
    }
    if ( v11 == 1 || *a4 == 2 )
    {
      if ( RtlStringCchCopyW(v16, v15, a3) < 0 )
        goto LABEL_35;
      if ( v11 == 1 )
        *v17 = 92;
    }
LABEL_27:
    if ( *a4 < 3 )
    {
      v25 = ExAllocatePool2(256LL, 1464LL, 1380994640LL);
      v26 = v25;
      if ( v25 )
      {
        *(_DWORD *)v25 = *a4 + 1;
        RtlStringCchCopyExW((NTSTRSAFE_PWSTR)(v25 + 4), 0x1F8uLL, v10, 0LL, 0LL, 0x900u);
        RtlStringCchCopyExW((NTSTRSAFE_PWSTR)(v26 + 1012), 0xC8uLL, (NTSTRSAFE_PCWSTR)a4 + 506, 0LL, 0LL, 0x900u);
        *(_QWORD *)(v26 + 1416) = *((_QWORD *)a4 + 177);
        *(_DWORD *)(v26 + 1424) = a4[356];
        *(_BYTE *)(v26 + 1428) = *((_BYTE *)a4 + 1428);
        *(_QWORD *)(v26 + 1432) = *((_QWORD *)a4 + 179);
        *(_QWORD *)(v26 + 1440) = *((_QWORD *)a4 + 180);
        *(_QWORD *)(v26 + 1448) = *((_QWORD *)a4 + 181);
        *(_DWORD *)(v26 + 1456) = a4[364];
        *(_DWORD *)(v26 + 1460) = a4[365];
        PnpCtxRegEnumKeyWithCallback(a1, *(_QWORD *)&KeyHandle[1], &CmDeviceClassesSubkeyCallback, v26);
        *((_QWORD *)a4 + 177) = *(_QWORD *)(v26 + 1416);
        a4[356] = *(_DWORD *)(v26 + 1424);
        a4[365] = *(_DWORD *)(v26 + 1460);
        *((_QWORD *)a4 + 181) = *(_QWORD *)(v26 + 1448);
        a4[364] = *(_DWORD *)(v26 + 1456);
        ExFreePoolWithTag((PVOID)v26, 0);
      }
    }
    else
    {
      *(_QWORD *)v10 = *(_QWORD *)L"\\\\?\\";
      if ( CmValidateDeviceInterfaceName(v7, (__int64)v10) >= 0 && RtlInitUnicodeStringEx(&DestinationString, v10) >= 0 )
      {
        v19 = DestinationString.MaximumLength >> 1;
        if ( !*((_BYTE *)a4 + 1428) || CmIsDeviceInterfaceEnabled(a1, v10, v18, (__int64)&v34) >= 0 && v34 )
        {
          v20 = (unsigned __int8 (__fastcall *)(__int64, wchar_t *, __int64, _QWORD))*((_QWORD *)a4 + 179);
          if ( !v20 || v20(a1, v10, 3LL, *((_QWORD *)a4 + 180)) )
          {
            a4[365] += v19;
            v21 = a4[364];
            if ( v21 > v19 )
            {
              RtlStringCchCopyExW(*((NTSTRSAFE_PWSTR *)a4 + 181), v21, v10, 0LL, 0LL, 0x900u);
              *((_QWORD *)a4 + 181) += 2LL * v19;
              a4[364] -= v19;
            }
          }
        }
      }
    }
    if ( !v10 )
    {
LABEL_36:
      if ( !v9 )
        goto LABEL_37;
      goto LABEL_60;
    }
LABEL_35:
    ExFreePoolWithTag(v10, 0);
    goto LABEL_36;
  }
  if ( v13 != 2 || !*((_WORD *)a4 + 506) )
    goto LABEL_18;
  v9 = ExAllocatePool2(256LL, 400LL, 1380994640LL);
  if ( !v9 )
    goto LABEL_37;
  KeyHandle[0] = 400;
  if ( (int)RegRtlQueryValue(*(HANDLE *)&KeyHandle[1], L"DeviceInstance", &v27, (void *)v9, KeyHandle) >= 0
    && v27 == 1
    && KeyHandle[0] >= 2 )
  {
    *(_WORD *)(v9 + 398) = 0;
    if ( RtlInitUnicodeStringEx(&String1, (PCWSTR)v9) >= 0
      && RtlInitUnicodeStringEx(&String2, (PCWSTR)a4 + 506) >= 0
      && RtlEqualUnicodeString(&String1, &String2, 1u) )
    {
LABEL_18:
      v11 = 0;
      if ( *a4 < 2 )
        goto LABEL_27;
      goto LABEL_19;
    }
  }
LABEL_60:
  ExFreePoolWithTag((PVOID)v9, 0);
LABEL_37:
  if ( *(_QWORD *)&KeyHandle[1] )
    ZwClose(*(HANDLE *)&KeyHandle[1]);
  return 0LL;
}
