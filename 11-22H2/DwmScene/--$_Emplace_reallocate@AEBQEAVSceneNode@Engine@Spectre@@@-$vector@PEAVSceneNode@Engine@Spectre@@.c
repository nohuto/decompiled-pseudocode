/*
 * XREFs of ??$_Emplace_reallocate@AEBQEAVSceneNode@Engine@Spectre@@@?$vector@PEAVSceneNode@Engine@Spectre@@V?$allocator@PEAVSceneNode@Engine@Spectre@@@std@@@std@@QEAAPEAPEAVSceneNode@Engine@Spectre@@QEAPEAV234@AEBQEAV234@@Z @ 0x180070BAC
 * Callers:
 *     ?Traverse@DefaultSceneNodeTraversal@Engine@Spectre@@AEBAXPEAVSceneNode@23@AEBVCamera@23@AEAV?$vector@PEAVSceneNode@Engine@Spectre@@V?$allocator@PEAVSceneNode@Engine@Spectre@@@std@@@std@@@Z @ 0x180070E5C (-Traverse@DefaultSceneNodeTraversal@Engine@Spectre@@AEBAXPEAVSceneNode@23@AEBVCamera@23@AEAV-$ve.c)
 *     ?GetSceneNodes@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@UEBA?AV?$vector@PEAVSceneNode@Engine@Spectre@@V?$allocator@PEAVSceneNode@Engine@Spectre@@@std@@@std@@PEAVSceneNode@23@AEBVCamera@23@@Z @ 0x180095840 (-GetSceneNodes@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@UEBA-AV-$vector@PEAVSceneNod.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001090C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x180017058 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Uninitialized_move@PEAPEAVSceneNode@Engine@Spectre@@V?$allocator@PEAVSceneNode@Engine@Spectre@@@std@@@std@@YAPEAPEAVSceneNode@Engine@Spectre@@QEAPEAV123@0PEAPEAV123@AEAV?$allocator@PEAVSceneNode@Engine@Spectre@@@0@@Z @ 0x180070CB4 (--$_Uninitialized_move@PEAPEAVSceneNode@Engine@Spectre@@V-$allocator@PEAVSceneNode@Engine@Spectr.c)
 *     ?_Change_array@?$vector@PEAVSceneNode@Engine@Spectre@@V?$allocator@PEAVSceneNode@Engine@Spectre@@@std@@@std@@AEAAXQEAPEAVSceneNode@Engine@Spectre@@_K1@Z @ 0x180070F2C (-_Change_array@-$vector@PEAVSceneNode@Engine@Spectre@@V-$allocator@PEAVSceneNode@Engine@Spectre@.c)
 */

char *__fastcall std::vector<Spectre::Engine::SceneNode *>::_Emplace_reallocate<Spectre::Engine::SceneNode * const &>(
        __int64 *a1,
        __int64 a2,
        _QWORD *a3)
{
  unsigned __int64 v3; // rbx
  __int64 v5; // r14
  __int64 v7; // rax
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  unsigned __int64 size_of; // rax
  char *v13; // rsi
  _QWORD *v14; // r8
  char *v15; // r14
  __int64 v16; // rdx
  __int64 v17; // rcx

  v3 = 0x1FFFFFFFFFFFFFFFLL;
  v5 = (a2 - *a1) >> 3;
  v7 = (a1[1] - *a1) >> 3;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v9 = v7 + 1;
  v10 = (a1[2] - *a1) >> 3;
  v11 = v10 >> 1;
  if ( v10 <= 0x1FFFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v3 = v11 + v10;
    if ( v11 + v10 < v9 )
      v3 = v7 + 1;
  }
  size_of = std::_Get_size_of_n<8>(v3);
  v13 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v14 = v13;
  v15 = &v13[8 * v5];
  *(_QWORD *)v15 = *a3;
  v16 = a1[1];
  v17 = *a1;
  if ( a2 != v16 )
  {
    std::_Uninitialized_move<Spectre::Engine::SceneNode * *>(v17, a2, v13);
    v16 = a1[1];
    v14 = v15 + 8;
    v17 = a2;
  }
  std::_Uninitialized_move<Spectre::Engine::SceneNode * *>(v17, v16, v14);
  std::vector<Spectre::Engine::SceneNode *>::_Change_array(a1, v13, v9, v3);
  return v15;
}
