/*
 * XREFs of RtlIntegerToUnicodeString @ 0x14075AC60
 * Callers:
 *     sub_1403CCE24 @ 0x1403CCE24 (sub_1403CCE24.c)
 *     sub_14064B9D8 @ 0x14064B9D8 (sub_14064B9D8.c)
 *     sub_14064C858 @ 0x14064C858 (sub_14064C858.c)
 *     sub_1406DE008 @ 0x1406DE008 (sub_1406DE008.c)
 *     sub_1406E9530 @ 0x1406E9530 (sub_1406E9530.c)
 *     sub_14084CD18 @ 0x14084CD18 (sub_14084CD18.c)
 *     sub_1409F5F90 @ 0x1409F5F90 (sub_1409F5F90.c)
 *     sub_140A1C148 @ 0x140A1C148 (sub_140A1C148.c)
 *     sub_140A1C7F0 @ 0x140A1C7F0 (sub_140A1C7F0.c)
 *     sub_140A1C88C @ 0x140A1C88C (sub_140A1C88C.c)
 *     sub_140A34510 @ 0x140A34510 (sub_140A34510.c)
 *     sub_140A34854 @ 0x140A34854 (sub_140A34854.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     RtlAnsiStringToUnicodeString @ 0x14075A5D0 (RtlAnsiStringToUnicodeString.c)
 *     RtlIntegerToChar @ 0x14075ACF0 (RtlIntegerToChar.c)
 */

NTSTATUS __stdcall RtlIntegerToUnicodeString(ULONG Value, ULONG Base, PUNICODE_STRING String)
{
  NTSTATUS result; // eax
  __int64 v5; // rax
  ANSI_STRING SourceString; // [rsp+20h] [rbp-48h] BYREF
  CHAR Stringa[40]; // [rsp+30h] [rbp-38h] BYREF

  *(_DWORD *)(&SourceString.MaximumLength + 1) = 0;
  result = RtlIntegerToChar(Value, Base, 33, Stringa);
  if ( result >= 0 )
  {
    SourceString.MaximumLength = 33;
    SourceString.Buffer = Stringa;
    v5 = -1LL;
    do
      ++v5;
    while ( Stringa[v5] );
    SourceString.Length = v5;
    return RtlAnsiStringToUnicodeString(String, &SourceString, 0);
  }
  return result;
}
