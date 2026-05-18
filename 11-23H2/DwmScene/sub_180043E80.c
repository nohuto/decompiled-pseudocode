/*
 * XREFs of sub_180043E80 @ 0x180043E80
 * Callers:
 *     sub_180044BE0 @ 0x180044BE0 (sub_180044BE0.c)
 * Callees:
 *     sub_18000B988 @ 0x18000B988 (sub_18000B988.c)
 *     sub_180043B50 @ 0x180043B50 (sub_180043B50.c)
 */

LPVOID __fastcall sub_180043E80(LPVOID lpMem, char a2)
{
  sub_180043B50((__int64)lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B988(lpMem);
  return lpMem;
}
