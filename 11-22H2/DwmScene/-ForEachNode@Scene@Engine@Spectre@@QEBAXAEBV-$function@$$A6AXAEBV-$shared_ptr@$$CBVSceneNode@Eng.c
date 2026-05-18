/*
 * XREFs of ?ForEachNode@Scene@Engine@Spectre@@QEBAXAEBV?$function@$$A6AXAEBV?$shared_ptr@$$CBVSceneNode@Engine@Spectre@@@std@@@Z@std@@@Z @ 0x180040E6C
 * Callers:
 *     ??$GetComponents_Internal@VLight@Engine@Spectre@@@Scene@Engine@Spectre@@AEBA?AV?$vector@V?$shared_ptr@VLight@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VLight@Engine@Spectre@@@std@@@2@@std@@XZ @ 0x180011F58 (--$GetComponents_Internal@VLight@Engine@Spectre@@@Scene@Engine@Spectre@@AEBA-AV-$vector@V-$share.c)
 *     ??$GetComponents_Internal@VCamera@Engine@Spectre@@@Scene@Engine@Spectre@@AEBA?AV?$vector@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@@2@@std@@XZ @ 0x180062770 (--$GetComponents_Internal@VCamera@Engine@Spectre@@@Scene@Engine@Spectre@@AEBA-AV-$vector@V-$shar.c)
 *     ??$GetComponents_Internal@VLightProbe@Engine@Spectre@@@Scene@Engine@Spectre@@AEBA?AV?$vector@V?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@@2@@std@@XZ @ 0x18007C7F4 (--$GetComponents_Internal@VLightProbe@Engine@Spectre@@@Scene@Engine@Spectre@@AEBA-AV-$vector@V-$.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceConstantBuffer@Engine@Spectre@@@std@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18001D378 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBW4RenderDevic.c)
 *     ?VerifyReadAccess@Lockable@Engine@Spectre@@QEBAXXZ @ 0x18002A2FC (-VerifyReadAccess@Lockable@Engine@Spectre@@QEBAXXZ.c)
 *     _anonymous_namespace_::ForEachNode_Internal_std::function_void___cdecl(std::shared_ptr_Spectre::Engine::SceneNode_const___const_&)__std::shared_ptr_Spectre::Engine::SceneNode___ @ 0x18003F130 (_anonymous_namespace_--ForEachNode_Internal_std--function_void___cdecl(std--shared_ptr_Spectre--.c)
 *     ?GetParent@IConfigurationManager@Utils@Spectre@@QEBA?AV?$shared_ptr@VIConfigurationManager@Utils@Spectre@@@std@@XZ @ 0x180041390 (-GetParent@IConfigurationManager@Utils@Spectre@@QEBA-AV-$shared_ptr@VIConfigurationManager@Utils.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Spectre::Engine::Scene::ForEachNode(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  Spectre::Engine::SceneNode **Parent; // rax
  _BYTE v6[8]; // [rsp+20h] [rbp-18h] BYREF
  std::_Ref_count_base *v7; // [rsp+28h] [rbp-10h]
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  Spectre::Engine::Lockable::VerifyReadAccess((Spectre::Engine::Lockable *)(a1 + 16));
  result = **(_QWORD **)(a1 + 88);
  v8 = result;
  while ( !*(_BYTE *)(result + 25) )
  {
    Parent = (Spectre::Engine::SceneNode **)Spectre::Utils::IConfigurationManager::GetParent(
                                              *(_QWORD *)(result + 64),
                                              v6);
    anonymous_namespace_::ForEachNode_Internal_std::function_void___cdecl_std::shared_ptr_Spectre::Engine::SceneNode_const___const_____std::shared_ptr_Spectre::Engine::SceneNode___(
      a2,
      Parent);
    if ( v7 )
      std::_Ref_count_base::_Decref(v7);
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<enum Spectre::Engine::RenderDeviceID const,std::shared_ptr<Spectre::Engine::DeviceConstantBuffer>>>>,std::_Iterator_base0>::operator++(&v8);
    result = v8;
  }
  return result;
}
