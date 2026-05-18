/*
 * XREFs of sub_1800C9160 @ 0x1800C9160
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B988 @ 0x18000B988 (sub_18000B988.c)
 *     sub_1800C90C4 @ 0x1800C90C4 (sub_1800C90C4.c)
 */

LPVOID __fastcall sub_1800C9160(LPVOID lpMem, char a2)
{
  sub_1800C90C4((__int64)lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B988(lpMem);
  return lpMem;
}
