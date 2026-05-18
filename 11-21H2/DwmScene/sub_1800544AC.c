/*
 * XREFs of sub_1800544AC @ 0x1800544AC
 * Callers:
 *     sub_180053CE0 @ 0x180053CE0 (sub_180053CE0.c)
 * Callees:
 *     sub_180099338 @ 0x180099338 (sub_180099338.c)
 */

void **__fastcall sub_1800544AC(_QWORD *a1)
{
  void **result; // rax

  sub_180099338(a1, 4LL);
  result = &Spectre::Engine::GeometryShader::`vftable';
  *a1 = &Spectre::Engine::GeometryShader::`vftable';
  return result;
}
