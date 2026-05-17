/*
 * XREFs of RtlpMuiRegLoadPreferredUILanguages @ 0x18000B870
 * Callers:
 *     RtlGetThreadPreferredUILanguages @ 0x180011D50 (RtlGetThreadPreferredUILanguages.c)
 *     RtlpSetProcUserMachineLangList @ 0x180012AD4 (RtlpSetProcUserMachineLangList.c)
 *     InitializeUserOrMachineLangList @ 0x180070780 (InitializeUserOrMachineLangList.c)
 * Callees:
 *     RtlpLoadUserUIByPolicy @ 0x18000A8B0 (RtlpLoadUserUIByPolicy.c)
 *     LdrpQueryValueKey @ 0x18000BCE0 (LdrpQueryValueKey.c)
 *     OpenGlobalizationUserSettingsKey @ 0x18000C904 (OpenGlobalizationUserSettingsKey.c)
 *     RtlpMuiRegCreateLanguageList @ 0x180012424 (RtlpMuiRegCreateLanguageList.c)
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x180015960 (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 *     RtlInitUnicodeString @ 0x1800189D0 (RtlInitUnicodeString.c)
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CCE0 (RtlAllocateHeap.c)
 *     RtlpLoadMachineUIByPolicy @ 0x180087880 (RtlpLoadMachineUIByPolicy.c)
 *     NtClose @ 0x18009EFD0 (NtClose.c)
 *     NtOpenKey @ 0x18009F030 (NtOpenKey.c)
 *     RtlpHasMachineUILock @ 0x180110BB4 (RtlpHasMachineUILock.c)
 */

__int64 __fastcall RtlpMuiRegLoadPreferredUILanguages(
        __int64 a1,
        int a2,
        unsigned int a3,
        int a4,
        _BYTE *a5,
        _QWORD *a6)
{
  BOOL v7; // r14d
  __int64 Heap; // r15
  _BYTE *v10; // rdi
  __int64 v11; // rdx
  HANDLE v12; // rcx
  int v13; // ebx
  const WCHAR *v14; // rdx
  __int64 v15; // rsi
  int v16; // ecx
  int v18; // eax
  unsigned int v19; // r8d
  __int64 LanguageList; // [rsp+40h] [rbp-59h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-51h] BYREF
  HANDLE v22; // [rsp+50h] [rbp-49h] BYREF
  HANDLE v23; // [rsp+58h] [rbp-41h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-39h] BYREF
  int v25; // [rsp+70h] [rbp-29h] BYREF
  HANDLE v26; // [rsp+78h] [rbp-21h]
  UNICODE_STRING *p_DestinationString; // [rsp+80h] [rbp-19h]
  int v28; // [rsp+88h] [rbp-11h]
  __int128 v29; // [rsp+90h] [rbp-9h]
  UNICODE_STRING v30; // [rsp+A0h] [rbp+7h] BYREF
  HANDLE v31; // [rsp+F0h] [rbp+57h] BYREF
  int v32; // [rsp+F8h] [rbp+5Fh] BYREF
  int v33; // [rsp+100h] [rbp+67h] BYREF

  v32 = a2;
  v33 = 7;
  v22 = 0LL;
  Handle = 0LL;
  v7 = a3;
  v23 = 0LL;
  LODWORD(v31) = 0;
  Heap = 0LL;
  LanguageList = 0LL;
  LOBYTE(v32) = 0;
  if ( !a1 || (v10 = a5) == 0LL || !a6 )
  {
    v13 = -1073741811;
    goto LABEL_23;
  }
  *a5 = 0;
  if ( a3 > 1 )
    return (unsigned int)-1073741811;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\Software\\Policies\\Microsoft\\MUI\\Settings");
  v25 = 48;
  p_DestinationString = &DestinationString;
  v26 = 0LL;
  v28 = 64;
  v29 = 0LL;
  if ( (int)NtOpenKey(&v23, 131097LL, &v25) >= 0 )
  {
    v13 = RtlpLoadMachineUIByPolicy(v23, a1, &LanguageList);
    if ( !v13 && LanguageList )
    {
      v15 = 0LL;
      goto LABEL_18;
    }
    v12 = v23;
  }
  else
  {
    v12 = 0LL;
    v23 = 0LL;
  }
  if ( v7 && v12 && (int)RtlpHasMachineUILock(v12, &v32) >= 0 )
    v7 = (_BYTE)v32 != 1;
  v13 = OpenGlobalizationUserSettingsKey(0x2000000LL, v11, &v22);
  if ( v13 < 0 )
    goto LABEL_51;
  if ( v7 )
  {
    v13 = RtlpLoadUserUIByPolicy(v22, a1, &LanguageList);
    if ( !v13 && LanguageList )
    {
LABEL_19:
      if ( !LanguageList )
      {
        LOBYTE(v11) = !v7;
        LanguageList = RtlpMuiRegCreateLanguageList(1LL, v11, a1);
        if ( !LanguageList )
          v13 = -1073741801;
      }
      goto LABEL_22;
    }
    RtlInitUnicodeString(&DestinationString, L"Control Panel\\Desktop");
    v26 = v22;
    v25 = 48;
    p_DestinationString = &DestinationString;
    v28 = 64;
    v29 = 0LL;
    v13 = NtOpenKey(&Handle, 131097LL, &v25);
    if ( v13 >= 0 )
    {
      v14 = L"PreferredUILanguages";
      if ( a4 != 3 )
        v14 = L"PreferredUILanguagesPending";
      RtlInitUnicodeString(&DestinationString, v14);
      v15 = 0LL;
      goto LABEL_16;
    }
LABEL_51:
    *v10 = 1;
    goto LABEL_23;
  }
  RtlInitUnicodeString(&DestinationString, L"Control Panel\\Desktop\\MuiCached");
  v26 = v22;
  v25 = 48;
  p_DestinationString = &DestinationString;
  v28 = 64;
  v29 = 0LL;
  v15 = 0LL;
  if ( (int)NtOpenKey(&Handle, 131097LL, &v25) < 0 )
    goto LABEL_17;
  RtlInitUnicodeString(&DestinationString, L"MachinePreferredUILanguages");
LABEL_16:
  v13 = -1073741772;
  v16 = LdrpQueryValueKey(Handle, &DestinationString, &v33, 0LL, &v31);
  if ( v16 == -1073741772 || !(_DWORD)v31 )
    goto LABEL_17;
  if ( v16 != -2147483643 )
    goto LABEL_23;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8LL, (unsigned int)((_DWORD)v31 + 2));
  if ( !Heap )
  {
    v13 = -1073741801;
    goto LABEL_23;
  }
  v13 = LdrpQueryValueKey(Handle, &DestinationString, &v33, Heap, &v31);
  if ( v13 >= 0 )
  {
    if ( v33 == 7 || v33 == 1 )
    {
      v13 = RtlpMuiRegAddMultiSzToLangFallbackList(
              a1,
              Heap,
              (unsigned int)v31 >> 1,
              8LL,
              (unsigned int)!v7 + 2,
              1,
              &LanguageList);
      goto LABEL_49;
    }
LABEL_17:
    v13 = 0;
    *v10 = 1;
    goto LABEL_18;
  }
LABEL_49:
  if ( v13 )
    goto LABEL_50;
LABEL_18:
  if ( v7 || LanguageList && *(_WORD *)(LanguageList + 4) )
    goto LABEL_19;
  v31 = 0LL;
  v32 = 7;
  v33 = 0;
  RtlInitUnicodeString(&v30, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\Settings");
  v25 = 48;
  p_DestinationString = &v30;
  v13 = 0;
  v28 = 64;
  v26 = 0LL;
  v29 = 0LL;
  if ( (int)NtOpenKey(&v31, 131097LL, &v25) < 0 )
    goto LABEL_36;
  RtlInitUnicodeString(&v30, L"PreferredUILanguages");
  v18 = LdrpQueryValueKey(v31, &v30, &v32, 0LL, &v33);
  v11 = 3221225524LL;
  if ( v18 == -1073741772 || !v33 )
    goto LABEL_36;
  if ( v18 == -2147483643 )
  {
    v15 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8LL, (unsigned int)(v33 + 2));
    if ( !v15 )
    {
      v13 = -1073741801;
      goto LABEL_37;
    }
    v13 = LdrpQueryValueKey(v31, &v30, &v32, v15, &v33);
    if ( v13 >= 0 )
    {
      if ( v32 != 7 && v32 != 1 )
      {
        v13 = 0;
LABEL_36:
        *v10 = 1;
        goto LABEL_37;
      }
      v19 = v33;
      *v10 = 0;
      v13 = RtlpMuiRegAddMultiSzToLangFallbackList(a1, v15, v19 >> 1, 8LL, 3, 1, &LanguageList);
    }
  }
  else
  {
    v13 = -1073741772;
  }
LABEL_37:
  if ( v31 )
    NtClose(v31);
  if ( v15 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v15);
  if ( !v13 )
    goto LABEL_19;
LABEL_22:
  *a6 = LanguageList;
  if ( Heap )
LABEL_50:
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, Heap);
LABEL_23:
  if ( Handle )
  {
    NtClose(Handle);
    Handle = 0LL;
  }
  if ( v22 )
  {
    NtClose(v22);
    v22 = 0LL;
  }
  if ( v23 )
    NtClose(v23);
  return (unsigned int)v13;
}
