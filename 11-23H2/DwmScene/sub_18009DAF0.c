/*
 * XREFs of sub_18009DAF0 @ 0x18009DAF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B988 @ 0x18000B988 (sub_18000B988.c)
 *     sub_18009DAA0 @ 0x18009DAA0 (sub_18009DAA0.c)
 */

_QWORD *__fastcall sub_18009DAF0(_QWORD *lpMem, char a2)
{
  sub_18009DAA0(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B988(lpMem);
  return lpMem;
}
