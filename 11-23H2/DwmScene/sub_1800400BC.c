/*
 * XREFs of sub_1800400BC @ 0x1800400BC
 * Callers:
 *     sub_180031F64 @ 0x180031F64 (sub_180031F64.c)
 *     sub_180032730 @ 0x180032730 (sub_180032730.c)
 *     sub_180064190 @ 0x180064190 (sub_180064190.c)
 *     sub_1800E7F6A @ 0x1800E7F6A (sub_1800E7F6A.c)
 * Callees:
 *     <none>
 */

void **__fastcall sub_1800400BC(_QWORD *a1)
{
  void **result; // rax

  result = &Spectre::Engine::SceneCustomData::`vftable';
  *a1 = &Spectre::Engine::SceneCustomData::`vftable';
  return result;
}
