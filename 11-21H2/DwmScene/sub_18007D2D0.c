/*
 * XREFs of sub_18007D2D0 @ 0x18007D2D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 *     sub_18007D150 @ 0x18007D150 (sub_18007D150.c)
 */

_QWORD *__fastcall sub_18007D2D0(_QWORD *lpMem, char a2)
{
  sub_18007D150(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B998(lpMem);
  return lpMem;
}
