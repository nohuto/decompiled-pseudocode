/*
 * XREFs of ?ApplyImageProcessing@ViewerEngine@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@AEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@5@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@@Z @ 0x180064B30
 * Callers:
 *     ?PostRenderScene@ViewerEngine@Engine@Spectre@@MEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@AEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@5@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@@Z @ 0x180067130 (-PostRenderScene@ViewerEngine@Engine@Spectre@@MEAAXAEBV-$shared_ptr@VScene@Engine@Spectre@@@std@.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$?0VDefaultSceneNodeTraversal@Engine@Spectre@@$0A@@?$shared_ptr@VISceneNodeTraversal@Engine@Spectre@@@std@@QEAA@AEBV?$shared_ptr@VDefaultSceneNodeTraversal@Engine@Spectre@@@1@@Z @ 0x180011DA0 (--$-0VDefaultSceneNodeTraversal@Engine@Spectre@@$0A@@-$shared_ptr@VISceneNodeTraversal@Engine@Sp.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ?GetConfiguration@Engine@1Spectre@@QEBAAEAVIConfigurationManager@Utils@2@H@Z @ 0x180034014 (-GetConfiguration@Engine@1Spectre@@QEBAAEAVIConfigurationManager@Utils@2@H@Z.c)
 *     ??$GetEffect@VImageProcessingEffectBloom@Engine@Spectre@@@ImageProcessingManager@Engine@Spectre@@QEBA?AV?$shared_ptr@VImageProcessingEffectBloom@Engine@Spectre@@@std@@XZ @ 0x1800628EC (--$GetEffect@VImageProcessingEffectBloom@Engine@Spectre@@@ImageProcessingManager@Engine@Spectre@.c)
 *     ??$GetEnum@W4EGeometryDebugDisplayMode@Engine@Spectre@@@IConfigurationManager@Utils@Spectre@@QEAA?AW4EGeometryDebugDisplayMode@Engine@2@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@W4342@@Z @ 0x180062AD4 (--$GetEnum@W4EGeometryDebugDisplayMode@Engine@Spectre@@@IConfigurationManager@Utils@Spectre@@QEA.c)
 *     ??$make_shared@VImageProcessingEffectBloom@Engine@Spectre@@$$V@std@@YA?AV?$shared_ptr@VImageProcessingEffectBloom@Engine@Spectre@@@0@XZ @ 0x180063918 (--$make_shared@VImageProcessingEffectBloom@Engine@Spectre@@$$V@std@@YA-AV-$shared_ptr@VImageProc.c)
 *     ?AddEffect@ImageProcessingManager@Engine@Spectre@@QEAAXV?$shared_ptr@VImageProcessingEffect@Engine@Spectre@@@std@@@Z @ 0x18007210C (-AddEffect@ImageProcessingManager@Engine@Spectre@@QEAAXV-$shared_ptr@VImageProcessingEffect@Engi.c)
 *     ?ProcessScene@ImageProcessingManager@Engine@Spectre@@QEAAXAEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@std@@_N@Z @ 0x1800735A4 (-ProcessScene@ImageProcessingManager@Engine@Spectre@@QEAAXAEBV-$shared_ptr@VIRenderOutput@Engine.c)
 *     ?RemoveEffect@ImageProcessingManager@Engine@Spectre@@QEAAXV?$shared_ptr@VImageProcessingEffect@Engine@Spectre@@@std@@@Z @ 0x180073950 (-RemoveEffect@ImageProcessingManager@Engine@Spectre@@QEAAXV-$shared_ptr@VImageProcessingEffect@E.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall Spectre::Engine::ViewerEngine::ApplyImageProcessing(
        Spectre::Engine::Engine *a1,
        __int64 a2,
        _QWORD *a3,
        _QWORD *a4)
{
  _QWORD *v4; // r15
  struct Spectre::Utils::IConfigurationManager *Configuration; // r14
  std::_Ref_count_base *v7; // rdi
  char v8; // r13
  char v9; // si
  _QWORD *v10; // rax
  __int64 v11; // r8
  int v12; // eax
  unsigned int v13; // r15d
  int v14; // ecx
  __int64 v15; // rbx
  _QWORD *v16; // rax
  std::_Ref_count_base *v17; // rcx
  __int64 *v18; // rax
  std::_Ref_count_base *v19; // rdx
  std::_Ref_count_base *v20; // rcx
  _QWORD *v21; // rax
  __int64 v22; // [rsp+20h] [rbp-30h] BYREF
  std::_Ref_count_base *v23; // [rsp+28h] [rbp-28h]
  __int64 v24; // [rsp+30h] [rbp-20h] BYREF
  std::_Ref_count_base *v25; // [rsp+38h] [rbp-18h]
  __int64 v26; // [rsp+40h] [rbp-10h] BYREF
  std::_Ref_count_base *v27; // [rsp+48h] [rbp-8h]

  v4 = a4;
  Configuration = Spectre::Engine::Engine::GetConfiguration(a1, *(_DWORD *)(*(_QWORD *)a2 + 112LL));
  v7 = 0LL;
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*a3 + 96LL))(*a3, 7LL) )
    v8 = (*(__int64 (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, _QWORD))(*(_QWORD *)Configuration + 64LL))(
           Configuration,
           &Spectre::Engine::ConfigurationProperties::kImageProcessing_Enabled,
           0LL);
  else
    v8 = 0;
  v9 = (*(__int64 (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, _QWORD))(*(_QWORD *)Configuration
                                                                                                 + 64LL))(
         Configuration,
         &Spectre::Engine::ConfigurationProperties::kImageProcessing_BloomEnabled,
         0LL);
  if ( v9
    && (unsigned int)Spectre::Utils::IConfigurationManager::GetEnum<enum Spectre::Engine::EGeometryDebugDisplayMode>((__int64)Configuration) )
  {
    v9 = 0;
  }
  v10 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v4 + 152LL))(*v4);
  std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(&v24, v10);
  Spectre::Engine::ImageProcessingManager::GetEffect<Spectre::Engine::ImageProcessingEffectBloom>(v24, &v22);
  if ( v9 )
  {
    v12 = (*(__int64 (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, _QWORD))(*(_QWORD *)Configuration + 72LL))(
            Configuration,
            &Spectre::Engine::ConfigurationProperties::kImageProcessing_BloomQuality,
            0LL);
    v13 = v12;
    v14 = 2;
    if ( (unsigned int)v12 > 2 )
    {
      if ( v12 < 0 )
        v14 = 0;
      v13 = v14;
    }
    v15 = v22;
    if ( !v22 )
    {
      v7 = v23;
      goto LABEL_20;
    }
    if ( *(_DWORD *)(v22 + 144) == v13 )
    {
      v7 = v23;
    }
    else
    {
      v16 = std::shared_ptr<Spectre::Engine::ISceneNodeTraversal>::shared_ptr<Spectre::Engine::ISceneNodeTraversal>(
              &v26,
              &v22);
      Spectre::Engine::ImageProcessingManager::RemoveEffect(v24, v16);
      v15 = 0LL;
      v22 = 0LL;
      v17 = v23;
      v23 = 0LL;
      if ( !v17 )
        goto LABEL_20;
      std::_Ref_count_base::_Decref(v17);
    }
    if ( v15 )
    {
LABEL_25:
      *(float *)(v15 + 280) = (*(float (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *))(*(_QWORD *)Configuration + 88LL))(
                                Configuration,
                                &Spectre::Engine::ConfigurationProperties::kImageProcessing_BloomWeight);
      v4 = a4;
      goto LABEL_27;
    }
LABEL_20:
    v18 = std::make_shared<Spectre::Engine::ImageProcessingEffectBloom,>(&v26);
    v15 = *v18;
    v19 = (std::_Ref_count_base *)v18[1];
    *v18 = 0LL;
    v18[1] = 0LL;
    v22 = v15;
    v20 = v7;
    v7 = v19;
    v23 = v19;
    if ( v20 )
      std::_Ref_count_base::_Decref(v20);
    if ( v27 )
      std::_Ref_count_base::_Decref(v27);
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v15 + 40LL))(v15, *a3, v13);
    v21 = std::shared_ptr<Spectre::Engine::ISceneNodeTraversal>::shared_ptr<Spectre::Engine::ISceneNodeTraversal>(
            &v26,
            &v22);
    Spectre::Engine::ImageProcessingManager::AddEffect(v24, v21);
    goto LABEL_25;
  }
  v7 = v23;
  v15 = v22;
LABEL_27:
  if ( v15 )
    *(_BYTE *)(v15 + 136) = v9;
  LOBYTE(v11) = v8;
  Spectre::Engine::ImageProcessingManager::ProcessScene(v24, v4, v11);
  if ( v7 )
    std::_Ref_count_base::_Decref(v7);
  if ( v25 )
    std::_Ref_count_base::_Decref(v25);
}
