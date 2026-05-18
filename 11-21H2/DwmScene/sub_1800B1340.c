/*
 * XREFs of sub_1800B1340 @ 0x1800B1340
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 *     sub_1800B1320 @ 0x1800B1320 (sub_1800B1320.c)
 */

_QWORD *__fastcall sub_1800B1340(_QWORD *lpMem, char a2)
{
  sub_1800B1320(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B998(lpMem);
  return lpMem;
}
