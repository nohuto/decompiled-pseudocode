/*
 * XREFs of sub_1800DF4F0 @ 0x1800DF4F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 *     sub_1800DF1AC @ 0x1800DF1AC (sub_1800DF1AC.c)
 */

_QWORD *__fastcall sub_1800DF4F0(_QWORD *lpMem, char a2)
{
  sub_1800DF1AC(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B998(lpMem);
  return lpMem;
}
