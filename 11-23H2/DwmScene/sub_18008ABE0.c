/*
 * XREFs of sub_18008ABE0 @ 0x18008ABE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B988 @ 0x18000B988 (sub_18000B988.c)
 *     sub_18008A99C @ 0x18008A99C (sub_18008A99C.c)
 */

_QWORD *__fastcall sub_18008ABE0(_QWORD *lpMem, char a2)
{
  sub_18008A99C(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B988(lpMem);
  return lpMem;
}
