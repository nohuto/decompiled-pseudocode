/*
 * XREFs of RtlpMatchUserLanguage @ 0x180109F80
 * Callers:
 *     RtlLocaleNameToLcid @ 0x180015780 (RtlLocaleNameToLcid.c)
 * Callees:
 *     RtlCompareUnicodeString @ 0x180014C80 (RtlCompareUnicodeString.c)
 *     RtlInitUnicodeString @ 0x1800189D0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     RtlpGetUserLocaleName @ 0x180109CE4 (RtlpGetUserLocaleName.c)
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
