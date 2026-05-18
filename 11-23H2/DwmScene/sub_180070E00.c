/*
 * XREFs of sub_180070E00 @ 0x180070E00
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B988 @ 0x18000B988 (sub_18000B988.c)
 *     sub_180070D8C @ 0x180070D8C (sub_180070D8C.c)
 */

_QWORD *__fastcall sub_180070E00(_QWORD *lpMem, char a2)
{
  sub_180070D8C(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B988(lpMem);
  return lpMem;
}
