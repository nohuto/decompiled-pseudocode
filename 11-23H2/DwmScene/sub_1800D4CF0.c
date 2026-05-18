/*
 * XREFs of sub_1800D4CF0 @ 0x1800D4CF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B988 @ 0x18000B988 (sub_18000B988.c)
 *     sub_1800D4CA8 @ 0x1800D4CA8 (sub_1800D4CA8.c)
 */

__int64 *__fastcall sub_1800D4CF0(__int64 *lpMem, char a2)
{
  sub_1800D4CA8(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B988(lpMem);
  return lpMem;
}
