/*
 * XREFs of sub_1800D76E0 @ 0x1800D76E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B988 @ 0x18000B988 (sub_18000B988.c)
 *     sub_1800D76AC @ 0x1800D76AC (sub_1800D76AC.c)
 */

_QWORD *__fastcall sub_1800D76E0(_QWORD *lpMem, char a2)
{
  sub_1800D76AC(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B988(lpMem);
  return lpMem;
}
