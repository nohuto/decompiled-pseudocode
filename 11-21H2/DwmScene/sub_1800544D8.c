/*
 * XREFs of sub_1800544D8 @ 0x1800544D8
 * Callers:
 *     sub_180053EC8 @ 0x180053EC8 (sub_180053EC8.c)
 * Callees:
 *     sub_180099338 @ 0x180099338 (sub_180099338.c)
 */

void **__fastcall sub_1800544D8(_QWORD *a1)
{
  void **result; // rax

  sub_180099338(a1, 2LL);
  result = &Spectre::Engine::HullShader::`vftable';
  *a1 = &Spectre::Engine::HullShader::`vftable';
  return result;
}
