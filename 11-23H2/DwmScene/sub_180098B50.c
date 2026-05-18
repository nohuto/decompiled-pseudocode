/*
 * XREFs of sub_180098B50 @ 0x180098B50
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B988 @ 0x18000B988 (sub_18000B988.c)
 *     sub_180098A70 @ 0x180098A70 (sub_180098A70.c)
 */

_QWORD *__fastcall sub_180098B50(_QWORD *lpMem, char a2)
{
  sub_180098A70(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B988(lpMem);
  return lpMem;
}
