/*
 * XREFs of ?Create@ImageProcessingManager@Engine@Spectre@@QEAAXPEAVRenderDevice@23@@Z @ 0x180072750
 * Callers:
 *     ?Initialize@RenderOutput@Engine@Spectre@@UEAAXXZ @ 0x18002C3E0 (-Initialize@RenderOutput@Engine@Spectre@@UEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ??4?$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180011020 (--4-$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x180011B24 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     ?shared_from_this@?$enable_shared_from_this@VScene@Engine@Spectre@@@std@@QEAA?AV?$shared_ptr@VScene@Engine@Spectre@@@2@XZ @ 0x180011D4C (-shared_from_this@-$enable_shared_from_this@VScene@Engine@Spectre@@@std@@QEAA-AV-$shared_ptr@VSc.c)
 *     ??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@AEBV01@@Z @ 0x180012440 (--0-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@AEBV01@@Z.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ??$AddComponent@VMeshInstance@Engine@Spectre@@@SceneNode@Engine@Spectre@@QEAA?AV?$shared_ptr@VMeshInstance@Engine@Spectre@@@std@@XZ @ 0x180013D44 (--$AddComponent@VMeshInstance@Engine@Spectre@@@SceneNode@Engine@Spectre@@QEAA-AV-$shared_ptr@VMe.c)
 *     ??$GetComponent@VMeshInstance@Engine@Spectre@@@SceneNode@Engine@Spectre@@QEBA?AV?$shared_ptr@VMeshInstance@Engine@Spectre@@@std@@XZ @ 0x180013E78 (--$GetComponent@VMeshInstance@Engine@Spectre@@@SceneNode@Engine@Spectre@@QEBA-AV-$shared_ptr@VMe.c)
 *     ?SetMesh@MeshInstance@Engine@Spectre@@QEAAXV?$shared_ptr@VMesh@Engine@Spectre@@@std@@@Z @ 0x180014620 (-SetMesh@MeshInstance@Engine@Spectre@@QEAAXV-$shared_ptr@VMesh@Engine@Spectre@@@std@@@Z.c)
 *     ??$CreateResource@VSampler@Engine@Spectre@@$$V@Engine@0Spectre@@QEAA?AV?$shared_ptr@VSampler@Engine@Spectre@@@std@@XZ @ 0x1800161AC (--$CreateResource@VSampler@Engine@Spectre@@$$V@Engine@0Spectre@@QEAA-AV-$shared_ptr_ea_1800161AC.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@AEBV01@@Z @ 0x180017648 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?GetEngine@RenderDevice@Engine@Spectre@@QEBAPEAV223@XZ @ 0x180026598 (-GetEngine@RenderDevice@Engine@Spectre@@QEBAPEAV223@XZ.c)
 *     ?SetName@RendererResource@Engine@Spectre@@QEAAXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x1800297A4 (-SetName@RendererResource@Engine@Spectre@@QEAAXV-$basic_string@DU-$char_traits@D@std@@V-$allocat.c)
 *     ?AddDependentLock@Lockable@Engine@Spectre@@SAXV?$shared_ptr@VLockable@Engine@Spectre@@@std@@V?$weak_ptr@VLockable@Engine@Spectre@@@5@@Z @ 0x180029F64 (-AddDependentLock@Lockable@Engine@Spectre@@SAXV-$shared_ptr@VLockable@Engine@Spectre@@@std@@V-$w.c)
 *     ?GetConfiguration@Engine@1Spectre@@QEBAAEAVIConfigurationManager@Utils@2@H@Z @ 0x180034014 (-GetConfiguration@Engine@1Spectre@@QEBAAEAVIConfigurationManager@Utils@2@H@Z.c)
 *     ?GetShaderManager@Engine@1Spectre@@QEBAAEAVShaderManager@12@XZ @ 0x1800347F0 (-GetShaderManager@Engine@1Spectre@@QEBAAEAVShaderManager@12@XZ.c)
 *     ??4?$shared_ptr@$$CBVSceneNode@Engine@Spectre@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18003B558 (--4-$shared_ptr@$$CBVSceneNode@Engine@Spectre@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?GenerateUniqueID@SceneNode@Engine@Spectre@@SA_KAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x18003BF14 (-GenerateUniqueID@SceneNode@Engine@Spectre@@SA_KAEBV-$basic_string@DU-$char_traits@D@std@@V-$all.c)
 *     ?AddNode@Scene@Engine@Spectre@@QEAA?AV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@_KV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@5@@Z @ 0x18004049C (-AddNode@Scene@Engine@Spectre@@QEAA-AV-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@_KV-$basic_s.c)
 *     ?CreateInstance@Scene@Engine@Spectre@@SA?AV?$shared_ptr@VScene@Engine@Spectre@@@std@@PEAV223@W4ThreadingMode@Lockable@23@@Z @ 0x180040828 (-CreateInstance@Scene@Engine@Spectre@@SA-AV-$shared_ptr@VScene@Engine@Spectre@@@std@@PEAV223@W4T.c)
 *     ?GetRootNode@Scene@Engine@Spectre@@QEBA?AV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@5@@Z @ 0x18004126C (-GetRootNode@Scene@Engine@Spectre@@QEBA-AV-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@V-$basic.c)
 *     ?SetOption@Material@Engine@Spectre@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z @ 0x180044658 (-SetOption@Material@Engine@Spectre@@QEAAXAEBV-$basic_string@DU-$char_traits@D@std@@V-$allocator@.c)
 *     ?SetMaterial@MeshInstance@Engine@Spectre@@QEAAXV?$shared_ptr@VMaterial@Engine@Spectre@@@std@@@Z @ 0x18004C98C (-SetMaterial@MeshInstance@Engine@Spectre@@QEAAXV-$shared_ptr@VMaterial@Engine@Spectre@@@std@@@Z.c)
 *     ?GetShaderFamily@ShaderManager@Engine@Spectre@@QEAA?AV?$shared_ptr@VShaderFamily@Engine@Spectre@@@std@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@5@@Z @ 0x180050224 (-GetShaderFamily@ShaderManager@Engine@Spectre@@QEAA-AV-$shared_ptr@VShaderFamily@Engine@Spectre@.c)
 *     ?CreateSampler@Sampler@Engine@Spectre@@UEAAXAEBUSamplerStateDesc@23@PEAVRenderDevice@23@@Z @ 0x1800548D0 (-CreateSampler@Sampler@Engine@Spectre@@UEAAXAEBUSamplerStateDesc@23@PEAVRenderDevice@23@@Z.c)
 *     ?AddLayer@Camera@Engine@Spectre@@QEAAXAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z @ 0x180059DAC (-AddLayer@Camera@Engine@Spectre@@QEAAXAEBV-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_.c)
 *     ?CreateMaterial@ShaderFamily@Engine@Spectre@@QEAA?AV?$shared_ptr@VMaterial@Engine@Spectre@@@std@@XZ @ 0x1800600C8 (-CreateMaterial@ShaderFamily@Engine@Spectre@@QEAA-AV-$shared_ptr@VMaterial@Engine@Spectre@@@std@.c)
 *     ?GetProperties@ShaderFamily@Engine@Spectre@@QEAA?AV?$shared_ptr@VShaderPropertyBlock@Engine@Spectre@@@std@@XZ @ 0x180060C2C (-GetProperties@ShaderFamily@Engine@Spectre@@QEAA-AV-$shared_ptr@VShaderPropertyBloc_ea_180060C2C.c)
 *     ??$AddComponent@VImageProcessingCamera@Engine@Spectre@@@SceneNode@Engine@Spectre@@QEAA?AV?$shared_ptr@VImageProcessingCamera@Engine@Spectre@@@std@@XZ @ 0x180070F94 (--$AddComponent@VImageProcessingCamera@Engine@Spectre@@@SceneNode@Engine@Spectre@@QEAA-AV-$share.c)
 *     ?CreateFullscreenQuad@MeshHelper@Engine@Spectre@@SA?AV?$shared_ptr@VMesh@Engine@Spectre@@@std@@PEAV223@@Z @ 0x18008CD80 (-CreateFullscreenQuad@MeshHelper@Engine@Spectre@@SA-AV-$shared_ptr@VMesh@Engine@Spectre@@@std@@P.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
void __fastcall Spectre::Engine::ImageProcessingManager::Create(
        Spectre::Engine::ImageProcessingManager *this,
        struct Spectre::Engine::RenderDevice *a2)
{
  Spectre::Engine::Engine *Engine; // r12
  __int64 *Instance; // rax
  __int64 *v6; // r14
  __int64 v7; // rdx
  _QWORD *v8; // rax
  __int64 v9; // rdi
  _QWORD *v10; // rbx
  __int64 UniqueID; // rax
  __int64 *v12; // rax
  __int64 *v13; // rbx
  struct Spectre::Engine::Engine *v14; // rax
  __int64 *v15; // rax
  Spectre::Engine::Sampler **v16; // rdi
  Spectre::Engine::Sampler *v17; // rbx
  void **v18; // rax
  struct Spectre::Engine::ShaderManager *ShaderManager; // rbx
  _QWORD *v20; // rax
  __int64 *ShaderFamily; // rax
  __int64 *v22; // rbx
  __int64 *Properties; // rax
  __int64 *v24; // rax
  Spectre::Engine::Engine *v25; // rax
  struct Spectre::Utils::IConfigurationManager *Configuration; // rax
  __int64 *FullscreenQuad; // rax
  __int64 v28; // rbx
  _QWORD *v29; // rax
  __int64 v30; // rbx
  __int64 *v31; // rax
  _QWORD *v32; // rax
  _QWORD *v33; // rax
  __int128 *v34; // [rsp+28h] [rbp-D8h] BYREF
  std::_Ref_count_base *v35; // [rsp+30h] [rbp-D0h]
  __int128 v36; // [rsp+38h] [rbp-C8h] BYREF
  Spectre::Engine::SceneNode *v37; // [rsp+48h] [rbp-B8h] BYREF
  std::_Ref_count_base *v38; // [rsp+50h] [rbp-B0h]
  _QWORD v39[2]; // [rsp+58h] [rbp-A8h] BYREF
  Spectre::Engine::SceneNode *v40; // [rsp+68h] [rbp-98h] BYREF
  std::_Ref_count_base *v41; // [rsp+70h] [rbp-90h]
  _DWORD v42[7]; // [rsp+78h] [rbp-88h] BYREF
  __int128 v43; // [rsp+94h] [rbp-6Ch]
  int v44; // [rsp+A4h] [rbp-5Ch]
  float v45; // [rsp+A8h] [rbp-58h]
  __int64 v46; // [rsp+B0h] [rbp-50h] BYREF
  std::_Ref_count_base *v47; // [rsp+B8h] [rbp-48h]
  __int64 v48; // [rsp+C0h] [rbp-40h] BYREF
  std::_Ref_count_base *v49; // [rsp+C8h] [rbp-38h]
  __int64 v50; // [rsp+D0h] [rbp-30h] BYREF
  std::_Ref_count_base *v51; // [rsp+D8h] [rbp-28h]
  __int64 v52; // [rsp+E0h] [rbp-20h] BYREF
  std::_Ref_count_base *v53; // [rsp+E8h] [rbp-18h]
  __int64 v54; // [rsp+F0h] [rbp-10h] BYREF
  std::_Ref_count_base *v55; // [rsp+F8h] [rbp-8h]
  __int64 v56; // [rsp+100h] [rbp+0h] BYREF
  std::_Ref_count_base *v57; // [rsp+108h] [rbp+8h]
  _BYTE v58[8]; // [rsp+110h] [rbp+10h] BYREF
  std::_Ref_count_base *v59; // [rsp+118h] [rbp+18h]
  __int64 v60; // [rsp+120h] [rbp+20h] BYREF
  std::_Ref_count_base *v61; // [rsp+128h] [rbp+28h]
  __int64 v62; // [rsp+130h] [rbp+30h] BYREF
  __int64 v63; // [rsp+140h] [rbp+40h] BYREF
  _QWORD v64[4]; // [rsp+150h] [rbp+50h] BYREF
  _QWORD v65[4]; // [rsp+170h] [rbp+70h] BYREF
  _QWORD v66[4]; // [rsp+190h] [rbp+90h] BYREF
  _QWORD v67[4]; // [rsp+1B0h] [rbp+B0h] BYREF
  _QWORD v68[4]; // [rsp+1D0h] [rbp+D0h] BYREF

  *((_QWORD *)this + 4) = a2;
  Engine = Spectre::Engine::RenderDevice::GetEngine(a2);
  Instance = (__int64 *)Spectre::Engine::Scene::CreateInstance((__int64 **)&v37, (__int64)Engine);
  v6 = (__int64 *)((char *)this + 288);
  std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=((_QWORD *)this + 36, Instance);
  if ( v38 )
    std::_Ref_count_base::_Decref(v38);
  v34 = &v36;
  v36 = 0LL;
  v7 = *((_QWORD *)this + 37);
  if ( v7 )
  {
    *(_QWORD *)&v36 = (*v6 + 16) & -(__int64)(*v6 != 0);
    *((_QWORD *)&v36 + 1) = v7;
    _InterlockedIncrement((volatile signed __int32 *)(v7 + 12));
  }
  v8 = (_QWORD *)std::enable_shared_from_this<Spectre::Engine::Scene>::shared_from_this(
                   *((_QWORD *)this + 4) + 8LL,
                   &v46);
  v39[0] = (*v8 + 24LL) & -(__int64)(*v8 != 0LL);
  v39[1] = v8[1];
  *v8 = 0LL;
  v8[1] = 0LL;
  Spectre::Engine::Lockable::AddDependentLock((__int64)v39, (__int64)&v36);
  if ( v47 )
    std::_Ref_count_base::_Decref(v47);
  v9 = *v6;
  v10 = std::wstring::wstring(v64, (__int64)&Spectre::Engine::SceneLayerStandardID::kCameras);
  std::string::string(v68, (__int64)"ImageProcessingCamera");
  UniqueID = Spectre::Engine::SceneNode::GenerateUniqueID(v68);
  Spectre::Engine::Scene::AddNode(v9, (__int64)&v37, UniqueID, (__int64)v10);
  std::string::_Tidy_deallocate((__int64)v68);
  v12 = Spectre::Engine::SceneNode::AddComponent<Spectre::Engine::ImageProcessingCamera>(v37, &v48);
  v13 = (__int64 *)((char *)this + 272);
  std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=((_QWORD *)this + 34, v12);
  if ( v49 )
    std::_Ref_count_base::_Decref(v49);
  Spectre::Engine::Camera::AddLayer(*v13, (__int64)&Spectre::Engine::SceneLayerStandardID::kImageProcessing);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)*v13 + 16LL))(*v13);
  v14 = Spectre::Engine::RenderDevice::GetEngine(a2);
  v15 = Spectre::Engine::Engine::CreateResource<Spectre::Engine::Sampler,>((__int64)v14, &v50);
  v16 = (Spectre::Engine::Sampler **)((char *)this + 304);
  std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=((_QWORD *)this + 38, v15);
  if ( v51 )
    std::_Ref_count_base::_Decref(v51);
  v17 = *v16;
  v18 = (void **)std::string::string(v65, (__int64)"Image Processing Manager Sampler");
  Spectre::Engine::RendererResource::SetName((__int64)v17, v18);
  v42[1] = 0;
  v42[2] = 0;
  v42[3] = 0;
  v42[4] = 0;
  v42[5] = 1;
  v42[6] = 7;
  v44 = 0;
  v45 = FLOAT_3_4028235e38;
  v42[0] = 2;
  v43 = 0LL;
  Spectre::Engine::Sampler::CreateSampler(*v16, (const struct Spectre::Engine::SamplerStateDesc *)v42, 0LL);
  ShaderManager = Spectre::Engine::Engine::GetShaderManager(Engine);
  v20 = std::string::string(v66, (__int64)&Spectre::Engine::ImageProcessingShaderExtension::kShaderFamilyName);
  ShaderFamily = Spectre::Engine::ShaderManager::GetShaderFamily((__int64)ShaderManager, &v52, v20);
  v22 = (__int64 *)((char *)this + 432);
  std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=((_QWORD *)this + 54, ShaderFamily);
  if ( v53 )
    std::_Ref_count_base::_Decref(v53);
  Properties = (__int64 *)Spectre::Engine::ShaderFamily::GetProperties(*v22, &v54);
  std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=((_QWORD *)this + 52, Properties);
  if ( v55 )
    std::_Ref_count_base::_Decref(v55);
  v24 = Spectre::Engine::ShaderFamily::CreateMaterial(*v22, &v56);
  std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=((_QWORD *)this + 50, v24);
  if ( v57 )
    std::_Ref_count_base::_Decref(v57);
  v25 = Spectre::Engine::RenderDevice::GetEngine(a2);
  Configuration = Spectre::Engine::Engine::GetConfiguration(v25, 1);
  *((_DWORD *)this + 112) = (*(__int64 (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, _QWORD))(*(_QWORD *)Configuration + 72LL))(
                              Configuration,
                              &Spectre::Engine::ConfigurationProperties::kImageProcessing_DisplayBlendMode,
                              0LL);
  Spectre::Engine::Material::SetOption(
    *((_QWORD *)this + 50),
    (__int64)&Spectre::Engine::ImageProcessingShaderExtension::kOption_CameraEffects,
    1);
  FullscreenQuad = (__int64 *)Spectre::Engine::MeshHelper::CreateFullscreenQuad(v58, Engine);
  std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=((_QWORD *)this + 40, FullscreenQuad);
  if ( v59 )
    std::_Ref_count_base::_Decref(v59);
  v28 = *v6;
  v29 = std::wstring::wstring(v67, (__int64)&Spectre::Engine::SceneLayerStandardID::kImageProcessing);
  Spectre::Engine::Scene::GetRootNode(v28, (__int64)&v40, v29);
  Spectre::Engine::SceneNode::GetComponent<Spectre::Engine::MeshInstance>(v40, &v34);
  v30 = (__int64)v34;
  if ( !v34 )
  {
    v31 = Spectre::Engine::SceneNode::AddComponent<Spectre::Engine::MeshInstance>(v40, &v60);
    std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=(&v34, v31);
    if ( v61 )
      std::_Ref_count_base::_Decref(v61);
    v30 = (__int64)v34;
  }
  v32 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
          &v62,
          (_QWORD *)this + 40);
  Spectre::Engine::MeshInstance::SetMesh(v30, v32);
  v33 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
          &v63,
          (_QWORD *)this + 46);
  Spectre::Engine::MeshInstance::SetMaterial(v30, v33);
  *(_BYTE *)(v30 + 72) = 0;
  std::shared_ptr<Spectre::Engine::SceneNode const>::operator=((_QWORD *)this + 42, &v34);
  if ( v35 )
    std::_Ref_count_base::_Decref(v35);
  if ( v41 )
    std::_Ref_count_base::_Decref(v41);
  if ( v38 )
    std::_Ref_count_base::_Decref(v38);
}
