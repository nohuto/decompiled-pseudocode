/*
 * XREFs of sub_180018010 @ 0x180018010
 * Callers:
 *     sub_180017970 @ 0x180017970 (sub_180017970.c)
 *     sub_18001B710 @ 0x18001B710 (sub_18001B710.c)
 * Callees:
 *     sub_18000B988 @ 0x18000B988 (sub_18000B988.c)
 *     sub_180052848 @ 0x180052848 (sub_180052848.c)
 */

LPVOID __fastcall sub_180018010(LPVOID lpMem, char a2)
{
  sub_180052848();
  if ( (a2 & 1) != 0 )
    sub_18000B988(lpMem);
  return lpMem;
}
