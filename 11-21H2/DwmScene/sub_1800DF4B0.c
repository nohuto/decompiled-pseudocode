/*
 * XREFs of sub_1800DF4B0 @ 0x1800DF4B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 *     sub_1800DF0E0 @ 0x1800DF0E0 (sub_1800DF0E0.c)
 */

_QWORD *__fastcall sub_1800DF4B0(_QWORD *lpMem, char a2)
{
  sub_1800DF0E0(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B998(lpMem);
  return lpMem;
}
