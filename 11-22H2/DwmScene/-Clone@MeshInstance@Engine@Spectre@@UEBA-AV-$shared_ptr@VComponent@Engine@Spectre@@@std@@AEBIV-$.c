/*
 * XREFs of ?Clone@MeshInstance@Engine@Spectre@@UEBA?AV?$shared_ptr@VComponent@Engine@Spectre@@@std@@AEBIV?$shared_ptr@VSceneNode@Engine@Spectre@@@5@@Z @ 0x18004B470
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$?0VDefaultSceneNodeTraversal@Engine@Spectre@@$0A@@?$shared_ptr@VISceneNodeTraversal@Engine@Spectre@@@std@@QEAA@AEBV?$shared_ptr@VDefaultSceneNodeTraversal@Engine@Spectre@@@1@@Z @ 0x180011DA0 (--$-0VDefaultSceneNodeTraversal@Engine@Spectre@@$0A@@-$shared_ptr@VISceneNodeTraversal@Engine@Sp.c)
 *     ??$make_shared@VMeshInstance@Engine@Spectre@@AEAV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@std@@YA?AV?$shared_ptr@VMeshInstance@Engine@Spectre@@@0@AEAV?$shared_ptr@VSceneNode@Engine@Spectre@@@0@@Z @ 0x18004ABB8 (--$make_shared@VMeshInstance@Engine@Spectre@@AEAV-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@.c)
 *     ?CloneInternal@MeshInstance@Engine@Spectre@@EEBAXV?$shared_ptr@VComponent@Engine@Spectre@@@std@@AEBI@Z @ 0x18004B500 (-CloneInternal@MeshInstance@Engine@Spectre@@EEBAXV-$shared_ptr@VComponent@Engine@Spectre@@@std@@.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall Spectre::Engine::MeshInstance::Clone(__int64 a1, _QWORD *a2, __int64 a3, _QWORD *a4)
{
  _QWORD *v8; // rax
  std::_Ref_count_base *v9; // rcx
  _QWORD v11[2]; // [rsp+28h] [rbp-40h] BYREF
  _QWORD v12[6]; // [rsp+38h] [rbp-30h] BYREF

  std::make_shared<Spectre::Engine::MeshInstance,std::shared_ptr<Spectre::Engine::SceneNode> &>(v11, a4);
  v8 = std::shared_ptr<Spectre::Engine::ISceneNodeTraversal>::shared_ptr<Spectre::Engine::ISceneNodeTraversal>(v12, v11);
  Spectre::Engine::MeshInstance::CloneInternal(a1, v8, a3);
  *a2 = v11[0];
  a2[1] = v11[1];
  v9 = (std::_Ref_count_base *)a4[1];
  if ( v9 )
    std::_Ref_count_base::_Decref(v9);
  return a2;
}
