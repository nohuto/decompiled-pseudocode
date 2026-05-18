/*
 * XREFs of sub_180018090 @ 0x180018090
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B988 @ 0x18000B988 (sub_18000B988.c)
 *     sub_180017A80 @ 0x180017A80 (sub_180017A80.c)
 */

_QWORD *__fastcall sub_180018090(_QWORD *lpMem, char a2)
{
  sub_180017A80(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B988(lpMem);
  return lpMem;
}
