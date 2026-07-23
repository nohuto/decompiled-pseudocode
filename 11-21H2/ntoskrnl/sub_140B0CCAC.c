/*
 * XREFs of sub_140B0CCAC @ 0x140B0CCAC
 * Callers:
 *     sub_140B0C004 @ 0x140B0C004 (sub_140B0C004.c)
 *     sub_140B0C230 @ 0x140B0C230 (sub_140B0C230.c)
 *     sub_140B0C87C @ 0x140B0C87C (sub_140B0C87C.c)
 *     sub_140B0CDAC @ 0x140B0CDAC (sub_140B0CDAC.c)
 * Callees:
 *     RtlInitAnsiString @ 0x1402A07B0 (RtlInitAnsiString.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     RtlAnsiStringToUnicodeString @ 0x14075A5D0 (RtlAnsiStringToUnicodeString.c)
 *     RtlGUIDFromString @ 0x1407814E0 (RtlGUIDFromString.c)
 *     sub_140B0D360 @ 0x140B0D360 (sub_140B0D360.c)
 */

int __fastcall sub_140B0CCAC(__int64 a1, __int64 a2, __int64 a3, GUID *a4)
{
  const CHAR *v5; // rax
  int result; // eax
  UNICODE_STRING GuidString; // [rsp+30h] [rbp-88h] BYREF
  _STRING DestinationString; // [rsp+40h] [rbp-78h] BYREF
  char v9; // [rsp+50h] [rbp-68h] BYREF

  *(_QWORD *)&GuidString.Length = 5111808LL;
  GuidString.Buffer = (wchar_t *)&v9;
  DestinationString = 0LL;
  v5 = (const CHAR *)sub_140B0D360(a1, a2, a3);
  if ( !v5 )
    return -1073741275;
  RtlInitAnsiString(&DestinationString, v5);
  result = RtlAnsiStringToUnicodeString(&GuidString, &DestinationString, 0);
  if ( result >= 0 )
    return RtlGUIDFromString(&GuidString, a4);
  return result;
}
