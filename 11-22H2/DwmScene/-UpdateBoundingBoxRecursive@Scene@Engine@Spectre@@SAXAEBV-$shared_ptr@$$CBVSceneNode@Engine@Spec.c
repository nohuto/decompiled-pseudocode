/*
 * XREFs of ?UpdateBoundingBoxRecursive@Scene@Engine@Spectre@@SAXAEBV?$shared_ptr@$$CBVSceneNode@Engine@Spectre@@@std@@AEAUBoundingBox@DirectX@@AEA_N@Z @ 0x180042584
 * Callers:
 *     ?UpdateBoundingBoxRecursive@Scene@Engine@Spectre@@SAXAEBV?$shared_ptr@$$CBVSceneNode@Engine@Spectre@@@std@@AEAUBoundingBox@DirectX@@AEA_N@Z @ 0x180042584 (-UpdateBoundingBoxRecursive@Scene@Engine@Spectre@@SAXAEBV-$shared_ptr@$$CBVSceneNode@Engine@Spec.c)
 *     ?UpdateLayerBoundingBox@Scene@Engine@Spectre@@QEAAXAEAVSceneLayer@23@@Z @ 0x180042654 (-UpdateLayerBoundingBox@Scene@Engine@Spectre@@QEAAXAEAVSceneLayer@23@@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$?0VDefaultSceneNodeTraversal@Engine@Spectre@@$0A@@?$shared_ptr@VISceneNodeTraversal@Engine@Spectre@@@std@@QEAA@AEBV?$shared_ptr@VDefaultSceneNodeTraversal@Engine@Spectre@@@1@@Z @ 0x180011DA0 (--$-0VDefaultSceneNodeTraversal@Engine@Spectre@@$0A@@-$shared_ptr@VISceneNodeTraversal@Engine@Sp.c)
 *     ??$?8VScene@Engine@Spectre@@@std@@YA_NAEBV?$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z @ 0x180011DD0 (--$-8VScene@Engine@Spectre@@@std@@YA_NAEBV-$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z.c)
 *     ??$?9VScene@Engine@Spectre@@@std@@YA_NAEBV?$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z @ 0x180011DE0 (--$-9VScene@Engine@Spectre@@@std@@YA_NAEBV-$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z.c)
 *     ??$GetComponent@VBounds@Engine@Spectre@@@SceneNode@Engine@Spectre@@QEBA?AV?$shared_ptr@VBounds@Engine@Spectre@@@std@@XZ @ 0x180013E14 (--$GetComponent@VBounds@Engine@Spectre@@@SceneNode@Engine@Spectre@@QEBA-AV-$shared_ptr@VBounds@E.c)
 *     ?VerifyReadAccess@SceneNode@Engine@Spectre@@QEBAXXZ @ 0x18003E2B0 (-VerifyReadAccess@SceneNode@Engine@Spectre@@QEBAXXZ.c)
 *     ?UpdateBoundingBoxRecursive@Scene@Engine@Spectre@@SAXAEBV?$shared_ptr@$$CBVSceneNode@Engine@Spectre@@@std@@AEAUBoundingBox@DirectX@@AEA_N@Z @ 0x180042584 (-UpdateBoundingBoxRecursive@Scene@Engine@Spectre@@SAXAEBV-$shared_ptr@$$CBVSceneNode@Engine@Spec.c)
 *     ?MergeWorldSpace@Bounds@Engine@Spectre@@QEAAXAEAUBoundingBox@DirectX@@AEA_N@Z @ 0x18004A3B0 (-MergeWorldSpace@Bounds@Engine@Spectre@@QEAAXAEAUBoundingBox@DirectX@@AEA_N@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall Spectre::Engine::Scene::UpdateBoundingBoxRecursive(
        Spectre::Engine::SceneNode **a1,
        struct DirectX::BoundingBox *a2,
        bool *a3)
{
  Spectre::Engine::SceneNode **v6; // rcx
  Spectre::Engine::SceneNode *v7; // rbx
  _QWORD *v8; // rdi
  _QWORD *v9; // rbx
  Spectre::Engine::Bounds *v10; // [rsp+20h] [rbp-28h] BYREF
  std::_Ref_count_base *v11; // [rsp+28h] [rbp-20h]
  __int64 v12; // [rsp+30h] [rbp-18h] BYREF
  std::_Ref_count_base *v13; // [rsp+38h] [rbp-10h]

  if ( !std::operator==<Spectre::Engine::Scene>(a1) )
  {
    Spectre::Engine::SceneNode::GetComponent<Spectre::Engine::Bounds>(*v6, &v10);
    if ( std::operator!=<Spectre::Engine::Scene>(&v10) )
      Spectre::Engine::Bounds::MergeWorldSpace(v10, a2, a3);
    v7 = *a1;
    Spectre::Engine::SceneNode::VerifyReadAccess(v7);
    v8 = (_QWORD *)*((_QWORD *)v7 + 4);
    v9 = (_QWORD *)*((_QWORD *)v7 + 5);
    while ( v8 != v9 )
    {
      std::shared_ptr<Spectre::Engine::ISceneNodeTraversal>::shared_ptr<Spectre::Engine::ISceneNodeTraversal>(&v12, v8);
      Spectre::Engine::Scene::UpdateBoundingBoxRecursive(&v12, a2, a3);
      if ( v13 )
        std::_Ref_count_base::_Decref(v13);
      v8 += 2;
    }
    if ( v11 )
      std::_Ref_count_base::_Decref(v11);
  }
}
