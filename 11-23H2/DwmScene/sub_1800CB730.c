/*
 * XREFs of sub_1800CB730 @ 0x1800CB730
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B988 @ 0x18000B988 (sub_18000B988.c)
 *     sub_1800CB690 @ 0x1800CB690 (sub_1800CB690.c)
 */

_QWORD *__fastcall sub_1800CB730(_QWORD *lpMem, char a2)
{
  sub_1800CB690(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B988(lpMem);
  return lpMem;
}
