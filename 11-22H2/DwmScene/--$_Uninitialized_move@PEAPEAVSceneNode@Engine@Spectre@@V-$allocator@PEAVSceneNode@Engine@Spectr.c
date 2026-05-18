/*
 * XREFs of ??$_Uninitialized_move@PEAPEAVSceneNode@Engine@Spectre@@V?$allocator@PEAVSceneNode@Engine@Spectre@@@std@@@std@@YAPEAPEAVSceneNode@Engine@Spectre@@QEAPEAV123@0PEAPEAV123@AEAV?$allocator@PEAVSceneNode@Engine@Spectre@@@0@@Z @ 0x180070CB4
 * Callers:
 *     ??$_Emplace_reallocate@AEBQEAVSceneNode@Engine@Spectre@@@?$vector@PEAVSceneNode@Engine@Spectre@@V?$allocator@PEAVSceneNode@Engine@Spectre@@@std@@@std@@QEAAPEAPEAVSceneNode@Engine@Spectre@@QEAPEAV234@AEBQEAV234@@Z @ 0x180070BAC (--$_Emplace_reallocate@AEBQEAVSceneNode@Engine@Spectre@@@-$vector@PEAVSceneNode@Engine@Spectre@@.c)
 * Callees:
 *     ??$_Copy_memmove@PEAPEAVSceneNode@Engine@Spectre@@PEAPEAV123@@std@@YAPEAPEAVSceneNode@Engine@Spectre@@PEAPEAV123@00@Z @ 0x180070B74 (--$_Copy_memmove@PEAPEAVSceneNode@Engine@Spectre@@PEAPEAV123@@std@@YAPEAPEAVSceneNode@Engine@Spe.c)
 */

char *__fastcall std::_Uninitialized_move<Spectre::Engine::SceneNode * *>(void *a1, __int64 a2, char *a3)
{
  std::_Copy_memmove<Spectre::Engine::SceneNode * *,Spectre::Engine::SceneNode * *>(a1, a2, a3);
  return &a3[8 * ((a2 - (__int64)a1) >> 3)];
}
