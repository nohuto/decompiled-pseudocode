/*
 * XREFs of sub_180099770 @ 0x180099770
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 *     sub_180099450 @ 0x180099450 (sub_180099450.c)
 */

_QWORD *__fastcall sub_180099770(_QWORD *lpMem, char a2)
{
  sub_180099450(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B998(lpMem);
  return lpMem;
}
