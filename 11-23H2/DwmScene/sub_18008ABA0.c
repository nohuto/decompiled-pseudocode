/*
 * XREFs of sub_18008ABA0 @ 0x18008ABA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B988 @ 0x18000B988 (sub_18000B988.c)
 *     sub_18008A984 @ 0x18008A984 (sub_18008A984.c)
 */

_QWORD *__fastcall sub_18008ABA0(_QWORD *lpMem, char a2)
{
  sub_18008A984(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B988(lpMem);
  return lpMem;
}
