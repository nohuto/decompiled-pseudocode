/*
 * XREFs of ?FindClone@Scene@Engine@Spectre@@QEBA?AV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@V?$shared_ptr@VScene@Engine@Spectre@@@5@V45@@Z @ 0x1800669E0
 * Callers:
 *     ??$FindClone@VAimer@Engine@Spectre@@@Scene@Engine@Spectre@@QEBA?AV?$shared_ptr@VAimer@Engine@Spectre@@@std@@V?$shared_ptr@VScene@Engine@Spectre@@@4@V?$shared_ptr@VComponent@Engine@Spectre@@@4@@Z @ 0x180061E70 (--$FindClone@VAimer@Engine@Spectre@@@Scene@Engine@Spectre@@QEBA-AV-$shared_ptr@VAimer@Engine@Spe.c)
 *     ??$FindClone@VColorTransform@Engine@Spectre@@@Scene@Engine@Spectre@@QEBA?AV?$shared_ptr@VColorTransform@Engine@Spectre@@@std@@V?$shared_ptr@VScene@Engine@Spectre@@@4@V?$shared_ptr@VComponent@Engine@Spectre@@@4@@Z @ 0x180061FA8 (--$FindClone@VColorTransform@Engine@Spectre@@@Scene@Engine@Spectre@@QEBA-AV-$shared_ptr@VColorTr.c)
 *     ??$FindClone@VLight@Engine@Spectre@@@Scene@Engine@Spectre@@QEBA?AV?$shared_ptr@VLight@Engine@Spectre@@@std@@V?$shared_ptr@VScene@Engine@Spectre@@@4@V?$shared_ptr@VComponent@Engine@Spectre@@@4@@Z @ 0x1800620E0 (--$FindClone@VLight@Engine@Spectre@@@Scene@Engine@Spectre@@QEBA-AV-$shared_ptr@VLight@Engine@Spe.c)
 *     ??$FindClone@VLightProbe@Engine@Spectre@@@Scene@Engine@Spectre@@QEBA?AV?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@V?$shared_ptr@VScene@Engine@Spectre@@@4@V?$shared_ptr@VComponent@Engine@Spectre@@@4@@Z @ 0x180062218 (--$FindClone@VLightProbe@Engine@Spectre@@@Scene@Engine@Spectre@@QEBA-AV-$shared_ptr@VLightProbe@.c)
 *     ??$FindClone@VShadowMapCamera@Engine@Spectre@@@Scene@Engine@Spectre@@QEBA?AV?$shared_ptr@VShadowMapCamera@Engine@Spectre@@@std@@V?$shared_ptr@VScene@Engine@Spectre@@@4@V?$shared_ptr@VComponent@Engine@Spectre@@@4@@Z @ 0x180062350 (--$FindClone@VShadowMapCamera@Engine@Spectre@@@Scene@Engine@Spectre@@QEBA-AV-$shared_ptr@VShadow.c)
 *     ??$FindClone@VViewerCamera@Engine@Spectre@@@Scene@Engine@Spectre@@QEBA?AV?$shared_ptr@VViewerCamera@Engine@Spectre@@@std@@V?$shared_ptr@VScene@Engine@Spectre@@@4@V?$shared_ptr@VComponent@Engine@Spectre@@@4@@Z @ 0x180062488 (--$FindClone@VViewerCamera@Engine@Spectre@@@Scene@Engine@Spectre@@QEBA-AV-$shared_ptr@VViewerCam.c)
 *     ?Clone@ViewerSceneData@ViewerEngine@Engine@Spectre@@UEAA?AV?$shared_ptr@USceneCustomData@Engine@Spectre@@@std@@AEBVScene@34@AEAV734@@Z @ 0x1800657E0 (-Clone@ViewerSceneData@ViewerEngine@Engine@Spectre@@UEAA-AV-$shared_ptr@USceneCustomData@Engine@.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@AEBV01@@Z @ 0x180012440 (--0-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@AEBV01@@Z.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEAAXXZ @ 0x180013348 (-_Tidy_deallocate@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@AEAAXXZ.c)
 *     ?VerifyReadAccess@Lockable@Engine@Spectre@@QEBAXXZ @ 0x18002A2FC (-VerifyReadAccess@Lockable@Engine@Spectre@@QEBAXXZ.c)
 *     ?FindNode@Scene@Engine@Spectre@@QEAA?AV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@5@_K@Z @ 0x180040D6C (-FindNode@Scene@Engine@Spectre@@QEAA-AV-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@V-$basic_st.c)
 *     ?GetNodeLayerID@Scene@Engine@Spectre@@QEBA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$shared_ptr@VSceneNode@Engine@Spectre@@@5@@Z @ 0x1800411F4 (-GetNodeLayerID@Scene@Engine@Spectre@@QEBA-AV-$basic_string@_WU-$char_traits@_W@std@@V-$allocato.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Spectre::Engine::Scene::FindClone(__int64 a1, __int64 a2, __int64 *a3, _QWORD *a4)
{
  _QWORD *v8; // rax
  __int64 v9; // rdi
  _QWORD *v10; // rax
  std::_Ref_count_base *v11; // rcx
  std::_Ref_count_base *v12; // rcx
  __int64 v14; // [rsp+40h] [rbp-88h] BYREF
  _QWORD v15[4]; // [rsp+50h] [rbp-78h] BYREF
  _QWORD v16[4]; // [rsp+70h] [rbp-58h] BYREF

  Spectre::Engine::Lockable::VerifyReadAccess((Spectre::Engine::Lockable *)(a1 + 16));
  v8 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
         &v14,
         a4);
  Spectre::Engine::Scene::GetNodeLayerID(a1, v16, v8);
  v9 = *a3;
  v10 = std::wstring::wstring(v15, (__int64)v16);
  Spectre::Engine::Scene::FindNode(v9, a2, (__int64)v10);
  std::wstring::_Tidy_deallocate((__int64)v16);
  v11 = (std::_Ref_count_base *)a3[1];
  if ( v11 )
    std::_Ref_count_base::_Decref(v11);
  v12 = (std::_Ref_count_base *)a4[1];
  if ( v12 )
    std::_Ref_count_base::_Decref(v12);
  return a2;
}
