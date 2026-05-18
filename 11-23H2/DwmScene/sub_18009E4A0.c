/*
 * XREFs of sub_18009E4A0 @ 0x18009E4A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B988 @ 0x18000B988 (sub_18000B988.c)
 *     sub_18009E414 @ 0x18009E414 (sub_18009E414.c)
 */

_QWORD *__fastcall sub_18009E4A0(_QWORD *lpMem, char a2)
{
  sub_18009E414(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B988(lpMem);
  return lpMem;
}
