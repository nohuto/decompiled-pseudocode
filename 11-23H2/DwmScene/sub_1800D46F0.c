/*
 * XREFs of sub_1800D46F0 @ 0x1800D46F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B988 @ 0x18000B988 (sub_18000B988.c)
 *     sub_1800D46B8 @ 0x1800D46B8 (sub_1800D46B8.c)
 */

_QWORD *__fastcall sub_1800D46F0(_QWORD *lpMem, char a2)
{
  sub_1800D46B8(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B988(lpMem);
  return lpMem;
}
