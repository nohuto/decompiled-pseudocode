/*
 * XREFs of sub_18008390C @ 0x18008390C
 * Callers:
 *     sub_1800817C4 @ 0x1800817C4 (sub_1800817C4.c)
 *     sub_180085CCC @ 0x180085CCC (sub_180085CCC.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_18008390C(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 result; // rax
  unsigned __int64 v3; // r9

  result = 0x666666666666666LL;
  v3 = (0xCCCCCCCCCCCCCCCDuLL * ((__int64)(a1[2] - *a1) >> 3)) >> 1;
  if ( 0xCCCCCCCCCCCCCCCDuLL * ((__int64)(a1[2] - *a1) >> 3) <= 0x666666666666666LL - v3 )
  {
    result = v3 - 0x3333333333333333LL * ((__int64)(a1[2] - *a1) >> 3);
    if ( result < a2 )
      return a2;
  }
  return result;
}
