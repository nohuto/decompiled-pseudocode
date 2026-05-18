/*
 * XREFs of sub_180052EA0 @ 0x180052EA0
 * Callers:
 *     sub_180053C80 @ 0x180053C80 (sub_180053C80.c)
 * Callees:
 *     sub_18000B988 @ 0x18000B988 (sub_18000B988.c)
 *     sub_180055798 @ 0x180055798 (sub_180055798.c)
 */

LPVOID __fastcall sub_180052EA0(LPVOID lpMem, char a2)
{
  sub_180055798();
  if ( (a2 & 1) != 0 )
    sub_18000B988(lpMem);
  return lpMem;
}
