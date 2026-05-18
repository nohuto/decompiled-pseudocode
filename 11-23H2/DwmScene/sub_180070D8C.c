/*
 * XREFs of sub_180070D8C @ 0x180070D8C
 * Callers:
 *     sub_180070E00 @ 0x180070E00 (sub_180070E00.c)
 * Callees:
 *     <none>
 */

void **__fastcall sub_180070D8C(_QWORD *a1)
{
  void **result; // rax

  result = &Spectre::Engine::DefaultSceneNodeTraversal::`vftable';
  *a1 = &Spectre::Engine::DefaultSceneNodeTraversal::`vftable';
  return result;
}
