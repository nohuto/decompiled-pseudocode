/*
 * XREFs of sub_180030750 @ 0x180030750
 * Callers:
 *     sub_180030140 @ 0x180030140 (sub_180030140.c)
 *     sub_180034C00 @ 0x180034C00 (sub_180034C00.c)
 * Callees:
 *     <none>
 */

void **__fastcall sub_180030750(_QWORD *a1)
{
  void **result; // rax

  result = &Spectre::Engine::Engine::EngineSceneData::`vftable';
  *a1 = &Spectre::Engine::Engine::EngineSceneData::`vftable';
  a1[1] = 0LL;
  a1[2] = 0LL;
  a1[3] = 0LL;
  a1[4] = 0LL;
  return result;
}
