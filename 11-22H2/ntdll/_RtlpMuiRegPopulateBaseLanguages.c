/*
 * XREFs of _RtlpMuiRegPopulateBaseLanguages @ 0x180114000
 * Callers:
 *     _RtlpMuiRegInitPartialLanguage @ 0x180113C48 (_RtlpMuiRegInitPartialLanguage.c)
 * Callees:
 *     LdrpQueryValueKey @ 0x18000BCE0 (LdrpQueryValueKey.c)
 *     RtlCompareUnicodeStrings @ 0x180014B60 (RtlCompareUnicodeStrings.c)
 *     RtlLCIDToCultureName @ 0x180015CC0 (RtlLCIDToCultureName.c)
 *     RtlInitUnicodeString @ 0x1800189D0 (RtlInitUnicodeString.c)
 *     RtlpLoadInstallLanguageFallback @ 0x18008DDF8 (RtlpLoadInstallLanguageFallback.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     ZwEnumerateValueKey @ 0x18009F050 (ZwEnumerateValueKey.c)
 *     NtQueryValueKey @ 0x18009F0D0 (NtQueryValueKey.c)
 *     NtIsUILanguageComitted @ 0x1800A0F20 (NtIsUILanguageComitted.c)
 *     NtQueryInstallUILanguage @ 0x1800A1920 (NtQueryInstallUILanguage.c)
 *     _RtlpMuiRegAddBaseLanguage @ 0x180113604 (_RtlpMuiRegAddBaseLanguage.c)
 *     _RtlpMuiRegValidateAndGetInstallFallbackBase @ 0x180114430 (_RtlpMuiRegValidateAndGetInstallFallbackBase.c)
 *     memset$thunk$772440563353939046 @ 0x180130010 (memset$thunk$772440563353939046.c)
 */

NTSTATUS __fastcall RtlpMuiRegPopulateBaseLanguages(_WORD *a1, __int64 a2, _WORD *a3, __int64 a4)
{
  unsigned __int64 v4; // rbp
  __int64 v8; // r12
  __int16 v9; // ax
  unsigned int v10; // ebx
  NTSTATUS result; // eax
  unsigned __int16 v12; // si
  unsigned __int16 v13; // r14
  bool v14; // sf
  __int64 v15; // r15
  void *v16; // r14
  ULONG i; // eax
  unsigned __int64 v18; // rsi
  __int16 v19; // r14
  unsigned int *v20; // rax
  LANGID InstallUILanguageId[2]; // [rsp+50h] [rbp+0h] BYREF

  v4 = (unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL;
  *(_QWORD *)(v4 + 40) = a2;
  *(_QWORD *)(v4 + 64) = a4;
  *(_DWORD *)(v4 + 32) = 0;
  memset_thunk_772440563353939046(
    (void *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 80),
    0,
    0xAAuLL);
  memset_thunk_772440563353939046(
    (void *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 768),
    0,
    0xAAuLL);
  memset_thunk_772440563353939046(
    (void *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 944),
    0,
    0xAAuLL);
  *(_DWORD *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x18) = 0;
  LODWORD(v8) = 0;
  *(_WORD *)v4 = 0;
  if ( !a1 || !a3 || !a2 )
    return -1073741811;
  v9 = a1[2];
  v10 = 0;
  *(_DWORD *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = 0;
  if ( v9 )
  {
    v12 = a1[3];
    v13 = a1[4];
    *(_WORD *)v4 = v9;
  }
  else
  {
    result = NtQueryInstallUILanguage((LANGID *)((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL));
    if ( result < 0 )
      return result;
    if ( (int)RtlpLoadInstallLanguageFallback((__int64)a1, (_WORD *)(v4 + 8), (_WORD *)(v4 + 12)) >= 0 )
    {
      v13 = *(_WORD *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0xC);
      v12 = *(_WORD *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 8);
    }
    else
    {
      v12 = 0;
      v13 = 0;
    }
    v14 = NtIsUILanguageComitted() < 0;
    v9 = *(_WORD *)v4;
    if ( !v14 )
    {
      a1[4] = v13;
      a1[3] = v12;
      a1[2] = v9;
    }
  }
  v15 = -1LL;
  if ( a3[2] == v9 )
  {
    if ( v12 )
    {
      *(_QWORD *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x38) = ((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL)
                                                                                          + 768;
      *(_DWORD *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 4) = 512;
      *(_WORD *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x32) = 170;
      if ( RtlLCIDToCultureName(v12, (PUNICODE_STRING)(v4 + 48)) )
      {
        if ( NtQueryValueKey(
               *(HANDLE *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x28),
               (PUNICODE_STRING)(v4 + 48),
               KeyValueFullInformation,
               (PVOID)(v4 + 256),
               0x200u,
               (PULONG)(v4 + 4)) >= 0
          && (int)RtlpMuiRegValidateAndGetInstallFallbackBase(a1, v4 + 256, v13, v4 + 944) >= 0
          && (int)RtlpMuiRegAddBaseLanguage((__int64)a1, a3, 0, v4 + 256, (wchar_t *)(v4 + 944)) >= 0 )
        {
          v10 = 1;
          v8 = -1LL;
          do
            ++v8;
          while ( *(_WORD *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x300 + 2 * v8) );
        }
      }
    }
  }
  RtlInitUnicodeString((PUNICODE_STRING)(v4 + 48), L"DefaultFallback");
  v16 = *(void **)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x28);
  *(_DWORD *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 8) = 1;
  *(_DWORD *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 4) = 170;
  if ( (int)LdrpQueryValueKey(v16, (PUNICODE_STRING)(v4 + 48), (_DWORD *)(v4 + 8), (void *)(v4 + 80), (ULONG *)(v4 + 4)) >= 0
    && *(_DWORD *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 8) == 1
    && (!(_DWORD)v8
     || RtlCompareUnicodeStrings(
          (PCWCH)(v4 + 80),
          (unsigned __int64)*(unsigned int *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 4) >> 1,
          (PCWCH)(v4 + 768),
          (unsigned int)v8,
          1u))
    && (RtlInitUnicodeString((PUNICODE_STRING)(v4 + 48), (PCWSTR)(v4 + 80)),
        *(_DWORD *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 4) = 512,
        NtQueryValueKey(
          v16,
          (PUNICODE_STRING)(v4 + 48),
          KeyValueFullInformation,
          (PVOID)(v4 + 256),
          0x200u,
          (PULONG)(v4 + 4)) >= 0)
    && *(_DWORD *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x104) == 7
    && (int)RtlpMuiRegAddBaseLanguage((__int64)a1, a3, v10, v4 + 256, 0LL) >= 0 )
  {
    ++v10;
    do
      ++v15;
    while ( *(_WORD *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x50 + 2 * v15) );
  }
  else
  {
    v15 = *(_QWORD *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x18);
  }
  for ( i = *(_DWORD *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x10);
        v10 < 4
     && ZwEnumerateValueKey(v16, i, KeyValueFullInformation, (PVOID)(v4 + 256), 0x200u, (PULONG)(v4 + 32)) >= 0;
        *(_DWORD *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = i )
  {
    if ( *(_DWORD *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x104) == 7
      && *(_DWORD *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x110) <= 0x200u )
    {
      if ( !(_DWORD)v15 && !(_DWORD)v8 )
        goto LABEL_43;
      v18 = (unsigned __int64)*(unsigned int *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x110) >> 1;
      v19 = *(_WORD *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x114 + 2 * v18);
      *(_WORD *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x114 + 2 * v18) = 0;
      if ( (!(_DWORD)v8
         || RtlCompareUnicodeStrings(
              (PCWCH)(v4 + 276),
              (unsigned __int64)*(unsigned int *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x110) >> 1,
              (PCWCH)(v4 + 768),
              (unsigned int)v8,
              1u))
        && (!(_DWORD)v15
         || RtlCompareUnicodeStrings(
              (PCWCH)(v4 + 276),
              (unsigned __int64)*(unsigned int *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x110) >> 1,
              (PCWCH)(v4 + 80),
              (unsigned int)v15,
              1u)) )
      {
        *(_WORD *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x114 + 2 * v18) = v19;
LABEL_43:
        if ( (int)RtlpMuiRegAddBaseLanguage((__int64)a1, a3, v10, v4 + 256, 0LL) >= 0 )
          ++v10;
      }
    }
    v16 = *(void **)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x28);
    i = *(_DWORD *)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) + 1;
  }
  v20 = *(unsigned int **)(((unsigned __int64)InstallUILanguageId & 0xFFFFFFFFFFFFFFE0uLL) + 0x40);
  if ( v20 )
    *v20 = v10;
  return 0;
}
