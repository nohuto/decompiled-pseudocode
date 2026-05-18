/*
 * XREFs of sub_1800516A0 @ 0x1800516A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B988 @ 0x18000B988 (sub_18000B988.c)
 *     sub_18005133C @ 0x18005133C (sub_18005133C.c)
 */

_QWORD *__fastcall sub_1800516A0(_QWORD *lpMem, char a2)
{
  sub_18005133C(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B988(lpMem);
  return lpMem;
}
