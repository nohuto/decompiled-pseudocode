/*
 * XREFs of sub_18008F660 @ 0x18008F660
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B988 @ 0x18000B988 (sub_18000B988.c)
 *     sub_18008F60C @ 0x18008F60C (sub_18008F60C.c)
 */

_QWORD *__fastcall sub_18008F660(_QWORD *lpMem, char a2)
{
  sub_18008F60C(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B988(lpMem);
  return lpMem;
}
