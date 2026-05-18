/*
 * XREFs of sub_180047EA0 @ 0x180047EA0
 * Callers:
 *     sub_180049E30 @ 0x180049E30 (sub_180049E30.c)
 * Callees:
 *     sub_18000B988 @ 0x18000B988 (sub_18000B988.c)
 *     sub_1800888DC @ 0x1800888DC (sub_1800888DC.c)
 */

LPVOID __fastcall sub_180047EA0(LPVOID lpMem, char a2)
{
  sub_1800888DC();
  if ( (a2 & 1) != 0 )
    sub_18000B988(lpMem);
  return lpMem;
}
