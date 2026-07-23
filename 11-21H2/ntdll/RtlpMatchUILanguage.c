/*
 * XREFs of RtlpMatchUILanguage @ 0x180109CF4
 * Callers:
 *     RtlLocaleNameToLcid @ 0x18004C090 (RtlLocaleNameToLcid.c)
 * Callees:
 *     RtlCompareUnicodeString @ 0x1800415D0 (RtlCompareUnicodeString.c)
 *     RtlInitUnicodeString @ 0x18004C040 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     __report_rangecheckfailure @ 0x1800939E0 (__report_rangecheckfailure.c)
 *     RtlpGetUserOrMachineUILanguage4NLS @ 0x180110500 (RtlpGetUserOrMachineUILanguage4NLS.c)
 */

bool __fastcall RtlpMatchUILanguage(PCWSTR SourceString)
{
  _UNICODE_STRING String2; // [rsp+20h] [rbp-E8h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-D8h] BYREF
  WCHAR SourceStringa[88]; // [rsp+40h] [rbp-C8h] BYREF

  *(_QWORD *)&String2.Length = 85LL;
  if ( (int)RtlpGetUserOrMachineUILanguage4NLS(1LL, SourceStringa, &String2) < 0
    || *(_QWORD *)&String2.Length >= 0x55uLL )
  {
    return 0;
  }
  if ( (unsigned __int64)(2LL * *(_QWORD *)&String2.Length) >= 0xAA )
    _report_rangecheckfailure();
  SourceStringa[*(_QWORD *)&String2.Length] = 0;
  RtlInitUnicodeString(&DestinationString, SourceString);
  RtlInitUnicodeString(&String2, SourceStringa);
  return !RtlCompareUnicodeString(&DestinationString, &String2, 1u);
}
