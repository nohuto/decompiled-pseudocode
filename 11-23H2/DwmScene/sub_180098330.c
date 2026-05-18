/*
 * XREFs of sub_180098330 @ 0x180098330
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B988 @ 0x18000B988 (sub_18000B988.c)
 *     sub_180098314 @ 0x180098314 (sub_180098314.c)
 */

_QWORD *__fastcall sub_180098330(_QWORD *lpMem, char a2)
{
  sub_180098314(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B988(lpMem);
  return lpMem;
}
