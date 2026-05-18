/*
 * XREFs of sub_180055BE0 @ 0x180055BE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 *     sub_180055240 @ 0x180055240 (sub_180055240.c)
 */

_QWORD *__fastcall sub_180055BE0(_QWORD *lpMem, char a2)
{
  sub_180055240(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B998(lpMem);
  return lpMem;
}
