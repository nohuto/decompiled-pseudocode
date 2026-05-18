/*
 * XREFs of sub_180043F00 @ 0x180043F00
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B988 @ 0x18000B988 (sub_18000B988.c)
 *     sub_180043B9C @ 0x180043B9C (sub_180043B9C.c)
 */

_QWORD *__fastcall sub_180043F00(_QWORD *lpMem, char a2)
{
  sub_180043B9C(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B988(lpMem);
  return lpMem;
}
