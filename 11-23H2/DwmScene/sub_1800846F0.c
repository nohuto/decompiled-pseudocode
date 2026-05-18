/*
 * XREFs of sub_1800846F0 @ 0x1800846F0
 * Callers:
 *     sub_180085D80 @ 0x180085D80 (sub_180085D80.c)
 * Callees:
 *     sub_18000B988 @ 0x18000B988 (sub_18000B988.c)
 *     sub_1800845A8 @ 0x1800845A8 (sub_1800845A8.c)
 */

LPVOID __fastcall sub_1800846F0(LPVOID lpMem, char a2)
{
  sub_1800845A8((__int64)lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B988(lpMem);
  return lpMem;
}
