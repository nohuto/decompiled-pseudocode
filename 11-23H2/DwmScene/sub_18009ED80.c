/*
 * XREFs of sub_18009ED80 @ 0x18009ED80
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B988 @ 0x18000B988 (sub_18000B988.c)
 *     sub_18009ED34 @ 0x18009ED34 (sub_18009ED34.c)
 */

_QWORD *__fastcall sub_18009ED80(_QWORD *lpMem, char a2)
{
  sub_18009ED34(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B988(lpMem);
  return lpMem;
}
