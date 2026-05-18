/*
 * XREFs of ?AddNode@Scene@Engine@Spectre@@QEAA?AV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@_KV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@5@@Z @ 0x18004049C
 * Callers:
 *     ?ApplySceneStandardContent@Engine@1Spectre@@MEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@@Z @ 0x180032880 (-ApplySceneStandardContent@Engine@1Spectre@@MEAAXAEBV-$shared_ptr@VScene@Engine@Spectre@@@std@@@.c)
 *     ?ApplySceneStandardContent@ViewerEngine@Engine@Spectre@@MEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@@Z @ 0x180064E70 (-ApplySceneStandardContent@ViewerEngine@Engine@Spectre@@MEAAXAEBV-$shared_ptr@VScene@Engine@Spec.c)
 *     ?CreateStandardLights@ViewerEngine@Engine@Spectre@@QEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@@Z @ 0x180065C40 (-CreateStandardLights@ViewerEngine@Engine@Spectre@@QEAAXAEBV-$shared_ptr@VScene@Engine@Spectre@@.c)
 *     ?Create@ImageProcessingManager@Engine@Spectre@@QEAAXPEAVRenderDevice@23@@Z @ 0x180072750 (-Create@ImageProcessingManager@Engine@Spectre@@QEAAXPEAVRenderDevice@23@@Z.c)
 *     std::_Func_impl_no_alloc__lambda_c3255ca82109f45dbf65110c90bf1ea2__std::pair_std::shared_ptr_Spectre::Engine::SceneNode__std::shared_ptr_Spectre::Engine::Mesh_____::_Do_call @ 0x180073C60 (std--_Func_impl_no_alloc__lambda_c3255ca82109f45dbf65110c90bf1ea2__std--pair_std--s_ea_180073C60.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@AEBV01@@Z @ 0x180012440 (--0-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@AEBV01@@Z.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEAAXXZ @ 0x180013348 (-_Tidy_deallocate@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@AEAAXXZ.c)
 *     ?AddNode@Scene@Engine@Spectre@@QEAA?AV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@_KV45@@Z @ 0x18004033C (-AddNode@Scene@Engine@Spectre@@QEAA-AV-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@_KV45@@Z.c)
 *     ?GetRootNode@Scene@Engine@Spectre@@QEBA?AV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@5@@Z @ 0x18004126C (-GetRootNode@Scene@Engine@Spectre@@QEBA-AV-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@V-$basic.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Spectre::Engine::Scene::AddNode(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v8; // rax
  _QWORD *v9; // rax
  __int64 v11; // [rsp+28h] [rbp-80h] BYREF
  __int64 v12; // [rsp+38h] [rbp-70h] BYREF
  std::_Ref_count_base *v13; // [rsp+40h] [rbp-68h]
  _QWORD v14[5]; // [rsp+48h] [rbp-60h] BYREF

  v14[4] = a4;
  v8 = std::wstring::wstring(v14, a4);
  Spectre::Engine::Scene::GetRootNode(a1, &v12, v8);
  v9 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
         &v11,
         &v12);
  Spectre::Engine::Scene::AddNode(a1, a2, a3, v9);
  if ( v13 )
    std::_Ref_count_base::_Decref(v13);
  std::wstring::_Tidy_deallocate(a4);
  return a2;
}
