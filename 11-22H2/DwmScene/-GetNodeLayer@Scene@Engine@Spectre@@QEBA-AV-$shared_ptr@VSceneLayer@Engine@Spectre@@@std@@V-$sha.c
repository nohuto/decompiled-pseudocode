/*
 * XREFs of ?GetNodeLayer@Scene@Engine@Spectre@@QEBA?AV?$shared_ptr@VSceneLayer@Engine@Spectre@@@std@@V?$shared_ptr@VSceneNode@Engine@Spectre@@@5@@Z @ 0x180041110
 * Callers:
 *     ?AddNode@Scene@Engine@Spectre@@QEAA?AV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@_KV45@@Z @ 0x18004033C (-AddNode@Scene@Engine@Spectre@@QEAA-AV-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@_KV45@@Z.c)
 *     ?GetNodeLayerID@Scene@Engine@Spectre@@QEBA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$shared_ptr@VSceneNode@Engine@Spectre@@@5@@Z @ 0x1800411F4 (-GetNodeLayerID@Scene@Engine@Spectre@@QEBA-AV-$basic_string@_WU-$char_traits@_W@std@@V-$allocato.c)
 *     ?InsertNode@Scene@Engine@Spectre@@QEAAXV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@0@Z @ 0x1800414F0 (-InsertNode@Scene@Engine@Spectre@@QEAAXV-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@0@Z.c)
 *     ?RemoveNode@Scene@Engine@Spectre@@QEAAXV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z @ 0x180041AA0 (-RemoveNode@Scene@Engine@Spectre@@QEAAXV-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ??$?8VTween@Tweening@Utils@Spectre@@V0123@@std@@YA_NAEBV?$shared_ptr@VTween@Tweening@Utils@Spectre@@@0@0@Z @ 0x180015678 (--$-8VTween@Tweening@Utils@Spectre@@V0123@@std@@YA_NAEBV-$shared_ptr@VTween@Tweening@Utils@Spect.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceConstantBuffer@Engine@Spectre@@@std@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18001D378 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBW4RenderDevic.c)
 *     ?VerifyReadAccess@Lockable@Engine@Spectre@@QEBAXXZ @ 0x18002A2FC (-VerifyReadAccess@Lockable@Engine@Spectre@@QEBAXXZ.c)
 *     ?GetRoot@SceneNode@Engine@Spectre@@QEAA?AV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@XZ @ 0x18003C228 (-GetRoot@SceneNode@Engine@Spectre@@QEAA-AV-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@XZ.c)
 *     ?GetParent@IConfigurationManager@Utils@Spectre@@QEBA?AV?$shared_ptr@VIConfigurationManager@Utils@Spectre@@@std@@XZ @ 0x180041390 (-GetParent@IConfigurationManager@Utils@Spectre@@QEBA-AV-$shared_ptr@VIConfigurationManager@Utils.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall Spectre::Engine::Scene::GetNodeLayer(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v6; // rax
  _QWORD *v7; // rbx
  _QWORD *Parent; // rax
  bool v9; // bp
  std::_Ref_count_base *v10; // rcx
  __int64 v12; // [rsp+28h] [rbp-30h] BYREF
  std::_Ref_count_base *v13; // [rsp+30h] [rbp-28h]
  _BYTE v14[8]; // [rsp+38h] [rbp-20h] BYREF
  std::_Ref_count_base *v15; // [rsp+40h] [rbp-18h]
  __int64 v16; // [rsp+70h] [rbp+18h] BYREF

  v16 = a3;
  Spectre::Engine::Lockable::VerifyReadAccess((Spectre::Engine::Lockable *)(a1 + 16));
  Spectre::Engine::SceneNode::GetRoot(*(Spectre::Engine::SceneNode **)a3, &v12);
  v6 = **(_QWORD **)(a1 + 88);
  v16 = v6;
  while ( !*(_BYTE *)(v6 + 25) )
  {
    v7 = (_QWORD *)(v6 + 64);
    Parent = (_QWORD *)Spectre::Utils::IConfigurationManager::GetParent(*(_QWORD *)(v6 + 64), v14);
    v9 = std::operator==<Spectre::Utils::Tweening::Tween,Spectre::Utils::Tweening::Tween>(Parent, &v12);
    if ( v15 )
      std::_Ref_count_base::_Decref(v15);
    if ( v9 )
    {
      std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(a2, v7);
      goto LABEL_9;
    }
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<enum Spectre::Engine::RenderDeviceID const,std::shared_ptr<Spectre::Engine::DeviceConstantBuffer>>>>,std::_Iterator_base0>::operator++(&v16);
    v6 = v16;
  }
  *a2 = 0LL;
  a2[1] = 0LL;
LABEL_9:
  if ( v13 )
    std::_Ref_count_base::_Decref(v13);
  v10 = *(std::_Ref_count_base **)(a3 + 8);
  if ( v10 )
    std::_Ref_count_base::_Decref(v10);
  return a2;
}
