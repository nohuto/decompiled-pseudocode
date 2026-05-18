/*
 * XREFs of ?UpdateGeneralSettings@ViewerEngine@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@@Z @ 0x18006A614
 * Callers:
 *     ?PreUpdateScene@ViewerEngine@Engine@Spectre@@MEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@@Z @ 0x180067850 (-PreUpdateScene@ViewerEngine@Engine@Spectre@@MEAAXAEBV-$shared_ptr@VScene@Engine@Spectre@@@std@@.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x180010574 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@AEBV01@@Z @ 0x180012440 (--0-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@AEBV01@@Z.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ??$?0VScene@Engine@Spectre@@$0A@@?$weak_ptr@VScene@Engine@Spectre@@@std@@QEAA@AEBV?$shared_ptr@VScene@Engine@Spectre@@@1@@Z @ 0x180015604 (--$-0VScene@Engine@Spectre@@$0A@@-$weak_ptr@VScene@Engine@Spectre@@@std@@QEAA@AEBV-$shared_ptr@V.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@AEBV01@@Z @ 0x180017648 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@AEBV01@@Z.c)
 *     ??$_Find@V?$weak_ptr@VScene@Engine@Spectre@@@std@@@?$_Tree@V?$_Tmap_traits@V?$weak_ptr@VScene@Engine@Spectre@@@std@@V?$vector@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@@2@@2@U?$owner_less@V?$weak_ptr@VScene@Engine@Spectre@@@std@@@2@V?$allocator@U?$pair@$$CBV?$weak_ptr@VScene@Engine@Spectre@@@std@@V?$vector@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@@2@@2@@std@@@2@$0A@@std@@@std@@AEBAPEAU?$_Tree_node@U?$pair@$$CBV?$weak_ptr@VScene@Engine@Spectre@@@std@@V?$vector@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@@2@@2@@std@@PEAX@1@AEBV?$weak_ptr@VScene@Engine@Spectre@@@1@@Z @ 0x18002EADC (--$_Find@V-$weak_ptr@VScene@Engine@Spectre@@@std@@@-$_Tree@V-$_Tmap_traits@V-$weak_ptr@VScene@En.c)
 *     ?GetCamera@Engine@1Spectre@@QEBA?AV?$shared_ptr@VCamera@Engine@Spectre@@@std@@_KV?$shared_ptr@VScene@Engine@Spectre@@@4@@Z @ 0x180033E34 (-GetCamera@Engine@1Spectre@@QEBA-AV-$shared_ptr@VCamera@Engine@Spectre@@@std@@_KV-$shared_ptr@VS.c)
 *     ?GetConfiguration@Engine@1Spectre@@QEBAAEAVIConfigurationManager@Utils@2@H@Z @ 0x180034014 (-GetConfiguration@Engine@1Spectre@@QEBAAEAVIConfigurationManager@Utils@2@H@Z.c)
 *     ?GetLayer@Scene@Engine@Spectre@@QEBA?AV?$shared_ptr@VSceneLayer@Engine@Spectre@@@std@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@5@@Z @ 0x180041040 (-GetLayer@Scene@Engine@Spectre@@QEBA-AV-$shared_ptr@VSceneLayer@Engine@Spectre@@@std@@V-$basic_s.c)
 *     ?SetVisible@SceneLayer@Engine@Spectre@@QEAAX_N@Z @ 0x1800420A4 (-SetVisible@SceneLayer@Engine@Spectre@@QEAAX_N@Z.c)
 *     ?SetGlobalMaterialEnabled@MeshInstance@Engine@Spectre@@SAX_K_N@Z @ 0x18004C960 (-SetGlobalMaterialEnabled@MeshInstance@Engine@Spectre@@SAX_K_N@Z.c)
 *     ?SetDepthBufferReadable@Camera@Engine@Spectre@@QEAAXW4ShaderAccessMode@DeviceDepthBuffer@23@HV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@11@Z @ 0x18005D098 (-SetDepthBufferReadable@Camera@Engine@Spectre@@QEAAXW4ShaderAccessMode@DeviceDepthBuffer@23@HV-$.c)
 *     ?SetDepthPrePass@Camera@Engine@Spectre@@QEAAXH@Z @ 0x18005D150 (-SetDepthPrePass@Camera@Engine@Spectre@@QEAAXH@Z.c)
 *     ?SetOption@Camera@Engine@Spectre@@QEAAXW4EOption@123@_N@Z @ 0x18005D298 (-SetOption@Camera@Engine@Spectre@@QEAAXW4EOption@123@_N@Z.c)
 *     ?SetRenderPassEnabled@Camera@Engine@Spectre@@QEAAXH_N@Z @ 0x18005D30C (-SetRenderPassEnabled@Camera@Engine@Spectre@@QEAAXH_N@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall Spectre::Engine::ViewerEngine::UpdateGeneralSettings(Spectre::Engine::Engine *a1, __int64 *a2)
{
  __int64 v3; // rbx
  struct Spectre::Utils::IConfigurationManager *Configuration; // r15
  _QWORD *v5; // rax
  __int64 v6; // r8
  Spectre::Engine::Camera *v7; // r13
  __int64 v8; // r8
  char v9; // r14
  void **v10; // rdi
  void **v11; // rbx
  void **v12; // rax
  __int64 v13; // r8
  __int64 v14; // r8
  char v15; // al
  __int64 v16; // r8
  char v17; // al
  __int64 v18; // r8
  char v19; // al
  __int64 v20; // r8
  char v21; // al
  __int64 v22; // r8
  char v23; // al
  char v24; // al
  __int64 v25; // r8
  __int64 v26; // rbx
  __int64 v27; // r8
  __int64 *v28; // rdi
  __int64 v29; // rdi
  char v30; // al
  __int64 v31; // rdi
  char v32; // al
  __int64 v33; // rdi
  char v34; // al
  __int64 v35; // rdi
  char v36; // al
  __int64 v37; // rdi
  char v38; // al
  __int64 v39; // rdi
  char v40; // al
  __int64 v41; // rdi
  char v42; // al
  __int64 v43; // rdi
  char v44; // al
  __int64 v45; // rdi
  char v46; // al
  __int64 v47; // rbx
  char v48; // al
  char v49; // di
  __int64 v50; // r8
  char v51; // si
  __int64 v52; // rbx
  std::_Ref_count_base *v53; // rax
  Spectre::Engine::SceneLayer **Layer; // rax
  __int64 v55; // rbx
  std::_Ref_count_base *v56; // rax
  Spectre::Engine::SceneLayer **v57; // rax
  __int64 v58; // [rsp+30h] [rbp-69h] BYREF
  std::_Ref_count_base *v59; // [rsp+38h] [rbp-61h]
  Spectre::Engine::Camera *v60; // [rsp+50h] [rbp-49h] BYREF
  std::_Ref_count_base *v61; // [rsp+58h] [rbp-41h]
  __int64 v62; // [rsp+60h] [rbp-39h] BYREF
  _QWORD v63[4]; // [rsp+70h] [rbp-29h] BYREF
  _QWORD v64[12]; // [rsp+90h] [rbp-9h] BYREF

  v3 = (__int64)a1;
  Configuration = Spectre::Engine::Engine::GetConfiguration(a1, *(_DWORD *)(*a2 + 112));
  v5 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
         &v62,
         a2);
  Spectre::Engine::Engine::GetCamera(v3, &v60, v6, v5);
  LOBYTE(v3) = (*(__int64 (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, _QWORD))(*(_QWORD *)Configuration + 64LL))(
                 Configuration,
                 &Spectre::Engine::ConfigurationProperties::kRenderer_RenderPasses_DepthPrepass,
                 0LL);
  v7 = v60;
  Spectre::Engine::Camera::SetRenderPassEnabled(v60, 0, v3);
  if ( (_BYTE)v3 )
    Spectre::Engine::Camera::SetDepthPrePass(v7);
  LOBYTE(v8) = 1;
  v9 = (*(__int64 (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, __int64))(*(_QWORD *)Configuration
                                                                                                  + 64LL))(
         Configuration,
         &Spectre::Engine::ConfigurationProperties::kRenderer_RenderPasses_DepthPrepassReadable,
         v8);
  v10 = (void **)std::string::string(&v58, (__int64)&Spectre::Engine::ShaderConstants::kView_PrimaryDepthBufferMatrix);
  v11 = (void **)std::string::string(v63, (__int64)&Spectre::Engine::ShaderConstants::kView_PrimaryStencilBufferTexture);
  v12 = (void **)std::string::string(v64, (__int64)&Spectre::Engine::ShaderConstants::kView_PrimaryDepthBufferTexture);
  Spectre::Engine::Camera::SetDepthBufferReadable((__int64)v7, v9 != 0, v13, v12, v11, v10);
  Spectre::Engine::Camera::SetOption((__int64)v7, 1, v9);
  LOBYTE(v14) = 1;
  v15 = (*(__int64 (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, __int64))(*(_QWORD *)Configuration + 64LL))(
          Configuration,
          &Spectre::Engine::ConfigurationProperties::kRenderer_RenderPasses_Opaque,
          v14);
  Spectre::Engine::Camera::SetRenderPassEnabled(v7, 1, v15);
  LOBYTE(v16) = 1;
  v17 = (*(__int64 (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, __int64))(*(_QWORD *)Configuration + 64LL))(
          Configuration,
          &Spectre::Engine::ConfigurationProperties::kRenderer_RenderPasses_OpaqueMasked,
          v16);
  Spectre::Engine::Camera::SetRenderPassEnabled(v7, 2, v17);
  LOBYTE(v18) = 1;
  v19 = (*(__int64 (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, __int64))(*(_QWORD *)Configuration + 64LL))(
          Configuration,
          &Spectre::Engine::ConfigurationProperties::kRenderer_RenderPasses_Transparent,
          v18);
  Spectre::Engine::Camera::SetRenderPassEnabled(v7, 3, v19);
  LOBYTE(v20) = 1;
  v21 = (*(__int64 (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, __int64))(*(_QWORD *)Configuration + 64LL))(
          Configuration,
          &Spectre::Engine::ConfigurationProperties::kRenderer_MaterialPrimary,
          v20);
  Spectre::Engine::MeshInstance::SetGlobalMaterialEnabled(0LL, v21);
  LOBYTE(v22) = 1;
  v23 = (*(__int64 (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, __int64))(*(_QWORD *)Configuration + 64LL))(
          Configuration,
          &Spectre::Engine::ConfigurationProperties::kRenderer_MaterialSecondary,
          v22);
  Spectre::Engine::MeshInstance::SetGlobalMaterialEnabled(1uLL, v23);
  v24 = (*(__int64 (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, _QWORD))(*(_QWORD *)Configuration
                                                                                                  + 64LL))(
          Configuration,
          &Spectre::Engine::ConfigurationProperties::kGpuProfiling_DisplaySceneTimings,
          0LL);
  Spectre::Engine::Camera::SetOption((__int64)v7, 0x4000000, v24);
  std::weak_ptr<Spectre::Engine::Scene>::weak_ptr<Spectre::Engine::Scene>(&v58, a2);
  v26 = std::_Tree<std::_Tmap_traits<std::weak_ptr<Spectre::Engine::Scene>,std::vector<std::shared_ptr<Spectre::Engine::Camera>>,std::owner_less<std::weak_ptr<Spectre::Engine::Scene>>,std::allocator<std::pair<std::weak_ptr<Spectre::Engine::Scene> const,std::vector<std::shared_ptr<Spectre::Engine::Camera>>>>,0>>::_Find<std::weak_ptr<Spectre::Engine::Scene>>(
          v25 + 728,
          (__int64)&v58);
  if ( v59 )
    std::_Ref_count_base::_Decwref(v59);
  v28 = *(__int64 **)(v26 + 48);
  if ( v28 != *(__int64 **)(v26 + 56) )
  {
    v29 = *v28;
    v30 = (*(__int64 (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, _QWORD))(*(_QWORD *)Configuration + 64LL))(
            Configuration,
            &Spectre::Engine::ConfigurationProperties::kRenderer_DisplaySymbols,
            0LL);
    Spectre::Engine::Camera::SetOption(v29, 0x10000, v30);
    v31 = **(_QWORD **)(v26 + 48);
    v32 = (*(__int64 (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, _QWORD))(*(_QWORD *)Configuration + 64LL))(
            Configuration,
            &Spectre::Engine::ConfigurationProperties::kRenderer_DisplaySymbolsNode,
            0LL);
    Spectre::Engine::Camera::SetOption(v31, 0x20000, v32);
    v33 = **(_QWORD **)(v26 + 48);
    v34 = (*(__int64 (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, _QWORD))(*(_QWORD *)Configuration + 64LL))(
            Configuration,
            &Spectre::Engine::ConfigurationProperties::kRenderer_DisplaySymbolsNodeTree,
            0LL);
    Spectre::Engine::Camera::SetOption(v33, 0x40000, v34);
    v35 = **(_QWORD **)(v26 + 48);
    v36 = (*(__int64 (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, _QWORD))(*(_QWORD *)Configuration + 64LL))(
            Configuration,
            &Spectre::Engine::ConfigurationProperties::kRenderer_DisplaySymbolsNodeScale,
            0LL);
    Spectre::Engine::Camera::SetOption(v35, 0x80000, v36);
    v37 = **(_QWORD **)(v26 + 48);
    v38 = (*(__int64 (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, _QWORD))(*(_QWORD *)Configuration + 64LL))(
            Configuration,
            &Spectre::Engine::ConfigurationProperties::kRenderer_DisplaySymbolsCamera,
            0LL);
    Spectre::Engine::Camera::SetOption(v37, 0x100000, v38);
    v39 = **(_QWORD **)(v26 + 48);
    v40 = (*(__int64 (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, _QWORD))(*(_QWORD *)Configuration + 64LL))(
            Configuration,
            &Spectre::Engine::ConfigurationProperties::kRenderer_DisplaySymbolsLight,
            0LL);
    Spectre::Engine::Camera::SetOption(v39, 0x200000, v40);
    v41 = **(_QWORD **)(v26 + 48);
    v42 = (*(__int64 (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, _QWORD))(*(_QWORD *)Configuration + 64LL))(
            Configuration,
            &Spectre::Engine::ConfigurationProperties::kRenderer_DisplaySymbolsBound,
            0LL);
    Spectre::Engine::Camera::SetOption(v41, 0x400000, v42);
    v43 = **(_QWORD **)(v26 + 48);
    v44 = (*(__int64 (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, _QWORD))(*(_QWORD *)Configuration + 64LL))(
            Configuration,
            &Spectre::Engine::ConfigurationProperties::kRenderer_DisplaySymbolsMesh,
            0LL);
    Spectre::Engine::Camera::SetOption(v43, 0x800000, v44);
    v45 = **(_QWORD **)(v26 + 48);
    v46 = (*(__int64 (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, _QWORD))(*(_QWORD *)Configuration + 64LL))(
            Configuration,
            &Spectre::Engine::ConfigurationProperties::kRenderer_DisplaySymbolsSkeleton,
            0LL);
    Spectre::Engine::Camera::SetOption(v45, 0x10000000, v46);
    v47 = **(_QWORD **)(v26 + 48);
    v48 = (*(__int64 (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, _QWORD))(*(_QWORD *)Configuration + 64LL))(
            Configuration,
            &Spectre::Engine::ConfigurationProperties::kRenderer_DisplaySymbolsAnimBBox,
            0LL);
    Spectre::Engine::Camera::SetOption(v47, 0x20000000, v48);
  }
  LOBYTE(v27) = 1;
  v49 = (*(__int64 (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, __int64))(*(_QWORD *)Configuration + 64LL))(
          Configuration,
          &Spectre::Engine::ConfigurationProperties::kRenderer_LayerBackground,
          v27);
  LOBYTE(v50) = 1;
  v51 = (*(__int64 (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, __int64))(*(_QWORD *)Configuration + 64LL))(
          Configuration,
          &Spectre::Engine::ConfigurationProperties::kRenderer_LayerForeground,
          v50);
  v52 = *a2;
  v53 = (std::_Ref_count_base *)std::wstring::wstring(v64, (__int64)&Spectre::Engine::SceneLayerStandardID::kBackground);
  Layer = (Spectre::Engine::SceneLayer **)Spectre::Engine::Scene::GetLayer(v52, &v58, v53);
  Spectre::Engine::SceneLayer::SetVisible(*Layer, v49);
  if ( v59 )
    std::_Ref_count_base::_Decref(v59);
  v55 = *a2;
  v56 = (std::_Ref_count_base *)std::wstring::wstring(v64, (__int64)&Spectre::Engine::SceneLayerStandardID::kForeground);
  v57 = (Spectre::Engine::SceneLayer **)Spectre::Engine::Scene::GetLayer(v55, &v58, v56);
  Spectre::Engine::SceneLayer::SetVisible(*v57, v51);
  if ( v59 )
    std::_Ref_count_base::_Decref(v59);
  if ( v61 )
    std::_Ref_count_base::_Decref(v61);
}
