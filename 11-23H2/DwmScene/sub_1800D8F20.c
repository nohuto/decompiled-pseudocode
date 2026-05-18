/*
 * XREFs of sub_1800D8F20 @ 0x1800D8F20
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B988 @ 0x18000B988 (sub_18000B988.c)
 *     sub_1800D8E78 @ 0x1800D8E78 (sub_1800D8E78.c)
 */

LPVOID __fastcall sub_1800D8F20(LPVOID lpMem, char a2)
{
  sub_1800D8E78((__int64)lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B988(lpMem);
  return lpMem;
}
