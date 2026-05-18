/*
 * XREFs of ?RenderContent@Engine@1Spectre@@IEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@AEBV?$vector@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@@2@@4@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@4@@Z @ 0x180035E98
 * Callers:
 *     ?RenderInternal@Display@Engine@Spectre@@AEAAXXZ @ 0x180057BA4 (-RenderInternal@Display@Engine@Spectre@@AEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x180010574 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x180011B24 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     ?lock@?$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA?AV?$shared_ptr@VRenderDevice@Engine@Spectre@@@2@XZ @ 0x180011C50 (-lock@-$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA-AV-$shared_ptr@VRenderDevice@Engine@Sp.c)
 *     ?now@steady_clock@chrono@std@@SA?AV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@23@XZ @ 0x180011CA0 (-now@steady_clock@chrono@std@@SA-AV-$time_point@Usteady_clock@chrono@std@@V-$duration@_JU-$ratio.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ??$?0VScene@Engine@Spectre@@$0A@@?$weak_ptr@VScene@Engine@Spectre@@@std@@QEAA@AEBV?$shared_ptr@VScene@Engine@Spectre@@@1@@Z @ 0x180015604 (--$-0VScene@Engine@Spectre@@$0A@@-$weak_ptr@VScene@Engine@Spectre@@@std@@QEAA@AEBV-$shared_ptr@V.c)
 *     ??0PerformanceScope@Utils@Spectre@@QEAA@V?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@std@@PEBDH11_N@Z @ 0x18001FD1C (--0PerformanceScope@Utils@Spectre@@QEAA@V-$shared_ptr@VPerformanceLogger@Utils@Spectre@@@std@@PE.c)
 *     ??1PerformanceScope@Utils@Spectre@@QEAA@XZ @ 0x18001FE24 (--1PerformanceScope@Utils@Spectre@@QEAA@XZ.c)
 *     ??0CpuProfilerScope@Engine@Spectre@@QEAA@AEBV?$weak_ptr@VCpuProfiler@Engine@Spectre@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@@Z @ 0x180030F54 (--0CpuProfilerScope@Engine@Spectre@@QEAA@AEBV-$weak_ptr@VCpuProfiler@Engine@Spectre@@@std@@AEBV-.c)
 *     ??1CpuProfilerScope@Engine@Spectre@@QEAA@XZ @ 0x180031C70 (--1CpuProfilerScope@Engine@Spectre@@QEAA@XZ.c)
 *     ?GetCpuProfiler@Engine@1Spectre@@QEBA?AV?$shared_ptr@VCpuProfiler@Engine@Spectre@@@std@@XZ @ 0x18003405C (-GetCpuProfiler@Engine@1Spectre@@QEBA-AV-$shared_ptr@VCpuProfiler@Engine@Spectre@@@std@@XZ.c)
 *     ?GetShaderManager@Engine@1Spectre@@QEBAAEAVShaderManager@12@XZ @ 0x1800347F0 (-GetShaderManager@Engine@1Spectre@@QEBAAEAVShaderManager@12@XZ.c)
 *     ?InvokeCallback@Engine@1Spectre@@IEAAXW4ESpectreNativeRenderCallbackType@12@V?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@V?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@@Z @ 0x180034E40 (-InvokeCallback@Engine@1Spectre@@IEAAXW4ESpectreNativeRenderCallbackType@12@V-$shared_ptr@VRende.c)
 *     ?ClearGlobalTextureState@ShaderManager@Engine@Spectre@@QEAAXXZ @ 0x18004F684 (-ClearGlobalTextureState@ShaderManager@Engine@Spectre@@QEAAXXZ.c)
 *     ?RegisterCallbackTime@CpuProfiler@Engine@Spectre@@QEAAXAEBVScopedCallbackPerformanceTimer@123@@Z @ 0x1800A03D0 (-RegisterCallbackTime@CpuProfiler@Engine@Spectre@@QEAAXAEBVScopedCallbackPerformanceTimer@123@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=22
void __fastcall Spectre::Engine::Engine::RenderContent(
        Spectre::Engine::Engine *this,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  _QWORD *v8; // rsi
  _QWORD *v9; // rax
  _QWORD *CpuProfiler; // rax
  __int64 v11; // rax
  _QWORD *v12; // rax
  _QWORD *v13; // rax
  _QWORD *v14; // rax
  _QWORD *v15; // r9
  _QWORD *v16; // rax
  _QWORD *v17; // rax
  _QWORD *v18; // rax
  _QWORD *v19; // rax
  _QWORD *v20; // rax
  _QWORD *v21; // r9
  Spectre::Engine::ShaderManager *ShaderManager; // rax
  __int64 v23; // [rsp+40h] [rbp-C0h] BYREF
  std::_Ref_count_base *v24; // [rsp+48h] [rbp-B8h]
  Spectre::Engine::CpuProfiler *v25; // [rsp+50h] [rbp-B0h] BYREF
  int v26; // [rsp+58h] [rbp-A8h]
  __int64 v27; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v28; // [rsp+68h] [rbp-98h] BYREF
  std::_Ref_count_base *v29; // [rsp+70h] [rbp-90h]
  __int64 v30; // [rsp+78h] [rbp-88h] BYREF
  std::_Ref_count_base *v31; // [rsp+80h] [rbp-80h]
  __int64 v32; // [rsp+88h] [rbp-78h] BYREF
  std::_Ref_count_base *v33; // [rsp+90h] [rbp-70h]
  __int64 v34[3]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v35; // [rsp+B0h] [rbp-50h] BYREF
  std::_Ref_count_base *v36; // [rsp+B8h] [rbp-48h]
  _BYTE v37[8]; // [rsp+C0h] [rbp-40h] BYREF
  std::_Ref_count_base *v38; // [rsp+C8h] [rbp-38h]
  _QWORD v39[8]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v40[4]; // [rsp+110h] [rbp+10h] BYREF
  _QWORD v41[8]; // [rsp+130h] [rbp+30h] BYREF
  _QWORD v42[4]; // [rsp+170h] [rbp+70h] BYREF
  _QWORD v43[4]; // [rsp+190h] [rbp+90h] BYREF

  v8 = (_QWORD *)((char *)this + 464);
  v9 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
         &v28,
         (_QWORD *)this + 58);
  Spectre::Utils::PerformanceScope::PerformanceScope(
    v41,
    v9,
    (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\engine.cpp",
    1017,
    (__int64)"RenderContent",
    (__int64)"RenderContent");
  std::string::string(v43, (__int64)"RenderContent");
  CpuProfiler = Spectre::Engine::Engine::GetCpuProfiler((__int64)this, &v35);
  std::weak_ptr<Spectre::Engine::Scene>::weak_ptr<Spectre::Engine::Scene>(&v28, CpuProfiler);
  Spectre::Engine::CpuProfilerScope::CpuProfilerScope(v40, (__int64)&v28);
  if ( v29 )
    std::_Ref_count_base::_Decwref(v29);
  if ( v36 )
    std::_Ref_count_base::_Decref(v36);
  std::string::_Tidy_deallocate((__int64)v43);
  v11 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)*a4 + 376LL))(*a4, v37);
  std::weak_ptr<Spectre::Engine::RenderDevice>::lock(v11, &v28);
  if ( v38 )
    std::_Ref_count_base::_Decwref(v38);
  if ( v28 && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28) )
  {
    v12 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
            &v23,
            v8);
    Spectre::Utils::PerformanceScope::PerformanceScope(
      v39,
      v12,
      (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\engine.cpp",
      1025,
      (__int64)"RenderContent",
      (__int64)"kSpectreRenderCB_PreRender");
    std::string::string(v42, (__int64)"kSpectreRenderCB_PreRender");
    v13 = Spectre::Engine::Engine::GetCpuProfiler((__int64)this, &v32);
    std::weak_ptr<Spectre::Engine::Scene>::weak_ptr<Spectre::Engine::Scene>(&v23, v13);
    Spectre::Engine::CpuProfilerScope::CpuProfilerScope(v34, (__int64)&v23);
    if ( v24 )
      std::_Ref_count_base::_Decwref(v24);
    if ( v33 )
      std::_Ref_count_base::_Decref(v33);
    std::string::_Tidy_deallocate((__int64)v42);
    v25 = (Spectre::Engine::CpuProfiler *)*((_QWORD *)this + 121);
    v26 = 3;
    std::chrono::steady_clock::now(&v27);
    Spectre::Engine::CpuProfiler::RegisterCallbackTime(
      v25,
      (const struct Spectre::Engine::CpuProfiler::ScopedCallbackPerformanceTimer *)&v25);
    std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(&v30, a4);
    v14 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
            &v25,
            &v28);
    Spectre::Engine::Engine::InvokeCallback((__int64)this, 3u, (__int64)v14, v15);
    Spectre::Engine::CpuProfilerScope::~CpuProfilerScope((Spectre::Engine::CpuProfilerScope *)v34);
    Spectre::Utils::PerformanceScope::~PerformanceScope((Spectre::Utils::PerformanceScope *)v39);
    v16 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
            &v25,
            v8);
    Spectre::Utils::PerformanceScope::PerformanceScope(
      v39,
      v16,
      (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\engine.cpp",
      1030,
      (__int64)"RenderContent",
      (__int64)"RenderScene");
    std::string::string(v42, (__int64)"RenderScene");
    v17 = Spectre::Engine::Engine::GetCpuProfiler((__int64)this, &v30);
    std::weak_ptr<Spectre::Engine::Scene>::weak_ptr<Spectre::Engine::Scene>(&v23, v17);
    Spectre::Engine::CpuProfilerScope::CpuProfilerScope(v34, (__int64)&v23);
    if ( v24 )
      std::_Ref_count_base::_Decwref(v24);
    if ( v31 )
      std::_Ref_count_base::_Decref(v31);
    std::string::_Tidy_deallocate((__int64)v42);
    (*(void (__fastcall **)(Spectre::Engine::Engine *, __int64, __int64, __int64 *, _QWORD *))(*(_QWORD *)this + 128LL))(
      this,
      a2,
      a3,
      &v28,
      a4);
    Spectre::Engine::CpuProfilerScope::~CpuProfilerScope((Spectre::Engine::CpuProfilerScope *)v34);
    Spectre::Utils::PerformanceScope::~PerformanceScope((Spectre::Utils::PerformanceScope *)v39);
    v18 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
            &v25,
            v8);
    Spectre::Utils::PerformanceScope::PerformanceScope(
      v39,
      v18,
      (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\engine.cpp",
      1036,
      (__int64)"RenderContent",
      (__int64)"kSpectreRenderCB_EndFrame");
    std::string::string(v42, (__int64)"kSpectreRenderCB_EndFrame");
    v19 = Spectre::Engine::Engine::GetCpuProfiler((__int64)this, &v30);
    std::weak_ptr<Spectre::Engine::Scene>::weak_ptr<Spectre::Engine::Scene>(&v23, v19);
    Spectre::Engine::CpuProfilerScope::CpuProfilerScope(v34, (__int64)&v23);
    if ( v24 )
      std::_Ref_count_base::_Decwref(v24);
    if ( v31 )
      std::_Ref_count_base::_Decref(v31);
    std::string::_Tidy_deallocate((__int64)v42);
    v25 = (Spectre::Engine::CpuProfiler *)*((_QWORD *)this + 121);
    v26 = 5;
    std::chrono::steady_clock::now(&v27);
    Spectre::Engine::CpuProfiler::RegisterCallbackTime(
      v25,
      (const struct Spectre::Engine::CpuProfiler::ScopedCallbackPerformanceTimer *)&v25);
    std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(&v25, a4);
    v20 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
            &v32,
            &v28);
    Spectre::Engine::Engine::InvokeCallback((__int64)this, 5u, (__int64)v20, v21);
    Spectre::Engine::CpuProfilerScope::~CpuProfilerScope((Spectre::Engine::CpuProfilerScope *)v34);
    Spectre::Utils::PerformanceScope::~PerformanceScope((Spectre::Utils::PerformanceScope *)v39);
  }
  if ( v29 )
    std::_Ref_count_base::_Decref(v29);
  ShaderManager = Spectre::Engine::Engine::GetShaderManager(this);
  Spectre::Engine::ShaderManager::ClearGlobalTextureState(ShaderManager);
  Spectre::Engine::CpuProfilerScope::~CpuProfilerScope((Spectre::Engine::CpuProfilerScope *)v40);
  Spectre::Utils::PerformanceScope::~PerformanceScope((Spectre::Utils::PerformanceScope *)v41);
}
