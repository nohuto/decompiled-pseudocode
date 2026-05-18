/*
 * XREFs of sub_1800EFC10 @ 0x1800EFC10
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 *     sub_1800EFBBC @ 0x1800EFBBC (sub_1800EFBBC.c)
 */

_QWORD *__fastcall sub_1800EFC10(_QWORD *lpMem, char a2)
{
  sub_1800EFBBC(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B998(lpMem);
  return lpMem;
}
