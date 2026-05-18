/*
 * XREFs of sub_1800D7440 @ 0x1800D7440
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B988 @ 0x18000B988 (sub_18000B988.c)
 *     sub_1800D7400 @ 0x1800D7400 (sub_1800D7400.c)
 */

_QWORD *__fastcall sub_1800D7440(_QWORD *lpMem, char a2)
{
  sub_1800D7400(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B988(lpMem);
  return lpMem;
}
