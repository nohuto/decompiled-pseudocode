/*
 * XREFs of sub_1800E6E10 @ 0x1800E6E10
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 *     sub_1800E6CDC @ 0x1800E6CDC (sub_1800E6CDC.c)
 */

_QWORD *__fastcall sub_1800E6E10(_QWORD *lpMem, char a2)
{
  sub_1800E6CDC(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B998(lpMem);
  return lpMem;
}
