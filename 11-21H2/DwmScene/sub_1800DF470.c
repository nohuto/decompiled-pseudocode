/*
 * XREFs of sub_1800DF470 @ 0x1800DF470
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 *     sub_1800DEF9C @ 0x1800DEF9C (sub_1800DEF9C.c)
 */

_QWORD *__fastcall sub_1800DF470(_QWORD *lpMem, char a2)
{
  sub_1800DEF9C(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B998(lpMem);
  return lpMem;
}
