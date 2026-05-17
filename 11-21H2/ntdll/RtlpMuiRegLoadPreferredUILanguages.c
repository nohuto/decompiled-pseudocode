/*
 * XREFs of RtlpMuiRegLoadPreferredUILanguages @ 0x18006EC44
 * Callers:
 *     RtlGetThreadPreferredUILanguages @ 0x1800494B0 (RtlGetThreadPreferredUILanguages.c)
 *     RtlpSetProcUserMachineLangList @ 0x180049D38 (RtlpSetProcUserMachineLangList.c)
 *     InitializeUserOrMachineLangList @ 0x18004D8E4 (InitializeUserOrMachineLangList.c)
 * Callees:
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180028B70 (RtlAllocateHeap.c)
 *     RtlpMuiRegCreateLanguageList @ 0x180049C30 (RtlpMuiRegCreateLanguageList.c)
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x18004B31C (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 *     RtlInitUnicodeString @ 0x18004C040 (RtlInitUnicodeString.c)
 *     RtlpLoadMachineUIByPolicy @ 0x18006DBD0 (RtlpLoadMachineUIByPolicy.c)
 *     LdrpQueryValueKey @ 0x18006F0A8 (LdrpQueryValueKey.c)
 *     OpenGlobalizationUserSettingsKey @ 0x18006F1DC (OpenGlobalizationUserSettingsKey.c)
 *     RtlpLoadUserUIByPolicy @ 0x18006F390 (RtlpLoadUserUIByPolicy.c)
 *     NtClose @ 0x1800A4250 (NtClose.c)
 *     NtOpenKey @ 0x1800A42B0 (NtOpenKey.c)
 *     RtlpHasMachineUILock @ 0x180110734 (RtlpHasMachineUILock.c)
 */

__int64 __fastcall RtlpMuiRegLoadPreferredUILanguages(
        __int64 a1,
        int a2,
        unsigned int a3,
        int a4,
        _BYTE *a5,
        _QWORD *a6)
{
  BOOL v7; // r15d
  const WCHAR *Heap; // r12
  _BYTE *v10; // rdi
  __int64 v11; // rdx
  HANDLE v12; // rcx
  int v13; // ebx
  const WCHAR *v14; // rdx
  int v15; // ecx
  const WCHAR *v16; // rsi
  int v18; // ecx
  int v19; // r8d
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
  unsigned int v33; // [rsp+100h] [rbp+67h] BYREF

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
    goto LABEL_27;
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
      goto LABEL_23;
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
      goto LABEL_25;
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
      goto LABEL_15;
    }
LABEL_51:
    *v10 = 1;
    goto LABEL_27;
  }
  RtlInitUnicodeString(&DestinationString, L"Control Panel\\Desktop\\MuiCached");
  v26 = v22;
  v25 = 48;
  p_DestinationString = &DestinationString;
  v28 = 64;
  v29 = 0LL;
  if ( (int)NtOpenKey(&Handle, 131097LL, &v25) < 0 )
    goto LABEL_39;
  v14 = L"MachinePreferredUILanguages";
LABEL_15:
  RtlInitUnicodeString(&DestinationString, v14);
  v13 = -1073741772;
  v15 = LdrpQueryValueKey(Handle, &DestinationString, &v33, 0LL, &v31);
  if ( v15 == -1073741772 || !(_DWORD)v31 )
    goto LABEL_39;
  if ( v15 != -2147483643 )
    goto LABEL_27;
  Heap = (const WCHAR *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, (unsigned int)((_DWORD)v31 + 2));
  if ( !Heap )
  {
    v13 = -1073741801;
    goto LABEL_27;
  }
  v13 = LdrpQueryValueKey(Handle, &DestinationString, &v33, Heap, &v31);
  if ( v13 < 0 )
    goto LABEL_22;
  if ( v33 != 7 && v33 != 1 )
  {
LABEL_39:
    v13 = 0;
    *v10 = 1;
    goto LABEL_23;
  }
  v13 = RtlpMuiRegAddMultiSzToLangFallbackList(
          a1,
          Heap,
          (unsigned int)v31 >> 1,
          8,
          (unsigned int)!v7 + 2,
          1u,
          &LanguageList);
LABEL_22:
  if ( v13 )
  {
LABEL_26:
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)Heap);
    goto LABEL_27;
  }
LABEL_23:
  v16 = 0LL;
  if ( v7 || LanguageList && *(_WORD *)(LanguageList + 4) )
  {
LABEL_24:
    if ( !LanguageList )
    {
      LanguageList = RtlpMuiRegCreateLanguageList(1, !v7, a1);
      if ( !LanguageList )
        v13 = -1073741801;
    }
    goto LABEL_25;
  }
  v13 = 0;
  v32 = 7;
  v31 = 0LL;
  v33 = 0;
  RtlInitUnicodeString(&v30, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\Settings");
  v25 = 48;
  p_DestinationString = &v30;
  v26 = 0LL;
  v28 = 64;
  v29 = 0LL;
  if ( (int)NtOpenKey(&v31, 131097LL, &v25) < 0 )
    goto LABEL_44;
  RtlInitUnicodeString(&v30, L"PreferredUILanguages");
  v18 = LdrpQueryValueKey(v31, &v30, &v32, 0LL, &v33);
  if ( v18 == -1073741772 || !v33 )
    goto LABEL_44;
  if ( v18 == -2147483643 )
  {
    v16 = (const WCHAR *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, v33 + 2);
    if ( !v16 )
    {
      v13 = -1073741801;
      goto LABEL_45;
    }
    v13 = LdrpQueryValueKey(v31, &v30, &v32, v16, &v33);
    if ( v13 >= 0 )
    {
      if ( v32 != 7 && v32 != 1 )
      {
        v13 = 0;
LABEL_44:
        *v10 = 1;
        goto LABEL_45;
      }
      v19 = v33 >> 1;
      *v10 = 0;
      v13 = RtlpMuiRegAddMultiSzToLangFallbackList(a1, v16, v19, 8, 3, 1u, &LanguageList);
    }
  }
  else
  {
    v13 = -1073741772;
  }
LABEL_45:
  if ( v31 )
    NtClose(v31);
  if ( v16 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)v16);
  if ( !v13 )
    goto LABEL_24;
LABEL_25:
  *a6 = LanguageList;
  if ( Heap )
    goto LABEL_26;
LABEL_27:
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
