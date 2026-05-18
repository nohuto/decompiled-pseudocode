/*
 * XREFs of ??$_Copy_memmove@PEAPEAVSceneNode@Engine@Spectre@@PEAPEAV123@@std@@YAPEAPEAVSceneNode@Engine@Spectre@@PEAPEAV123@00@Z @ 0x180070B74
 * Callers:
 *     ??$_Uninitialized_move@PEAPEAVSceneNode@Engine@Spectre@@V?$allocator@PEAVSceneNode@Engine@Spectre@@@std@@@std@@YAPEAPEAVSceneNode@Engine@Spectre@@QEAPEAV123@0PEAPEAV123@AEAV?$allocator@PEAVSceneNode@Engine@Spectre@@@0@@Z @ 0x180070CB4 (--$_Uninitialized_move@PEAPEAVSceneNode@Engine@Spectre@@V-$allocator@PEAVSceneNode@Engine@Spectr.c)
 * Callees:
 *     memmove_0 @ 0x18000CA85 (memmove_0.c)
 */

__int64 __fastcall std::_Copy_memmove<Spectre::Engine::SceneNode * *,Spectre::Engine::SceneNode * *>(
        void *Src,
        __int64 a2,
        void *a3)
{
  __int64 v4; // rbx

  v4 = a2 - (_QWORD)Src;
  memmove_0(a3, Src, a2 - (_QWORD)Src);
  return (__int64)a3 + v4;
}
