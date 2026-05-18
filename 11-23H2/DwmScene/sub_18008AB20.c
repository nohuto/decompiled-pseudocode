/*
 * XREFs of sub_18008AB20 @ 0x18008AB20
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B988 @ 0x18000B988 (sub_18000B988.c)
 *     sub_18008A954 @ 0x18008A954 (sub_18008A954.c)
 */

_QWORD *__fastcall sub_18008AB20(_QWORD *lpMem, char a2)
{
  sub_18008A954(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B988(lpMem);
  return lpMem;
}
