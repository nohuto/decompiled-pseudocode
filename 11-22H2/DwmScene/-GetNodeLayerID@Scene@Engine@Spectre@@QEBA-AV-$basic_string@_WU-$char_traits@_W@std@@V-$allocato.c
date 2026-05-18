/*
 * XREFs of ?GetNodeLayerID@Scene@Engine@Spectre@@QEBA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$shared_ptr@VSceneNode@Engine@Spectre@@@5@@Z @ 0x1800411F4
 * Callers:
 *     ?FindClone@Scene@Engine@Spectre@@QEBA?AV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@V?$shared_ptr@VScene@Engine@Spectre@@@5@V45@@Z @ 0x1800669E0 (-FindClone@Scene@Engine@Spectre@@QEBA-AV-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@V-$shared_.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ?GetID@SceneLayer@Engine@Spectre@@QEBA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@XZ @ 0x18004101C (-GetID@SceneLayer@Engine@Spectre@@QEBA-AV-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W.c)
 *     ?GetNodeLayer@Scene@Engine@Spectre@@QEBA?AV?$shared_ptr@VSceneLayer@Engine@Spectre@@@std@@V?$shared_ptr@VSceneNode@Engine@Spectre@@@5@@Z @ 0x180041110 (-GetNodeLayer@Scene@Engine@Spectre@@QEBA-AV-$shared_ptr@VSceneLayer@Engine@Spectre@@@std@@V-$sha.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall Spectre::Engine::Scene::GetNodeLayerID(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  _QWORD *v5; // rax
  __int64 v6; // r9
  __int64 *NodeLayer; // rax
  std::_Ref_count_base *v8; // rcx
  __int64 v10; // [rsp+28h] [rbp-30h] BYREF
  __int64 v11; // [rsp+38h] [rbp-20h] BYREF
  std::_Ref_count_base *v12; // [rsp+40h] [rbp-18h]

  v5 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
         &v10,
         a3);
  NodeLayer = Spectre::Engine::Scene::GetNodeLayer(v6, &v11, (__int64)v5);
  Spectre::Engine::SceneLayer::GetID(*NodeLayer, a2);
  if ( v12 )
    std::_Ref_count_base::_Decref(v12);
  v8 = (std::_Ref_count_base *)a3[1];
  if ( v8 )
    std::_Ref_count_base::_Decref(v8);
  return a2;
}
