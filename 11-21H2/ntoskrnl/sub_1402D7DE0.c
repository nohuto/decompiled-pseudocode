/*
 * XREFs of sub_1402D7DE0 @ 0x1402D7DE0
 * Callers:
 *     RtlDowncaseUnicodeString @ 0x1406B4AE0 (RtlDowncaseUnicodeString.c)
 *     RtlUpcaseUnicodeStringToOemString @ 0x1406E7B60 (RtlUpcaseUnicodeStringToOemString.c)
 *     RtlUnicodeStringToOemString @ 0x1406EAEF0 (RtlUnicodeStringToOemString.c)
 *     RtlUnicodeStringToCountedOemString @ 0x1407591C0 (RtlUnicodeStringToCountedOemString.c)
 *     RtlUpcaseUnicodeStringToCountedOemString @ 0x1407596C0 (RtlUpcaseUnicodeStringToCountedOemString.c)
 *     RtlAnsiStringToUnicodeString @ 0x14075A5D0 (RtlAnsiStringToUnicodeString.c)
 *     RtlUpcaseUnicodeString @ 0x1407E5410 (RtlUpcaseUnicodeString.c)
 *     RtlOemStringToUnicodeString @ 0x1407F9B70 (RtlOemStringToUnicodeString.c)
 *     RtlOemStringToCountedUnicodeString @ 0x1409B56D0 (RtlOemStringToCountedUnicodeString.c)
 *     RtlUpcaseUnicodeStringToAnsiString @ 0x1409B58B0 (RtlUpcaseUnicodeStringToAnsiString.c)
 * Callees:
 *     sub_1406BE560 @ 0x1406BE560 (sub_1406BE560.c)
 */

__int64 __fastcall sub_1402D7DE0(char a1, unsigned int a2, __int64 *a3, _WORD *a4)
{
  unsigned int v4; // ebx
  __int16 v5; // si
  __int64 v9; // rax

  v4 = 0;
  v5 = a2;
  if ( a1 )
  {
    v9 = sub_1406BE560(a2);
    *a3 = v9;
    if ( v9 )
    {
      *a4 = v5;
      return 0LL;
    }
    else
    {
      *a4 = 0;
      return 3221225495LL;
    }
  }
  else
  {
    if ( a2 > (unsigned __int16)*a4 || !*a3 )
      return (unsigned int)-2147483643;
    return v4;
  }
}
