/*
 * XREFs of ?Clone@Aimer@Engine@Spectre@@UEBA?AV?$shared_ptr@VComponent@Engine@Spectre@@@std@@AEBIV?$shared_ptr@VSceneNode@Engine@Spectre@@@5@@Z @ 0x1800966D0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$?0VDefaultSceneNodeTraversal@Engine@Spectre@@$0A@@?$shared_ptr@VISceneNodeTraversal@Engine@Spectre@@@std@@QEAA@AEBV?$shared_ptr@VDefaultSceneNodeTraversal@Engine@Spectre@@@1@@Z @ 0x180011DA0 (--$-0VDefaultSceneNodeTraversal@Engine@Spectre@@$0A@@-$shared_ptr@VISceneNodeTraversal@Engine@Sp.c)
 *     ??$make_shared@VAimer@Engine@Spectre@@AEAV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@std@@YA?AV?$shared_ptr@VAimer@Engine@Spectre@@@0@AEAV?$shared_ptr@VSceneNode@Engine@Spectre@@@0@@Z @ 0x1800964F0 (--$make_shared@VAimer@Engine@Spectre@@AEAV-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@std@@YA.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Spectre::Engine::Aimer::Clone(__int64 a1, _QWORD *a2, __int64 a3, _QWORD *a4)
{
  _QWORD *v8; // rax
  void (__fastcall *v9)(__int64, _QWORD *, __int64); // r9
  std::_Ref_count_base *v10; // rcx
  _QWORD v12[2]; // [rsp+28h] [rbp-40h] BYREF
  _QWORD v13[6]; // [rsp+38h] [rbp-30h] BYREF

  std::make_shared<Spectre::Engine::Aimer,std::shared_ptr<Spectre::Engine::SceneNode> &>(v12, a4);
  v8 = std::shared_ptr<Spectre::Engine::ISceneNodeTraversal>::shared_ptr<Spectre::Engine::ISceneNodeTraversal>(v13, v12);
  v9(a1, v8, a3);
  *a2 = v12[0];
  a2[1] = v12[1];
  v10 = (std::_Ref_count_base *)a4[1];
  if ( v10 )
    std::_Ref_count_base::_Decref(v10);
  return a2;
}
