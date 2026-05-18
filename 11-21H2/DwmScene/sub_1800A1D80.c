/*
 * XREFs of sub_1800A1D80 @ 0x1800A1D80
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 *     sub_1800A1D00 @ 0x1800A1D00 (sub_1800A1D00.c)
 */

_QWORD *__fastcall sub_1800A1D80(_QWORD *lpMem, char a2)
{
  sub_1800A1D00(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B998(lpMem);
  return lpMem;
}
