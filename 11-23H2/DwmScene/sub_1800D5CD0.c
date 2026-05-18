/*
 * XREFs of sub_1800D5CD0 @ 0x1800D5CD0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B988 @ 0x18000B988 (sub_18000B988.c)
 *     sub_1800D5A00 @ 0x1800D5A00 (sub_1800D5A00.c)
 */

_QWORD *__fastcall sub_1800D5CD0(_QWORD *lpMem, char a2)
{
  sub_1800D5A00(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B988(lpMem);
  return lpMem;
}
