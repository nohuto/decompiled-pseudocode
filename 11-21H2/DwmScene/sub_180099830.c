/*
 * XREFs of sub_180099830 @ 0x180099830
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 *     sub_18009968C @ 0x18009968C (sub_18009968C.c)
 */

_QWORD *__fastcall sub_180099830(_QWORD *lpMem, char a2)
{
  sub_18009968C(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B998(lpMem);
  return lpMem;
}
