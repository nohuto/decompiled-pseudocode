/*
 * XREFs of sub_1800325D0 @ 0x1800325D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B988 @ 0x18000B988 (sub_18000B988.c)
 *     sub_180031A18 @ 0x180031A18 (sub_180031A18.c)
 */

_QWORD *__fastcall sub_1800325D0(_QWORD *lpMem, char a2)
{
  sub_180031A18(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B988(lpMem);
  return lpMem;
}
