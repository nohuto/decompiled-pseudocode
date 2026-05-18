/*
 * XREFs of sub_1800D5580 @ 0x1800D5580
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B988 @ 0x18000B988 (sub_18000B988.c)
 *     sub_1800D5548 @ 0x1800D5548 (sub_1800D5548.c)
 */

_QWORD *__fastcall sub_1800D5580(_QWORD *lpMem, char a2)
{
  sub_1800D5548(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B988(lpMem);
  return lpMem;
}
