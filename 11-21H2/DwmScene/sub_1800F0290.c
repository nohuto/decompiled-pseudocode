/*
 * XREFs of sub_1800F0290 @ 0x1800F0290
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 *     sub_1800F023C @ 0x1800F023C (sub_1800F023C.c)
 */

_QWORD *__fastcall sub_1800F0290(_QWORD *lpMem, char a2)
{
  sub_1800F023C(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B998(lpMem);
  return lpMem;
}
