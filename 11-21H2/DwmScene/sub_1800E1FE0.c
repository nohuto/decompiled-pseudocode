/*
 * XREFs of sub_1800E1FE0 @ 0x1800E1FE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 *     sub_1800E1F48 @ 0x1800E1F48 (sub_1800E1F48.c)
 */

_QWORD *__fastcall sub_1800E1FE0(_QWORD *lpMem, char a2)
{
  sub_1800E1F48(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B998(lpMem);
  return lpMem;
}
