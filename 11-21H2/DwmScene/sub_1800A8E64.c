/*
 * XREFs of sub_1800A8E64 @ 0x1800A8E64
 * Callers:
 *     sub_180088050 @ 0x180088050 (sub_180088050.c)
 *     sub_1800A8E80 @ 0x1800A8E80 (sub_1800A8E80.c)
 *     sub_180105CA6 @ 0x180105CA6 (sub_180105CA6.c)
 * Callees:
 *     <none>
 */

void **__fastcall sub_1800A8E64(_QWORD *a1)
{
  void **result; // rax

  result = &Spectre::Engine::ShaderDatabase::`vftable';
  *a1 = &Spectre::Engine::ShaderDatabase::`vftable';
  return result;
}
