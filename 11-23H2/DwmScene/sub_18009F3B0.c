/*
 * XREFs of sub_18009F3B0 @ 0x18009F3B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B988 @ 0x18000B988 (sub_18000B988.c)
 *     sub_18009F340 @ 0x18009F340 (sub_18009F340.c)
 */

_QWORD *__fastcall sub_18009F3B0(_QWORD *lpMem, char a2)
{
  sub_18009F340(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B988(lpMem);
  return lpMem;
}
