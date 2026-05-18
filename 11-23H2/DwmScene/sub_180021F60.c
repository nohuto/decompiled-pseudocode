/*
 * XREFs of sub_180021F60 @ 0x180021F60
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B988 @ 0x18000B988 (sub_18000B988.c)
 *     sub_180021DC4 @ 0x180021DC4 (sub_180021DC4.c)
 */

_QWORD *__fastcall sub_180021F60(_QWORD *lpMem, char a2)
{
  sub_180021DC4(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B988(lpMem);
  return lpMem;
}
