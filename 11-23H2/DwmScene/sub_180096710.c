/*
 * XREFs of sub_180096710 @ 0x180096710
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B988 @ 0x18000B988 (sub_18000B988.c)
 *     sub_1800966D8 @ 0x1800966D8 (sub_1800966D8.c)
 */

_QWORD *__fastcall sub_180096710(_QWORD *lpMem, char a2)
{
  sub_1800966D8(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B988(lpMem);
  return lpMem;
}
