/*
 * XREFs of sub_18009F540 @ 0x18009F540
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B988 @ 0x18000B988 (sub_18000B988.c)
 *     sub_18009F520 @ 0x18009F520 (sub_18009F520.c)
 */

_QWORD *__fastcall sub_18009F540(_QWORD *lpMem, char a2)
{
  sub_18009F520(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B988(lpMem);
  return lpMem;
}
