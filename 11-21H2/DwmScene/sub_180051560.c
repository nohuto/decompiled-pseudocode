/*
 * XREFs of sub_180051560 @ 0x180051560
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 *     sub_180051324 @ 0x180051324 (sub_180051324.c)
 */

_QWORD *__fastcall sub_180051560(_QWORD *lpMem, char a2)
{
  sub_180051324(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B998(lpMem);
  return lpMem;
}
