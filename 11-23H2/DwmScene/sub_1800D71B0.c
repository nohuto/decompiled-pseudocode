/*
 * XREFs of sub_1800D71B0 @ 0x1800D71B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B988 @ 0x18000B988 (sub_18000B988.c)
 *     sub_1800D7170 @ 0x1800D7170 (sub_1800D7170.c)
 */

_QWORD *__fastcall sub_1800D71B0(_QWORD *lpMem, char a2)
{
  sub_1800D7170(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B988(lpMem);
  return lpMem;
}
