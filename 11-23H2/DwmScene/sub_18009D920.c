/*
 * XREFs of sub_18009D920 @ 0x18009D920
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B988 @ 0x18000B988 (sub_18000B988.c)
 *     sub_18009D8CC @ 0x18009D8CC (sub_18009D8CC.c)
 */

_QWORD *__fastcall sub_18009D920(_QWORD *lpMem, char a2)
{
  sub_18009D8CC(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B988(lpMem);
  return lpMem;
}
