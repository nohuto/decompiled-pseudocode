/*
 * XREFs of sub_1800281A0 @ 0x1800281A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B988 @ 0x18000B988 (sub_18000B988.c)
 *     sub_1800280D8 @ 0x1800280D8 (sub_1800280D8.c)
 */

LPVOID __fastcall sub_1800281A0(LPVOID lpMem, char a2)
{
  sub_1800280D8((__int64)lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B988(lpMem);
  return lpMem;
}
