/*
 * XREFs of sub_18005461C @ 0x18005461C
 * Callers:
 *     sub_180054298 @ 0x180054298 (sub_180054298.c)
 * Callees:
 *     sub_180099338 @ 0x180099338 (sub_180099338.c)
 */

void **__fastcall sub_18005461C(_QWORD *a1)
{
  void **result; // rax

  sub_180099338(a1, 1LL);
  result = &Spectre::Engine::VertexShader::`vftable';
  *a1 = &Spectre::Engine::VertexShader::`vftable';
  return result;
}
