/*
 * XREFs of sub_180089150 @ 0x180089150
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 *     sub_1800890B4 @ 0x1800890B4 (sub_1800890B4.c)
 */

_QWORD *__fastcall sub_180089150(_QWORD *lpMem, __int64 a2)
{
  char v2; // bl

  v2 = a2;
  sub_1800890B4(lpMem, a2);
  if ( (v2 & 1) != 0 )
    sub_18000B998(lpMem);
  return lpMem;
}
