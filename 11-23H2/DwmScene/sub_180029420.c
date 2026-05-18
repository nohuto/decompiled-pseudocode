/*
 * XREFs of sub_180029420 @ 0x180029420
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B988 @ 0x18000B988 (sub_18000B988.c)
 */

_QWORD *__fastcall sub_180029420(_QWORD *a1, char a2)
{
  *a1 = &Spectre::Engine::IVisitable::`vftable';
  if ( (a2 & 1) != 0 )
    sub_18000B988(a1);
  return a1;
}
