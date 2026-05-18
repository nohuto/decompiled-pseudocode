/*
 * XREFs of sub_180043010 @ 0x180043010
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B988 @ 0x18000B988 (sub_18000B988.c)
 *     sub_180042FB4 @ 0x180042FB4 (sub_180042FB4.c)
 */

_QWORD *__fastcall sub_180043010(_QWORD *lpMem, char a2)
{
  sub_180042FB4(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B988(lpMem);
  return lpMem;
}
