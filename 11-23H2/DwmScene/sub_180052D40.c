/*
 * XREFs of sub_180052D40 @ 0x180052D40
 * Callers:
 *     sub_180053C00 @ 0x180053C00 (sub_180053C00.c)
 * Callees:
 *     sub_18000B988 @ 0x18000B988 (sub_18000B988.c)
 *     sub_18006F220 @ 0x18006F220 (sub_18006F220.c)
 */

_QWORD *__fastcall sub_180052D40(_QWORD *lpMem, char a2)
{
  *lpMem = &Spectre::Engine::DepthBufferGeneric::`vftable';
  sub_18006F220();
  if ( (a2 & 1) != 0 )
    sub_18000B988(lpMem);
  return lpMem;
}
