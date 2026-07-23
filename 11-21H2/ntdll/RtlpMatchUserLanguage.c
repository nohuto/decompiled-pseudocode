/*
 * XREFs of RtlpMatchUserLanguage @ 0x180109DBC
 * Callers:
 *     RtlLocaleNameToLcid @ 0x18004C090 (RtlLocaleNameToLcid.c)
 * Callees:
 *     RtlCompareUnicodeString @ 0x1800415D0 (RtlCompareUnicodeString.c)
 *     RtlInitUnicodeString @ 0x18004C040 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     RtlpGetUserLocaleName @ 0x180109C14 (RtlpGetUserLocaleName.c)
 */

bool __fastcall RtlpMatchUserLanguage(PCWSTR SourceString, __int64 a2)
{
  bool result; // al
  _UNICODE_STRING String2; // [rsp+20h] [rbp-E8h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-D8h] BYREF
  char v6; // [rsp+40h] [rbp-C8h] BYREF

  String2.Buffer = (wchar_t *)&v6;
  String2.MaximumLength = 170;
  result = 0;
  if ( (int)RtlpGetUserLocaleName(&String2, a2) >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    if ( !RtlCompareUnicodeString(&DestinationString, &String2, 1u) )
      return 1;
  }
  return result;
}
