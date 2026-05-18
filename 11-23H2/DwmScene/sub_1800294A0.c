/*
 * XREFs of sub_1800294A0 @ 0x1800294A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B988 @ 0x18000B988 (sub_18000B988.c)
 *     sub_180028138 @ 0x180028138 (sub_180028138.c)
 */

LPVOID __fastcall sub_1800294A0(LPVOID lpMem, char a2)
{
  sub_180028138((__int64)lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B988(lpMem);
  return lpMem;
}
