/*
 * XREFs of sub_1800A6CC0 @ 0x1800A6CC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 *     sub_1800A6C80 @ 0x1800A6C80 (sub_1800A6C80.c)
 */

_QWORD *__fastcall sub_1800A6CC0(_QWORD *lpMem, char a2)
{
  sub_1800A6C80(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B998(lpMem);
  return lpMem;
}
