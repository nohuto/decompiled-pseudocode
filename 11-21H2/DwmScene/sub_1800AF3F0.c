/*
 * XREFs of sub_1800AF3F0 @ 0x1800AF3F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 *     sub_1800AF3B0 @ 0x1800AF3B0 (sub_1800AF3B0.c)
 */

_QWORD *__fastcall sub_1800AF3F0(_QWORD *lpMem, char a2)
{
  sub_1800AF3B0(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B998(lpMem);
  return lpMem;
}
