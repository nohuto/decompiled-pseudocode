/*
 * XREFs of sub_180032730 @ 0x180032730
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B988 @ 0x18000B988 (sub_18000B988.c)
 *     sub_1800400BC @ 0x1800400BC (sub_1800400BC.c)
 */

LPVOID __fastcall sub_180032730(LPVOID lpMem, char a2)
{
  sub_1800400BC(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B988(lpMem);
  return lpMem;
}
