/*
 * XREFs of sub_1800143C0 @ 0x1800143C0
 * Callers:
 *     sub_1800149E0 @ 0x1800149E0 (sub_1800149E0.c)
 * Callees:
 *     sub_18000B988 @ 0x18000B988 (sub_18000B988.c)
 *     sub_18004AF30 @ 0x18004AF30 (sub_18004AF30.c)
 */

LPVOID __fastcall sub_1800143C0(LPVOID lpMem, char a2)
{
  sub_18004AF30();
  if ( (a2 & 1) != 0 )
    sub_18000B988(lpMem);
  return lpMem;
}
