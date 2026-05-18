/*
 * XREFs of sub_180054480 @ 0x180054480
 * Callers:
 *     sub_180053AF8 @ 0x180053AF8 (sub_180053AF8.c)
 * Callees:
 *     sub_180099338 @ 0x180099338 (sub_180099338.c)
 */

void **__fastcall sub_180054480(_QWORD *a1)
{
  void **result; // rax

  sub_180099338(a1, 3LL);
  result = &Spectre::Engine::DomainShader::`vftable';
  *a1 = &Spectre::Engine::DomainShader::`vftable';
  return result;
}
