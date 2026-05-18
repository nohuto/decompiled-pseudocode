/*
 * XREFs of sub_180095DE0 @ 0x180095DE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B988 @ 0x18000B988 (sub_18000B988.c)
 *     sub_180095CAC @ 0x180095CAC (sub_180095CAC.c)
 */

_QWORD *__fastcall sub_180095DE0(_QWORD *lpMem, char a2)
{
  sub_180095CAC(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B988(lpMem);
  return lpMem;
}
