/*
 * XREFs of sub_1800C4C40 @ 0x1800C4C40
 * Callers:
 *     sub_1800C7B70 @ 0x1800C7B70 (sub_1800C7B70.c)
 * Callees:
 *     sub_18000B988 @ 0x18000B988 (sub_18000B988.c)
 *     sub_1800D3A98 @ 0x1800D3A98 (sub_1800D3A98.c)
 */

LPVOID __fastcall sub_1800C4C40(LPVOID lpMem, char a2)
{
  sub_1800D3A98();
  if ( (a2 & 1) != 0 )
    sub_18000B988(lpMem);
  return lpMem;
}
