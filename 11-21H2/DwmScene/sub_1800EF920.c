/*
 * XREFs of sub_1800EF920 @ 0x1800EF920
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 *     sub_1800EF8C4 @ 0x1800EF8C4 (sub_1800EF8C4.c)
 */

_QWORD *__fastcall sub_1800EF920(_QWORD *lpMem, char a2)
{
  sub_1800EF8C4(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B998(lpMem);
  return lpMem;
}
