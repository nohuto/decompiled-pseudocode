/*
 * XREFs of sub_1800CFBF0 @ 0x1800CFBF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B988 @ 0x18000B988 (sub_18000B988.c)
 *     sub_1800CFB1C @ 0x1800CFB1C (sub_1800CFB1C.c)
 */

_QWORD *__fastcall sub_1800CFBF0(_QWORD *lpMem, char a2)
{
  sub_1800CFB1C(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B988(lpMem);
  return lpMem;
}
