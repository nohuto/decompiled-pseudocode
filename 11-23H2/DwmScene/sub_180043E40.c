/*
 * XREFs of sub_180043E40 @ 0x180043E40
 * Callers:
 *     sub_180061530 @ 0x180061530 (sub_180061530.c)
 * Callees:
 *     sub_18000B988 @ 0x18000B988 (sub_18000B988.c)
 *     sub_180043AC4 @ 0x180043AC4 (sub_180043AC4.c)
 */

LPVOID __fastcall sub_180043E40(LPVOID lpMem, char a2)
{
  sub_180043AC4((__int64)lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B988(lpMem);
  return lpMem;
}
