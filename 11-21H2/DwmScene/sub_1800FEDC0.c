/*
 * XREFs of sub_1800FEDC0 @ 0x1800FEDC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 *     sub_1800FED60 @ 0x1800FED60 (sub_1800FED60.c)
 */

_QWORD *__fastcall sub_1800FEDC0(_QWORD *lpMem, char a2)
{
  sub_1800FED60(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B998(lpMem);
  return lpMem;
}
