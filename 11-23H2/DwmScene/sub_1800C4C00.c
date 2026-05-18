/*
 * XREFs of sub_1800C4C00 @ 0x1800C4C00
 * Callers:
 *     sub_1800C7B50 @ 0x1800C7B50 (sub_1800C7B50.c)
 * Callees:
 *     sub_18000B988 @ 0x18000B988 (sub_18000B988.c)
 *     sub_1800D374C @ 0x1800D374C (sub_1800D374C.c)
 */

LPVOID __fastcall sub_1800C4C00(LPVOID lpMem, char a2)
{
  sub_1800D374C();
  if ( (a2 & 1) != 0 )
    sub_18000B988(lpMem);
  return lpMem;
}
