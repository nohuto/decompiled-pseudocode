/*
 * XREFs of sub_180020820 @ 0x180020820
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B988 @ 0x18000B988 (sub_18000B988.c)
 *     sub_180020730 @ 0x180020730 (sub_180020730.c)
 */

_QWORD *__fastcall sub_180020820(_QWORD *lpMem, char a2)
{
  sub_180020730(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B988(lpMem);
  return lpMem;
}
