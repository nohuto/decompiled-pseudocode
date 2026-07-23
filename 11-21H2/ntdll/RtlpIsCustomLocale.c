/*
 * XREFs of RtlpIsCustomLocale @ 0x18008FA30
 * Callers:
 *     RtlLocaleNameToLcid @ 0x18004C090 (RtlLocaleNameToLcid.c)
 *     RtlGetParentLocaleName @ 0x18004D7D0 (RtlGetParentLocaleName.c)
 *     RtlIsValidLocaleName @ 0x180109740 (RtlIsValidLocaleName.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x18004C040 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     NtClose @ 0x1800A4250 (NtClose.c)
 *     NtOpenKey @ 0x1800A42B0 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x1800A4350 (NtQueryValueKey.c)
 */

bool __fastcall RtlpIsCustomLocale(PCWSTR SourceString)
{
  unsigned __int64 v1; // rbp
  bool v3; // zf
  HANDLE v4; // rbx
  bool result; // al
  HANDLE KeyHandle; // [rsp+50h] [rbp+0h] BYREF

  v1 = (unsigned __int64)&KeyHandle & 0xFFFFFFFFFFFFFFE0uLL;
  v3 = gCustomCultureRegKey == 0LL;
  *(_QWORD *)((unsigned __int64)&KeyHandle & 0xFFFFFFFFFFFFFFE0uLL) = 0LL;
  if ( v3
    && NtOpenKey(
         (PHANDLE)((unsigned __int64)&KeyHandle & 0xFFFFFFFFFFFFFFE0uLL),
         1u,
         (POBJECT_ATTRIBUTES)&`RtlpGetCustomCultureRegKey'::`2'::ObjAttribute) >= 0
    && _InterlockedCompareExchange64((volatile signed __int64 *)&gCustomCultureRegKey, *(_QWORD *)v1, 0LL) )
  {
    NtClose(*(HANDLE *)v1);
  }
  v4 = gCustomCultureRegKey;
  result = 0;
  if ( gCustomCultureRegKey )
  {
    if ( *SourceString )
    {
      RtlInitUnicodeString((PUNICODE_STRING)(v1 + 16), SourceString);
      if ( NtQueryValueKey(
             v4,
             (PUNICODE_STRING)(v1 + 16),
             KeyValuePartialInformation,
             (PVOID)(v1 + 32),
             0x78u,
             (PULONG)(v1 + 8)) >= 0 )
        return 1;
    }
  }
  return result;
}
