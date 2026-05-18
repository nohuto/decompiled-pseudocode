/*
 * XREFs of sub_180095810 @ 0x180095810
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B988 @ 0x18000B988 (sub_18000B988.c)
 *     sub_180095754 @ 0x180095754 (sub_180095754.c)
 */

_QWORD *__fastcall sub_180095810(_QWORD *lpMem, char a2)
{
  sub_180095754(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B988(lpMem);
  return lpMem;
}
