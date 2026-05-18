/*
 * XREFs of sub_180089630 @ 0x180089630
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B988 @ 0x18000B988 (sub_18000B988.c)
 *     sub_1800895C4 @ 0x1800895C4 (sub_1800895C4.c)
 */

LPVOID __fastcall sub_180089630(LPVOID lpMem, char a2)
{
  sub_1800895C4((__int64)lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B988(lpMem);
  return lpMem;
}
