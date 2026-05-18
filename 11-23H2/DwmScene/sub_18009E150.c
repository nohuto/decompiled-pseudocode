/*
 * XREFs of sub_18009E150 @ 0x18009E150
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B988 @ 0x18000B988 (sub_18000B988.c)
 *     sub_18009E068 @ 0x18009E068 (sub_18009E068.c)
 */

_QWORD *__fastcall sub_18009E150(_QWORD *lpMem, char a2)
{
  sub_18009E068(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B988(lpMem);
  return lpMem;
}
