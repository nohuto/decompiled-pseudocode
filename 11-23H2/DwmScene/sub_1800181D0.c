/*
 * XREFs of sub_1800181D0 @ 0x1800181D0
 * Callers:
 *     sub_18001B7B0 @ 0x18001B7B0 (sub_18001B7B0.c)
 * Callees:
 *     sub_18000B988 @ 0x18000B988 (sub_18000B988.c)
 *     sub_1800557E0 @ 0x1800557E0 (sub_1800557E0.c)
 */

LPVOID __fastcall sub_1800181D0(LPVOID lpMem, char a2)
{
  sub_1800557E0();
  if ( (a2 & 1) != 0 )
    sub_18000B988(lpMem);
  return lpMem;
}
