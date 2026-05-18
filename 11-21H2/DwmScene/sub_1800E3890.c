/*
 * XREFs of sub_1800E3890 @ 0x1800E3890
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 *     sub_1800E3514 @ 0x1800E3514 (sub_1800E3514.c)
 */

_QWORD *__fastcall sub_1800E3890(_QWORD *lpMem, char a2)
{
  sub_1800E3514(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B998(lpMem);
  return lpMem;
}
