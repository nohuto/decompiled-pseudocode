/*
 * XREFs of RtlpMatchUserLanguage @ 0x18010B420
 * Callers:
 *     RtlLocaleNameToLcid @ 0x180015570 (RtlLocaleNameToLcid.c)
 * Callees:
 *     RtlCompareUnicodeString @ 0x180014A70 (RtlCompareUnicodeString.c)
 *     RtlInitUnicodeString @ 0x1800187C0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     RtlpGetUserLocaleName @ 0x18010B184 (RtlpGetUserLocaleName.c)
 */

bool __fastcall RtlpMatchUserLanguage(PCWSTR SourceString, __int64 a2, __int64 a3, __int64 a4)
{
  UNICODE_STRING v6; // [rsp+20h] [rbp-E8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-D8h] BYREF
  char v8; // [rsp+40h] [rbp-C8h] BYREF

  v6.Buffer = (wchar_t *)&v8;
  v6.MaximumLength = 170;
  if ( (int)RtlpGetUserLocaleName(&v6, a2, a3, a4) < 0 )
    return 0;
  RtlInitUnicodeString(&DestinationString, SourceString);
  return (unsigned int)RtlCompareUnicodeString(&DestinationString.Length, &v6.Length, 1) == 0;
}
