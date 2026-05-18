/*
 * XREFs of sub_180055980 @ 0x180055980
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B988 @ 0x18000B988 (sub_18000B988.c)
 *     sub_180051F00 @ 0x180051F00 (sub_180051F00.c)
 */

LPVOID __fastcall sub_180055980(LPVOID lpMem, char a2)
{
  sub_180051F00((__int64)lpMem + 24);
  if ( (a2 & 1) != 0 )
    sub_18000B988(lpMem);
  return lpMem;
}
