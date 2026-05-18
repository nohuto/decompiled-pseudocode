/*
 * XREFs of sub_1800B0B10 @ 0x1800B0B10
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 *     sub_1800B0AC8 @ 0x1800B0AC8 (sub_1800B0AC8.c)
 */

_QWORD *__fastcall sub_1800B0B10(_QWORD *lpMem, char a2)
{
  sub_1800B0AC8(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B998(lpMem);
  return lpMem;
}
