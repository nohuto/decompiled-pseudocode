/*
 * XREFs of ?Traverse@DefaultSceneNodeTraversal@Engine@Spectre@@AEBAXPEAVSceneNode@23@AEBVCamera@23@AEAV?$vector@PEAVSceneNode@Engine@Spectre@@V?$allocator@PEAVSceneNode@Engine@Spectre@@@std@@@std@@@Z @ 0x180070E5C
 * Callers:
 *     ?GetSceneNodes@DefaultSceneNodeTraversal@Engine@Spectre@@UEBA?AV?$vector@PEAVSceneNode@Engine@Spectre@@V?$allocator@PEAVSceneNode@Engine@Spectre@@@std@@@std@@PEAVSceneNode@23@AEBVCamera@23@@Z @ 0x180070E10 (-GetSceneNodes@DefaultSceneNodeTraversal@Engine@Spectre@@UEBA-AV-$vector@PEAVSceneNode@Engine@Sp.c)
 *     ?Traverse@DefaultSceneNodeTraversal@Engine@Spectre@@AEBAXPEAVSceneNode@23@AEBVCamera@23@AEAV?$vector@PEAVSceneNode@Engine@Spectre@@V?$allocator@PEAVSceneNode@Engine@Spectre@@@std@@@std@@@Z @ 0x180070E5C (-Traverse@DefaultSceneNodeTraversal@Engine@Spectre@@AEBAXPEAVSceneNode@23@AEBVCamera@23@AEAV-$ve.c)
 * Callees:
 *     ?VerifyReadAccess@SceneNode@Engine@Spectre@@QEBAXXZ @ 0x18003E2B0 (-VerifyReadAccess@SceneNode@Engine@Spectre@@QEBAXXZ.c)
 *     ??$_Emplace_reallocate@AEBQEAVSceneNode@Engine@Spectre@@@?$vector@PEAVSceneNode@Engine@Spectre@@V?$allocator@PEAVSceneNode@Engine@Spectre@@@std@@@std@@QEAAPEAPEAVSceneNode@Engine@Spectre@@QEAPEAV234@AEBQEAV234@@Z @ 0x180070BAC (--$_Emplace_reallocate@AEBQEAVSceneNode@Engine@Spectre@@@-$vector@PEAVSceneNode@Engine@Spectre@@.c)
 *     ?Traverse@DefaultSceneNodeTraversal@Engine@Spectre@@AEBAXPEAVSceneNode@23@AEBVCamera@23@AEAV?$vector@PEAVSceneNode@Engine@Spectre@@V?$allocator@PEAVSceneNode@Engine@Spectre@@@std@@@std@@@Z @ 0x180070E5C (-Traverse@DefaultSceneNodeTraversal@Engine@Spectre@@AEBAXPEAVSceneNode@23@AEBVCamera@23@AEAV-$ve.c)
 */

void __fastcall Spectre::Engine::DefaultSceneNodeTraversal::Traverse(
        __int64 a1,
        Spectre::Engine::SceneNode *a2,
        _QWORD *a3,
        __int64 *a4)
{
  Spectre::Engine::SceneNode *v7; // rbx
  Spectre::Engine::SceneNode **v8; // rdx
  _QWORD *v9; // rbp
  _QWORD *i; // rbx
  int v11; // [rsp+20h] [rbp-18h]
  Spectre::Engine::SceneNode *v12; // [rsp+48h] [rbp+10h] BYREF

  v12 = a2;
  v7 = a2;
  Spectre::Engine::SceneNode::VerifyReadAccess(a2);
  if ( (*((_QWORD *)v7 + 56) & a3[66]) == a3[65] )
  {
    Spectre::Engine::SceneNode::VerifyReadAccess(v7);
    if ( (*((_QWORD *)v7 + 56) & a3[64]) == a3[63] )
    {
      v8 = (Spectre::Engine::SceneNode **)a4[1];
      if ( v8 == (Spectre::Engine::SceneNode **)a4[2] )
      {
        std::vector<Spectre::Engine::SceneNode *>::_Emplace_reallocate<Spectre::Engine::SceneNode * const &>(
          a4,
          (__int64)v8,
          &v12);
        v7 = v12;
      }
      else
      {
        *v8 = v7;
        a4[1] += 8LL;
      }
    }
    Spectre::Engine::SceneNode::VerifyReadAccess(v7);
    v9 = (_QWORD *)*((_QWORD *)v7 + 5);
    for ( i = (_QWORD *)*((_QWORD *)v7 + 4); i != v9; i += 2 )
      Spectre::Engine::DefaultSceneNodeTraversal::Traverse(a1, *i, a3, a4, v11);
  }
}
