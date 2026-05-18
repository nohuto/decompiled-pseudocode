/*
 * XREFs of sub_180054620 @ 0x180054620
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B988 @ 0x18000B988 (sub_18000B988.c)
 *     sub_180054530 @ 0x180054530 (sub_180054530.c)
 */

_QWORD *__fastcall sub_180054620(_QWORD *lpMem, char a2)
{
  sub_180054530(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B988(lpMem);
  return lpMem;
}
