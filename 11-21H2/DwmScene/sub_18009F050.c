/*
 * XREFs of sub_18009F050 @ 0x18009F050
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 *     sub_18009EFAC @ 0x18009EFAC (sub_18009EFAC.c)
 */

_QWORD *__fastcall sub_18009F050(_QWORD *lpMem, char a2)
{
  sub_18009EFAC(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B998(lpMem);
  return lpMem;
}
