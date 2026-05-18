/*
 * XREFs of sub_180039180 @ 0x180039180
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B988 @ 0x18000B988 (sub_18000B988.c)
 *     sub_1800390DC @ 0x1800390DC (sub_1800390DC.c)
 */

_QWORD *__fastcall sub_180039180(_QWORD *lpMem, char a2)
{
  sub_1800390DC(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B988(lpMem);
  return lpMem;
}
