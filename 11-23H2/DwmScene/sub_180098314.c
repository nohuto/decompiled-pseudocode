/*
 * XREFs of sub_180098314 @ 0x180098314
 * Callers:
 *     sub_18007C100 @ 0x18007C100 (sub_18007C100.c)
 *     sub_180098330 @ 0x180098330 (sub_180098330.c)
 *     sub_1800E9BE8 @ 0x1800E9BE8 (sub_1800E9BE8.c)
 * Callees:
 *     <none>
 */

void **__fastcall sub_180098314(_QWORD *a1)
{
  void **result; // rax

  result = &Spectre::Engine::ShaderDatabase::`vftable';
  *a1 = &Spectre::Engine::ShaderDatabase::`vftable';
  return result;
}
