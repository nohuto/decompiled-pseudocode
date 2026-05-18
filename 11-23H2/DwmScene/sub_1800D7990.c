/*
 * XREFs of sub_1800D7990 @ 0x1800D7990
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B988 @ 0x18000B988 (sub_18000B988.c)
 *     sub_1800D7950 @ 0x1800D7950 (sub_1800D7950.c)
 */

_QWORD *__fastcall sub_1800D7990(_QWORD *lpMem, char a2)
{
  sub_1800D7950(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B988(lpMem);
  return lpMem;
}
