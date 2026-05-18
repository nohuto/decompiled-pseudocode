/*
 * XREFs of sub_18006F2A0 @ 0x18006F2A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B988 @ 0x18000B988 (sub_18000B988.c)
 *     sub_18006F220 @ 0x18006F220 (sub_18006F220.c)
 */

_QWORD *__fastcall sub_18006F2A0(_QWORD *lpMem, char a2)
{
  sub_18006F220(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B988(lpMem);
  return lpMem;
}
