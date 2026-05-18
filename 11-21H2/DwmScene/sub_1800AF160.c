/*
 * XREFs of sub_1800AF160 @ 0x1800AF160
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 *     sub_1800AF11C @ 0x1800AF11C (sub_1800AF11C.c)
 */

_QWORD *__fastcall sub_1800AF160(_QWORD *lpMem, char a2)
{
  sub_1800AF11C(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B998(lpMem);
  return lpMem;
}
