/*
 * XREFs of sub_18007E8C0 @ 0x18007E8C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B988 @ 0x18000B988 (sub_18000B988.c)
 *     sub_18007E8A0 @ 0x18007E8A0 (sub_18007E8A0.c)
 */

_QWORD *__fastcall sub_18007E8C0(_QWORD *lpMem, char a2)
{
  sub_18007E8A0(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B988(lpMem);
  return lpMem;
}
