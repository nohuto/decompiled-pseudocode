/*
 * XREFs of sub_18000D670 @ 0x18000D670
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B988 @ 0x18000B988 (sub_18000B988.c)
 *     sub_18000D5E4 @ 0x18000D5E4 (sub_18000D5E4.c)
 */

_QWORD *__fastcall sub_18000D670(_QWORD *lpMem, char a2)
{
  sub_18000D5E4(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B988(lpMem);
  return lpMem;
}
