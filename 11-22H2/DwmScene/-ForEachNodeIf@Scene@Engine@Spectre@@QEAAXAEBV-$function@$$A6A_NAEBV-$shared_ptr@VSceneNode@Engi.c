/*
 * XREFs of ?ForEachNodeIf@Scene@Engine@Spectre@@QEAAXAEBV?$function@$$A6A_NAEBV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z@std@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@5@@Z @ 0x180040EE4
 * Callers:
 *     ??$GetComponent@VLightProbe@Engine@Spectre@@@Scene@Engine@Spectre@@QEAA?AV?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@4@@Z @ 0x180016288 (--$GetComponent@VLightProbe@Engine@Spectre@@@Scene@Engine@Spectre@@QEAA-AV-$shared_ptr@VLightPro.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@AEBV01@@Z @ 0x180012440 (--0-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEAAXXZ @ 0x180013348 (-_Tidy_deallocate@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@AEAAXXZ.c)
 *     ?VerifyWriteAccess@Lockable@Engine@Spectre@@QEBAXXZ @ 0x18002A384 (-VerifyWriteAccess@Lockable@Engine@Spectre@@QEBAXXZ.c)
 *     _anonymous_namespace_::ForEachNodeIf_Internal_std::function_bool___cdecl(std::shared_ptr_Spectre::Engine::SceneNode__const_&)__std::shared_ptr_Spectre::Engine::SceneNode___ @ 0x18003F084 (_anonymous_namespace_--ForEachNodeIf_Internal_std--function_bool___cdecl(std--shared_ptr_Spectre.c)
 *     ?GetLayer@Scene@Engine@Spectre@@QEBA?AV?$shared_ptr@VSceneLayer@Engine@Spectre@@@std@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@5@@Z @ 0x180041040 (-GetLayer@Scene@Engine@Spectre@@QEBA-AV-$shared_ptr@VSceneLayer@Engine@Spectre@@@std@@V-$basic_s.c)
 *     ?GetParent@IConfigurationManager@Utils@Spectre@@QEBA?AV?$shared_ptr@VIConfigurationManager@Utils@Spectre@@@std@@XZ @ 0x180041390 (-GetParent@IConfigurationManager@Utils@Spectre@@QEBA-AV-$shared_ptr@VIConfigurationManager@Utils.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Spectre::Engine::Scene::ForEachNodeIf(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v6; // rax
  Spectre::Engine::SceneNode **Parent; // rax
  __int64 v9; // [rsp+20h] [rbp-58h] BYREF
  std::_Ref_count_base *v10; // [rsp+28h] [rbp-50h]
  __int64 v11; // [rsp+30h] [rbp-48h] BYREF
  std::_Ref_count_base *v12; // [rsp+38h] [rbp-40h]
  __int64 v13; // [rsp+50h] [rbp-28h]

  v13 = a3;
  Spectre::Engine::Lockable::VerifyWriteAccess((Spectre::Engine::Lockable *)(a1 + 16));
  v6 = std::wstring::wstring(&v11, a3);
  Spectre::Engine::Scene::GetLayer(a1, &v9, v6);
  Parent = (Spectre::Engine::SceneNode **)Spectre::Utils::IConfigurationManager::GetParent(v9, &v11);
  anonymous_namespace_::ForEachNodeIf_Internal_std::function_bool___cdecl_std::shared_ptr_Spectre::Engine::SceneNode__const_____std::shared_ptr_Spectre::Engine::SceneNode___(
    a2,
    Parent);
  if ( v12 )
    std::_Ref_count_base::_Decref(v12);
  if ( v10 )
    std::_Ref_count_base::_Decref(v10);
  return std::wstring::_Tidy_deallocate(a3);
}
