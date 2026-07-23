/*
 * XREFs of RtlpGetUserLocaleName @ 0x18010B154
 * Callers:
 *     RtlLcidToLocaleName @ 0x180015D90 (RtlLcidToLocaleName.c)
 *     RtlpMatchUserLanguage @ 0x18010B3F0 (RtlpMatchUserLanguage.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1800187C0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     NtQueryValueKey @ 0x1800A1190 (NtQueryValueKey.c)
 *     memmove @ 0x1800A7A40 (memmove.c)
 *     RtlpGetLocaleDataKey @ 0x18010AFC8 (RtlpGetLocaleDataKey.c)
 */

__int64 __fastcall RtlpGetUserLocaleName(PUNICODE_STRING DestinationString, __int64 a2)
{
  unsigned __int64 v2; // rbp
  void *LocaleDataKey; // rax
  __int64 v5; // rdx
  ULONG v7[8]; // [rsp+50h] [rbp+0h] BYREF

  v2 = (unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0uLL;
  LocaleDataKey = (void *)RtlpGetLocaleDataKey((__int64)DestinationString, a2);
  if ( !LocaleDataKey )
    return 3221225473LL;
  if ( NtQueryValueKey(
         LocaleDataKey,
         (PUNICODE_STRING)&`RtlpGetUserLocaleName'::`2'::KeyValueName,
         KeyValuePartialInformation,
         (PVOID)(v2 + 32),
         0xBAu,
         (PULONG)((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0uLL)) < 0 )
    return 3221225473LL;
  if ( *(_DWORD *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0uLL) + 0x24) != 1 )
    return 3221225473LL;
  v5 = *(_QWORD *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28);
  if ( (v5 & 1) != 0
    || !(_DWORD)v5
    || *(_WORD *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0uLL) + 0x2A + 2 * ((unsigned __int64)(unsigned int)v5 >> 1))
    || (unsigned int)v5 > DestinationString->MaximumLength )
  {
    return 3221225473LL;
  }
  memmove(DestinationString->Buffer, (const void *)(v2 + 44), (unsigned int)v5);
  RtlInitUnicodeString(DestinationString, DestinationString->Buffer);
  return 0LL;
}
