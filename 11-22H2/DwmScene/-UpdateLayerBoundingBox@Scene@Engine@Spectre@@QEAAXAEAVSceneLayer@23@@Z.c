/*
 * XREFs of ?UpdateLayerBoundingBox@Scene@Engine@Spectre@@QEAAXAEAVSceneLayer@23@@Z @ 0x180042654
 * Callers:
 *     ?UpdateAllLayerBoundingBoxes@Scene@Engine@Spectre@@AEAAXXZ @ 0x1800424E8 (-UpdateAllLayerBoundingBoxes@Scene@Engine@Spectre@@AEAAXXZ.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$?0VDefaultSceneNodeTraversal@Engine@Spectre@@$0A@@?$shared_ptr@VISceneNodeTraversal@Engine@Spectre@@@std@@QEAA@AEBV?$shared_ptr@VDefaultSceneNodeTraversal@Engine@Spectre@@@1@@Z @ 0x180011DA0 (--$-0VDefaultSceneNodeTraversal@Engine@Spectre@@$0A@@-$shared_ptr@VISceneNodeTraversal@Engine@Sp.c)
 *     ?VerifyWriteAccess@Lockable@Engine@Spectre@@QEBAXXZ @ 0x18002A384 (-VerifyWriteAccess@Lockable@Engine@Spectre@@QEBAXXZ.c)
 *     ??$_Atomic_address_as@DU?$_Atomic_padded@_N@std@@@std@@YAPECDAEAU?$_Atomic_padded@_N@0@@Z @ 0x18003F1B0 (--$_Atomic_address_as@DU-$_Atomic_padded@_N@std@@@std@@YAPECDAEAU-$_Atomic_padded@_N@0@@Z.c)
 *     ??$_Atomic_reinterpret_as@D_N@std@@YADAEB_N@Z @ 0x18003F1C8 (--$_Atomic_reinterpret_as@D_N@std@@YADAEB_N@Z.c)
 *     ?UpdateBoundingBoxRecursive@Scene@Engine@Spectre@@SAXAEBV?$shared_ptr@$$CBVSceneNode@Engine@Spectre@@@std@@AEAUBoundingBox@DirectX@@AEA_N@Z @ 0x180042584 (-UpdateBoundingBoxRecursive@Scene@Engine@Spectre@@SAXAEBV-$shared_ptr@$$CBVSceneNode@Engine@Spec.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Spectre::Engine::Scene::UpdateLayerBoundingBox(
        Spectre::Engine::Scene *this,
        struct Spectre::Engine::SceneLayer *a2)
{
  volatile signed __int8 *v3; // rax
  signed __int8 v4; // dl
  signed __int8 v5; // r8
  Spectre::Engine::SceneNode *v6; // [rsp+20h] [rbp-30h] BYREF
  std::_Ref_count_base *v7; // [rsp+28h] [rbp-28h]
  _OWORD v8[2]; // [rsp+30h] [rbp-20h] BYREF
  char v9; // [rsp+60h] [rbp+10h] BYREF
  char v10; // [rsp+68h] [rbp+18h] BYREF

  Spectre::Engine::Lockable::VerifyWriteAccess((Spectre::Engine::Scene *)((char *)this + 16));
  v9 = 1;
  v10 = 0;
  std::_Atomic_reinterpret_as<char,bool>((__int64)&v9);
  std::_Atomic_reinterpret_as<char,bool>((__int64)&v10);
  v3 = (volatile signed __int8 *)std::_Atomic_address_as<char,std::_Atomic_padded<bool>>((__int64)a2 + 72);
  if ( v5 == _InterlockedCompareExchange8(v3, v4, v5) )
  {
    v9 = 0;
    memset(v8, 0, 24);
    *((_OWORD *)a2 + 3) = v8[0];
    *((_QWORD *)a2 + 8) = *(_QWORD *)&v8[1];
    std::shared_ptr<Spectre::Engine::ISceneNodeTraversal>::shared_ptr<Spectre::Engine::ISceneNodeTraversal>(
      &v6,
      (_QWORD *)a2 + 4);
    Spectre::Engine::Scene::UpdateBoundingBoxRecursive(
      &v6,
      (struct Spectre::Engine::SceneLayer *)((char *)a2 + 48),
      (bool *)&v9);
    if ( v7 )
      std::_Ref_count_base::_Decref(v7);
  }
}
