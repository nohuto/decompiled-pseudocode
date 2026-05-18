/*
 * XREFs of sub_18009B6C8 @ 0x18009B6C8
 * Callers:
 *     sub_18005988C @ 0x18005988C (sub_18005988C.c)
 * Callees:
 *     sub_18007A010 @ 0x18007A010 (sub_18007A010.c)
 */

_QWORD *__fastcall sub_18009B6C8(_QWORD *a1)
{
  sub_18007A010(a1);
  *a1 = &Spectre::Engine::DepthBufferGeneric::`vftable';
  return a1;
}
