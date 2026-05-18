/*
 * XREFs of sub_180058F80 @ 0x180058F80
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 *     sub_180058B60 @ 0x180058B60 (sub_180058B60.c)
 */

_QWORD *__fastcall sub_180058F80(_QWORD *lpMem, char a2)
{
  sub_180058B60(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B998(lpMem);
  return lpMem;
}
