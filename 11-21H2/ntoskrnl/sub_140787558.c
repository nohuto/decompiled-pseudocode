/*
 * XREFs of sub_140787558 @ 0x140787558
 * Callers:
 *     sub_14076426C @ 0x14076426C (sub_14076426C.c)
 *     sub_140769170 @ 0x140769170 (sub_140769170.c)
 *     sub_1407872FC @ 0x1407872FC (sub_1407872FC.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1402DFB70 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     RtlGUIDFromString @ 0x1407814E0 (RtlGUIDFromString.c)
 *     sub_1407875CC @ 0x1407875CC (sub_1407875CC.c)
 */

int __fastcall sub_140787558(__int64 a1, __int64 a2, GUID *a3)
{
  int result; // eax
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-78h] BYREF
  WCHAR SourceString[40]; // [rsp+30h] [rbp-68h] BYREF

  DestinationString = 0LL;
  result = sub_1407875CC(a1, a2, SourceString);
  if ( result >= 0 )
  {
    result = RtlInitUnicodeStringEx(&DestinationString, SourceString);
    if ( result >= 0 )
      return RtlGUIDFromString(&DestinationString, a3);
  }
  return result;
}
