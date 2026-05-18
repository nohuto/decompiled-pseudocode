/*
 * XREFs of ?PreRenderScene@ViewerEngine@Engine@Spectre@@MEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@AEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@5@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@@Z @ 0x180067590
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x180010574 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x180011B24 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ??$?0VScene@Engine@Spectre@@$0A@@?$weak_ptr@VScene@Engine@Spectre@@@std@@QEAA@AEBV?$shared_ptr@VScene@Engine@Spectre@@@1@@Z @ 0x180015604 (--$-0VScene@Engine@Spectre@@$0A@@-$weak_ptr@VScene@Engine@Spectre@@@std@@QEAA@AEBV-$shared_ptr@V.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@AEBV01@@Z @ 0x180017648 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@AEBV01@@Z.c)
 *     ??0PerformanceScope@Utils@Spectre@@QEAA@V?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@std@@PEBDH11_N@Z @ 0x18001FD1C (--0PerformanceScope@Utils@Spectre@@QEAA@V-$shared_ptr@VPerformanceLogger@Utils@Spectre@@@std@@PE.c)
 *     ??1PerformanceScope@Utils@Spectre@@QEAA@XZ @ 0x18001FE24 (--1PerformanceScope@Utils@Spectre@@QEAA@XZ.c)
 *     ??0CpuProfilerScope@Engine@Spectre@@QEAA@AEBV?$weak_ptr@VCpuProfiler@Engine@Spectre@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@@Z @ 0x180030F54 (--0CpuProfilerScope@Engine@Spectre@@QEAA@AEBV-$weak_ptr@VCpuProfiler@Engine@Spectre@@@std@@AEBV-.c)
 *     ??1CpuProfilerScope@Engine@Spectre@@QEAA@XZ @ 0x180031C70 (--1CpuProfilerScope@Engine@Spectre@@QEAA@XZ.c)
 *     ?GetConfiguration@Engine@1Spectre@@QEBAAEAVIConfigurationManager@Utils@2@H@Z @ 0x180034014 (-GetConfiguration@Engine@1Spectre@@QEBAAEAVIConfigurationManager@Utils@2@H@Z.c)
 *     ?GetCpuProfiler@Engine@1Spectre@@QEBA?AV?$shared_ptr@VCpuProfiler@Engine@Spectre@@@std@@XZ @ 0x18003405C (-GetCpuProfiler@Engine@1Spectre@@QEBA-AV-$shared_ptr@VCpuProfiler@Engine@Spectre@@@std@@XZ.c)
 *     ?GetDeviceIndex@Engine@1Spectre@@QEAAIAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x1800342A8 (-GetDeviceIndex@Engine@1Spectre@@QEAAIAEBV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z.c)
 *     ?GetShaderManager@Engine@1Spectre@@QEBAAEAVShaderManager@12@XZ @ 0x1800347F0 (-GetShaderManager@Engine@1Spectre@@QEBAAEAVShaderManager@12@XZ.c)
 *     ?GetShaderFamily@ShaderManager@Engine@Spectre@@QEAA?AV?$shared_ptr@VShaderFamily@Engine@Spectre@@@std@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@5@@Z @ 0x180050224 (-GetShaderFamily@ShaderManager@Engine@Spectre@@QEAA-AV-$shared_ptr@VShaderFamily@Engine@Spectre@.c)
 *     ?SetOption@ShaderFamily@Engine@Spectre@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z @ 0x180061184 (-SetOption@ShaderFamily@Engine@Spectre@@QEAAXAEBV-$basic_string@DU-$char_traits@D@std@@V-$alloca.c)
 *     ?UpdateBackground@ViewerEngine@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@_NM@Z @ 0x180067E30 (-UpdateBackground@ViewerEngine@Engine@Spectre@@AEAAXAEBV-$shared_ptr@VScene@Engine@Spectre@@@std.c)
 *     ?UpdateDebugConstants@ViewerEngine@Engine@Spectre@@AEAAXAEAVIRenderOutput@23@H@Z @ 0x180069CB0 (-UpdateDebugConstants@ViewerEngine@Engine@Spectre@@AEAAXAEAVIRenderOutput@23@H@Z.c)
 *     ?UpdateFrameConstants@ViewerEngine@Engine@Spectre@@AEAAXXZ @ 0x18006A5CC (-UpdateFrameConstants@ViewerEngine@Engine@Spectre@@AEAAXXZ.c)
 *     ?UpdatePipelineConstants@ViewerEngine@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@AEBV?$shared_ptr@VScene@Engine@Spectre@@@5@@Z @ 0x18006BE30 (-UpdatePipelineConstants@ViewerEngine@Engine@Spectre@@AEAAXAEBV-$shared_ptr@VRenderDevice@Engine.c)
 *     ?UpdatePlanarReflection@ViewerEngine@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@IAEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@@Z @ 0x18006D03C (-UpdatePlanarReflection@ViewerEngine@Engine@Spectre@@AEAAXAEBV-$shared_ptr@VScene@Engine@Spectre.c)
 *     ?UpdateRendererSettings@ViewerEngine@Engine@Spectre@@AEAAXAEAVRenderDevice@23@AEAVIRenderOutput@23@AEAVIConfigurationManager@Utils@3@@Z @ 0x18006DBD4 (-UpdateRendererSettings@ViewerEngine@Engine@Spectre@@AEAAXAEAVRenderDevice@23@AEAVIRenderOutput@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=10
void __fastcall Spectre::Engine::ViewerEngine::PreRenderScene(
        Spectre::Engine::Engine *this,
        __int64 a2,
        struct Spectre::Engine::RenderDevice **a3,
        struct Spectre::Engine::IRenderOutput **a4)
{
  _QWORD *v8; // rax
  _QWORD *CpuProfiler; // rax
  struct Spectre::Utils::IConfigurationManager *Configuration; // rdi
  Spectre::Engine::ViewerEngine *v11; // rcx
  __int64 v12; // r8
  struct Spectre::Engine::ShaderManager *ShaderManager; // rbx
  _QWORD *v14; // rax
  _QWORD *v15; // rax
  __int64 v16; // [rsp+40h] [rbp-C0h] BYREF
  std::_Ref_count_base *v17; // [rsp+48h] [rbp-B8h]
  __int64 v18; // [rsp+50h] [rbp-B0h] BYREF
  std::_Ref_count_base *v19; // [rsp+58h] [rbp-A8h]
  __int64 v20; // [rsp+60h] [rbp-A0h] BYREF
  std::_Ref_count_base *v21; // [rsp+68h] [rbp-98h]
  __int64 v22[3]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v23[5]; // [rsp+88h] [rbp-78h] BYREF
  _QWORD v24[8]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v25[4]; // [rsp+F0h] [rbp-10h] BYREF

  v8 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
         &v18,
         (_QWORD *)this + 58);
  Spectre::Utils::PerformanceScope::PerformanceScope(
    v24,
    v8,
    (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\viewerengine.cpp",
    1570,
    (__int64)"PreRenderScene",
    (__int64)"PreRenderScene");
  std::string::string(v25, (__int64)"PreRenderScene");
  CpuProfiler = Spectre::Engine::Engine::GetCpuProfiler((__int64)this, &v20);
  std::weak_ptr<Spectre::Engine::Scene>::weak_ptr<Spectre::Engine::Scene>(&v16, CpuProfiler);
  Spectre::Engine::CpuProfilerScope::CpuProfilerScope(v22, (__int64)&v16);
  if ( v17 )
    std::_Ref_count_base::_Decwref(v17);
  if ( v21 )
    std::_Ref_count_base::_Decref(v21);
  std::string::_Tidy_deallocate((__int64)v25);
  Configuration = Spectre::Engine::Engine::GetConfiguration(this, *(_DWORD *)(*(_QWORD *)a2 + 112LL));
  Spectre::Engine::ViewerEngine::UpdateRendererSettings(v11, *a3, *a4, Configuration);
  LOBYTE(v12) = 1;
  (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, __int64))(*(_QWORD *)Configuration
                                                                                          + 64LL))(
    Configuration,
    &Spectre::Engine::ConfigurationProperties::kGroundPlane_BottomVisible,
    v12);
  (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *))(*(_QWORD *)Configuration + 88LL))(
    Configuration,
    &Spectre::Engine::ConfigurationProperties::kGroundPlane_BottomGridOpacity);
  Spectre::Engine::ViewerEngine::UpdateBackground(this);
  (*(void (__fastcall **)(struct Spectre::Engine::RenderDevice *))(*(_QWORD *)*a3 + 120LL))(*a3);
  *((_BYTE *)this + 1457) = (*(__int64 (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, _QWORD))(*(_QWORD *)Configuration + 64LL))(
                              Configuration,
                              &Spectre::Engine::ConfigurationProperties::kShader_DiagnosticsEnabled,
                              0LL);
  Spectre::Engine::ViewerEngine::UpdateFrameConstants(this);
  Spectre::Engine::ViewerEngine::UpdateDebugConstants(this, *a4, *(_DWORD *)(*(_QWORD *)a2 + 112LL));
  Spectre::Engine::ViewerEngine::UpdatePipelineConstants(this);
  ShaderManager = Spectre::Engine::Engine::GetShaderManager(this);
  v14 = std::string::string(v23, (__int64)&Spectre::Engine::StandardShaderExtension::kShaderFamilyName);
  Spectre::Engine::ShaderManager::GetShaderFamily((__int64)ShaderManager, &v18, v14);
  Spectre::Engine::ShaderFamily::SetOption(
    v18,
    Spectre::Engine::ShaderConstants::kOption_Diagnostics,
    *((_BYTE *)this + 1457));
  v15 = std::string::string(v25, (__int64)&Spectre::Engine::UnlitShaderExtension::kShaderFamilyName);
  Spectre::Engine::ShaderManager::GetShaderFamily((__int64)ShaderManager, &v16, v15);
  Spectre::Engine::ShaderFamily::SetOption(
    v16,
    Spectre::Engine::ShaderConstants::kOption_Diagnostics,
    *((_BYTE *)this + 1457));
  Spectre::Engine::Engine::GetDeviceIndex(this, a3);
  Spectre::Engine::ViewerEngine::UpdatePlanarReflection(this);
  if ( v17 )
    std::_Ref_count_base::_Decref(v17);
  if ( v19 )
    std::_Ref_count_base::_Decref(v19);
  Spectre::Engine::CpuProfilerScope::~CpuProfilerScope((Spectre::Engine::CpuProfilerScope *)v22);
  Spectre::Utils::PerformanceScope::~PerformanceScope((Spectre::Utils::PerformanceScope *)v24);
}
