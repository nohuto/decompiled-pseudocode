/*
 * XREFs of sub_1800B0010 @ 0x1800B0010
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 *     sub_1800AFF7C @ 0x1800AFF7C (sub_1800AFF7C.c)
 */

_QWORD *__fastcall sub_1800B0010(_QWORD *lpMem, char a2)
{
  sub_1800AFF7C(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B998(lpMem);
  return lpMem;
}
