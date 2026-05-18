/*
 * XREFs of ?UpdateCameraEffectsDiagnostics@ViewerEngine@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@@Z @ 0x180068BA0
 * Callers:
 *     ?UpdatePipelineConstants@ViewerEngine@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@AEBV?$shared_ptr@VScene@Engine@Spectre@@@5@@Z @ 0x18006BE30 (-UpdatePipelineConstants@ViewerEngine@Engine@Spectre@@AEAAXAEBV-$shared_ptr@VRenderDevice@Engine.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@AEBV01@@Z @ 0x180017648 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?GetConfiguration@Engine@1Spectre@@QEBAAEAVIConfigurationManager@Utils@2@H@Z @ 0x180034014 (-GetConfiguration@Engine@1Spectre@@QEBAAEAVIConfigurationManager@Utils@2@H@Z.c)
 *     ?GetShaderManager@Engine@1Spectre@@QEBAAEAVShaderManager@12@XZ @ 0x1800347F0 (-GetShaderManager@Engine@1Spectre@@QEBAAEAVShaderManager@12@XZ.c)
 *     ?GetShaderFamily@ShaderManager@Engine@Spectre@@QEAA?AV?$shared_ptr@VShaderFamily@Engine@Spectre@@@std@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@5@@Z @ 0x180050224 (-GetShaderFamily@ShaderManager@Engine@Spectre@@QEAA-AV-$shared_ptr@VShaderFamily@Engine@Spectre@.c)
 *     ?SetGlobalVector4@ShaderManager@Engine@Spectre@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UVector4@Math@Utils@3@@Z @ 0x1800507D4 (-SetGlobalVector4@ShaderManager@Engine@Spectre@@QEAAXAEBV-$basic_string@DU-$char_traits@D@std@@V.c)
 *     ?SetOption@ShaderFamily@Engine@Spectre@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z @ 0x180061184 (-SetOption@ShaderFamily@Engine@Spectre@@QEAAXAEBV-$basic_string@DU-$char_traits@D@std@@V-$alloca.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Spectre::Engine::ViewerEngine::UpdateCameraEffectsDiagnostics(
        Spectre::Engine::Engine *this,
        __int64 a2)
{
  struct Spectre::Utils::IConfigurationManager *Configuration; // rbx
  char v4; // r14
  char v5; // r15
  int v6; // esi
  struct Spectre::Engine::ShaderManager *ShaderManager; // rdi
  bool v8; // al
  int v9; // r8d
  char v10; // cl
  char v11; // bl
  _QWORD *v12; // rax
  __int64 v13; // [rsp+40h] [rbp-30h] BYREF
  std::_Ref_count_base *v14; // [rsp+48h] [rbp-28h]
  _QWORD v15[4]; // [rsp+50h] [rbp-20h] BYREF

  Configuration = Spectre::Engine::Engine::GetConfiguration(this, *(_DWORD *)(*(_QWORD *)a2 + 112LL));
  v4 = (*(__int64 (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, _QWORD))(*(_QWORD *)Configuration
                                                                                                 + 64LL))(
         Configuration,
         &Spectre::Engine::ConfigurationProperties::kRenderer_CameraEffect_DisplayDepth,
         0LL);
  v5 = (*(__int64 (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, _QWORD))(*(_QWORD *)Configuration
                                                                                                 + 64LL))(
         Configuration,
         &Spectre::Engine::ConfigurationProperties::kRenderer_CameraEffect_DisplayDepthGrid,
         0LL);
  v6 = (*(__int64 (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, _QWORD))(*(_QWORD *)Configuration
                                                                                                 + 72LL))(
         Configuration,
         &Spectre::Engine::ConfigurationProperties::kRenderer_CameraEffect_ColorSwatchMode,
         0LL);
  (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, _QWORD))(*(_QWORD *)Configuration
                                                                                         + 72LL))(
    Configuration,
    &Spectre::Engine::ConfigurationProperties::kRenderer_AlphaCompositingOutputMode,
    0LL);
  ShaderManager = Spectre::Engine::Engine::GetShaderManager(this);
  v8 = v6 != 0;
  if ( v9 )
    v8 = 1;
  v10 = v8;
  if ( v4 )
    v10 = 1;
  v11 = v10;
  if ( v5 )
    v11 = 1;
  v12 = std::string::string(v15, (__int64)&Spectre::Engine::ImageProcessingShaderExtension::kShaderFamilyName);
  Spectre::Engine::ShaderManager::GetShaderFamily((__int64)ShaderManager, &v13, v12);
  Spectre::Engine::ShaderFamily::SetOption(
    v13,
    Spectre::Engine::ImageProcessingShaderExtension::kOption_Diagnostics,
    v11);
  Spectre::Engine::ShaderManager::SetGlobalVector4((__int64)ShaderManager);
  Spectre::Engine::ShaderManager::SetGlobalVector4((__int64)ShaderManager);
  if ( v14 )
    std::_Ref_count_base::_Decref(v14);
}
