/*
 * XREFs of ?TreeContains@SceneNode@Engine@Spectre@@AEAA_NV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z @ 0x18003DECC
 * Callers:
 *     ?SetParent@SceneNode@Engine@Spectre@@AEAAXV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z @ 0x18003D484 (-SetParent@SceneNode@Engine@Spectre@@AEAAXV-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180011020 (--4-$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??$?9VScene@Engine@Spectre@@@std@@YA_NAEBV?$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z @ 0x180011DE0 (--$-9VScene@Engine@Spectre@@@std@@YA_NAEBV-$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ?GetParent@SceneNode@Engine@Spectre@@QEBA?AV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@XZ @ 0x180012624 (-GetParent@SceneNode@Engine@Spectre@@QEBA-AV-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@XZ.c)
 *     ?VerifyReadAccess@SceneNode@Engine@Spectre@@QEBAXXZ @ 0x18003E2B0 (-VerifyReadAccess@SceneNode@Engine@Spectre@@QEBAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall Spectre::Engine::SceneNode::TreeContains(Spectre::Engine::SceneNode *a1, _QWORD *a2)
{
  __int64 *Parent; // rax
  std::_Ref_count_base *v5; // rcx
  std::_Ref_count_base *v7; // rcx
  Spectre::Engine::SceneNode *v8; // [rsp+20h] [rbp-28h] BYREF
  std::_Ref_count_base *v9; // [rsp+28h] [rbp-20h]
  __int64 v10; // [rsp+30h] [rbp-18h] BYREF
  std::_Ref_count_base *v11; // [rsp+38h] [rbp-10h]

  Spectre::Engine::SceneNode::VerifyReadAccess(a1);
  std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(&v8, a2);
  while ( std::operator!=<Spectre::Engine::Scene>(&v8) )
  {
    if ( v8 == a1 )
    {
      if ( v9 )
        std::_Ref_count_base::_Decref(v9);
      v5 = (std::_Ref_count_base *)a2[1];
      if ( v5 )
        std::_Ref_count_base::_Decref(v5);
      return 1;
    }
    Parent = Spectre::Engine::SceneNode::GetParent(v8, &v10);
    std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=(&v8, Parent);
    if ( v11 )
      std::_Ref_count_base::_Decref(v11);
  }
  if ( v9 )
    std::_Ref_count_base::_Decref(v9);
  v7 = (std::_Ref_count_base *)a2[1];
  if ( v7 )
    std::_Ref_count_base::_Decref(v7);
  return 0;
}
