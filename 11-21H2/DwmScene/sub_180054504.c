/*
 * XREFs of sub_180054504 @ 0x180054504
 * Callers:
 *     sub_1800540B0 @ 0x1800540B0 (sub_1800540B0.c)
 * Callees:
 *     sub_180099338 @ 0x180099338 (sub_180099338.c)
 */

void **__fastcall sub_180054504(_QWORD *a1)
{
  void **result; // rax

  sub_180099338(a1, 5LL);
  result = &Spectre::Engine::PixelShader::`vftable';
  *a1 = &Spectre::Engine::PixelShader::`vftable';
  return result;
}
