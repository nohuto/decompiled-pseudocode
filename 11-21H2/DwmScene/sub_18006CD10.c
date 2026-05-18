/*
 * XREFs of sub_18006CD10 @ 0x18006CD10
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 *     sub_18006C8B4 @ 0x18006C8B4 (sub_18006C8B4.c)
 */

_QWORD *__fastcall sub_18006CD10(_QWORD *lpMem, char a2)
{
  sub_18006C8B4(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B998(lpMem);
  return lpMem;
}
