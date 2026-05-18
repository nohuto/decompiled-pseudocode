/*
 * XREFs of sub_180093D00 @ 0x180093D00
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B988 @ 0x18000B988 (sub_18000B988.c)
 *     sub_180093C60 @ 0x180093C60 (sub_180093C60.c)
 */

_QWORD *__fastcall sub_180093D00(_QWORD *lpMem, char a2)
{
  sub_180093C60(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B988(lpMem);
  return lpMem;
}
