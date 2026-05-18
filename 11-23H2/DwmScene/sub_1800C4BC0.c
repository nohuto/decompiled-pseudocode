/*
 * XREFs of sub_1800C4BC0 @ 0x1800C4BC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B988 @ 0x18000B988 (sub_18000B988.c)
 *     sub_1800C4398 @ 0x1800C4398 (sub_1800C4398.c)
 */

LPVOID __fastcall sub_1800C4BC0(LPVOID lpMem, char a2)
{
  sub_1800C4398((__int64)lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B988(lpMem);
  return lpMem;
}
