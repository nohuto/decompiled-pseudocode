/*
 * XREFs of RtlpMatchUserLanguage @ 0x18010B3F0
 * Callers:
 *     RtlLocaleNameToLcid @ 0x180015570 (RtlLocaleNameToLcid.c)
 * Callees:
 *     RtlCompareUnicodeString @ 0x180014A70 (RtlCompareUnicodeString.c)
 *     RtlInitUnicodeString @ 0x1800187C0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     RtlpGetUserLocaleName @ 0x18010B154 (RtlpGetUserLocaleName.c)
 */

bool __fastcall RtlpMatchUserLanguage(PCWSTR SourceString, __int64 a2)
{
  _UNICODE_STRING String2; // [rsp+20h] [rbp-E8h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-D8h] BYREF
  char v6; // [rsp+40h] [rbp-C8h] BYREF

  String2.Buffer = (wchar_t *)&v6;
  String2.MaximumLength = 170;
  if ( (int)RtlpGetUserLocaleName(&String2, a2) < 0 )
    return 0;
  RtlInitUnicodeString(&DestinationString, SourceString);
  return RtlCompareUnicodeString(&DestinationString, &String2, 1u) == 0;
}
