/*
 * XREFs of sub_180018050 @ 0x180018050
 * Callers:
 *     sub_18001B790 @ 0x18001B790 (sub_18001B790.c)
 * Callees:
 *     sub_18000B988 @ 0x18000B988 (sub_18000B988.c)
 *     sub_180054574 @ 0x180054574 (sub_180054574.c)
 */

LPVOID __fastcall sub_180018050(LPVOID lpMem, char a2)
{
  sub_180054574();
  if ( (a2 & 1) != 0 )
    sub_18000B988(lpMem);
  return lpMem;
}
