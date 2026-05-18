/*
 * XREFs of sub_18004EF20 @ 0x18004EF20
 * Callers:
 *     sub_180050B90 @ 0x180050B90 (sub_180050B90.c)
 * Callees:
 *     sub_18000B988 @ 0x18000B988 (sub_18000B988.c)
 *     sub_18004EB9C @ 0x18004EB9C (sub_18004EB9C.c)
 */

LPVOID __fastcall sub_18004EF20(LPVOID lpMem, char a2)
{
  sub_18004EB9C((__int64)lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B988(lpMem);
  return lpMem;
}
