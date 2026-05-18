/*
 * XREFs of sub_1800F1B20 @ 0x1800F1B20
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 *     sub_1800F190C @ 0x1800F190C (sub_1800F190C.c)
 */

_QWORD *__fastcall sub_1800F1B20(_QWORD *lpMem, char a2)
{
  sub_1800F190C(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B998(lpMem);
  return lpMem;
}
