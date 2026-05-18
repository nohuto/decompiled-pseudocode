/*
 * XREFs of sub_180025EF0 @ 0x180025EF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B988 @ 0x18000B988 (sub_18000B988.c)
 *     sub_180025C20 @ 0x180025C20 (sub_180025C20.c)
 */

_QWORD *__fastcall sub_180025EF0(_QWORD *lpMem, char a2)
{
  sub_180025C20(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B988(lpMem);
  return lpMem;
}
