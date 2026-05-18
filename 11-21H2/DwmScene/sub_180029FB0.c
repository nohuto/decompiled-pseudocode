/*
 * XREFs of sub_180029FB0 @ 0x180029FB0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 *     sub_180029D70 @ 0x180029D70 (sub_180029D70.c)
 */

_QWORD *__fastcall sub_180029FB0(_QWORD *lpMem, char a2)
{
  sub_180029D70(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B998(lpMem);
  return lpMem;
}
