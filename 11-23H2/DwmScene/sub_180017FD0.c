/*
 * XREFs of sub_180017FD0 @ 0x180017FD0
 * Callers:
 *     sub_18001B740 @ 0x18001B740 (sub_18001B740.c)
 * Callees:
 *     sub_18000B988 @ 0x18000B988 (sub_18000B988.c)
 *     sub_180047D10 @ 0x180047D10 (sub_180047D10.c)
 */

LPVOID __fastcall sub_180017FD0(LPVOID lpMem, char a2)
{
  sub_180047D10();
  if ( (a2 & 1) != 0 )
    sub_18000B988(lpMem);
  return lpMem;
}
