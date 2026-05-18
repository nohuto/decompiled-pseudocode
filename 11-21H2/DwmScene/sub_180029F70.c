/*
 * XREFs of sub_180029F70 @ 0x180029F70
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 *     sub_180029D08 @ 0x180029D08 (sub_180029D08.c)
 */

_QWORD *__fastcall sub_180029F70(_QWORD *lpMem, char a2)
{
  sub_180029D08(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B998(lpMem);
  return lpMem;
}
