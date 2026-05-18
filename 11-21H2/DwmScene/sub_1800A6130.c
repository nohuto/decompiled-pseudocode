/*
 * XREFs of sub_1800A6130 @ 0x1800A6130
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 *     sub_1800A5FBC @ 0x1800A5FBC (sub_1800A5FBC.c)
 */

_QWORD *__fastcall sub_1800A6130(_QWORD *lpMem, char a2)
{
  sub_1800A5FBC(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B998(lpMem);
  return lpMem;
}
