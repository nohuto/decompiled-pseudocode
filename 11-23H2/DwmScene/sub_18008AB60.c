/*
 * XREFs of sub_18008AB60 @ 0x18008AB60
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B988 @ 0x18000B988 (sub_18000B988.c)
 *     sub_18008A96C @ 0x18008A96C (sub_18008A96C.c)
 */

_QWORD *__fastcall sub_18008AB60(_QWORD *lpMem, char a2)
{
  sub_18008A96C(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B988(lpMem);
  return lpMem;
}
