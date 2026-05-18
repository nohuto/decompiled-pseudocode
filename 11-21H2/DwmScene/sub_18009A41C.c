/*
 * XREFs of sub_18009A41C @ 0x18009A41C
 * Callers:
 *     sub_1800598D8 @ 0x1800598D8 (sub_1800598D8.c)
 * Callees:
 *     sub_18005BB68 @ 0x18005BB68 (sub_18005BB68.c)
 */

_QWORD *__fastcall sub_18009A41C(_QWORD *a1)
{
  sub_18005BB68(a1);
  *a1 = &Spectre::Engine::SamplerGeneric::`vftable';
  return a1;
}
