/*
 * XREFs of sub_180043EC0 @ 0x180043EC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B988 @ 0x18000B988 (sub_18000B988.c)
 */

_QWORD *__fastcall sub_180043EC0(_QWORD *a1, char a2)
{
  *a1 = &Spectre::Engine::ResourceLoadedFnc::`vftable';
  if ( (a2 & 1) != 0 )
    sub_18000B988(a1);
  return a1;
}
