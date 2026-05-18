/*
 * XREFs of sub_180099730 @ 0x180099730
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 *     sub_180099438 @ 0x180099438 (sub_180099438.c)
 */

_QWORD *__fastcall sub_180099730(_QWORD *lpMem, char a2)
{
  sub_180099438(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B998(lpMem);
  return lpMem;
}
