/*
 * XREFs of sub_18008AC60 @ 0x18008AC60
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B988 @ 0x18000B988 (sub_18000B988.c)
 *     sub_18008A9CC @ 0x18008A9CC (sub_18008A9CC.c)
 */

_QWORD *__fastcall sub_18008AC60(_QWORD *lpMem, char a2)
{
  sub_18008A9CC(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B988(lpMem);
  return lpMem;
}
