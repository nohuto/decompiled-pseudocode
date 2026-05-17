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
  UNICODE_STRING v4; // [rsp+20h] [rbp-E8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-D8h] BYREF
  char v6; // [rsp+40h] [rbp-C8h] BYREF

  v4.Buffer = (wchar_t *)&v6;
  v4.MaximumLength = 170;
  result = 0;
  if ( (int)RtlpGetUserLocaleName(&v4, a2) >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    if ( !(unsigned int)RtlCompareUnicodeString(&DestinationString.Length, &v4.Length, 1) )
      return 1;
  }
  return result;
}
