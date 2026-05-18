/*
 * XREFs of sub_1800996B0 @ 0x1800996B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 *     sub_180099408 @ 0x180099408 (sub_180099408.c)
 */

_QWORD *__fastcall sub_1800996B0(_QWORD *lpMem, char a2)
{
  sub_180099408(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B998(lpMem);
  return lpMem;
}
