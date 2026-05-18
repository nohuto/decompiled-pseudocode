/*
 * XREFs of ?PresentFrame@Engine@1Spectre@@IEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@4@AEAV?$unique_lock@VMutex@Engine@Spectre@@@4@22@Z @ 0x18003565C
 * Callers:
 *     ?RenderInternal@Display@Engine@Spectre@@AEAAXXZ @ 0x180057BA4 (-RenderInternal@Display@Engine@Spectre@@AEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x180010574 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x180011B24 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     ?now@steady_clock@chrono@std@@SA?AV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@23@XZ @ 0x180011CA0 (-now@steady_clock@chrono@std@@SA-AV-$time_point@Usteady_clock@chrono@std@@V-$duration@_JU-$ratio.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ??$?0VScene@Engine@Spectre@@$0A@@?$weak_ptr@VScene@Engine@Spectre@@@std@@QEAA@AEBV?$shared_ptr@VScene@Engine@Spectre@@@1@@Z @ 0x180015604 (--$-0VScene@Engine@Spectre@@$0A@@-$weak_ptr@VScene@Engine@Spectre@@@std@@QEAA@AEBV-$shared_ptr@V.c)
 *     ??0PerformanceScope@Utils@Spectre@@QEAA@V?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@std@@PEBDH11_N@Z @ 0x18001FD1C (--0PerformanceScope@Utils@Spectre@@QEAA@V-$shared_ptr@VPerformanceLogger@Utils@Spectre@@@std@@PE.c)
 *     ??1PerformanceScope@Utils@Spectre@@QEAA@XZ @ 0x18001FE24 (--1PerformanceScope@Utils@Spectre@@QEAA@XZ.c)
 *     ??0CpuProfilerScope@Engine@Spectre@@QEAA@AEBV?$weak_ptr@VCpuProfiler@Engine@Spectre@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@@Z @ 0x180030F54 (--0CpuProfilerScope@Engine@Spectre@@QEAA@AEBV-$weak_ptr@VCpuProfiler@Engine@Spectre@@@std@@AEBV-.c)
 *     ??1CpuProfilerScope@Engine@Spectre@@QEAA@XZ @ 0x180031C70 (--1CpuProfilerScope@Engine@Spectre@@QEAA@XZ.c)
 *     ?GetCpuProfiler@Engine@1Spectre@@QEBA?AV?$shared_ptr@VCpuProfiler@Engine@Spectre@@@std@@XZ @ 0x18003405C (-GetCpuProfiler@Engine@1Spectre@@QEBA-AV-$shared_ptr@VCpuProfiler@Engine@Spectre@@@std@@XZ.c)
 *     ?InvokeCallback@Engine@1Spectre@@IEAAXW4ESpectreNativeRenderCallbackType@12@V?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@V?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@@Z @ 0x180034E40 (-InvokeCallback@Engine@1Spectre@@IEAAXW4ESpectreNativeRenderCallbackType@12@V-$shared_ptr@VRende.c)
 *     ?RegisterCallbackTime@CpuProfiler@Engine@Spectre@@QEAAXAEBVScopedCallbackPerformanceTimer@123@@Z @ 0x1800A03D0 (-RegisterCallbackTime@CpuProfiler@Engine@Spectre@@QEAAXAEBVScopedCallbackPerformanceTimer@123@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=17
void __fastcall Spectre::Engine::Engine::PresentFrame(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  _QWORD *v10; // r14
  _QWORD *v11; // rax
  _QWORD *CpuProfiler; // rax
  _QWORD *v13; // rax
  _QWORD *v14; // rax
  _QWORD *v15; // rax
  _QWORD *v16; // r9
  __int64 v17; // [rsp+40h] [rbp-C0h] BYREF
  std::_Ref_count_base *v18; // [rsp+48h] [rbp-B8h]
  __int64 v19; // [rsp+50h] [rbp-B0h] BYREF
  std::_Ref_count_base *v20; // [rsp+58h] [rbp-A8h]
  Spectre::Engine::CpuProfiler *v21; // [rsp+60h] [rbp-A0h] BYREF
  int v22; // [rsp+68h] [rbp-98h]
  __int64 v23; // [rsp+70h] [rbp-90h] BYREF
  __int64 v24; // [rsp+78h] [rbp-88h] BYREF
  std::_Ref_count_base *v25; // [rsp+80h] [rbp-80h]
  _QWORD v26[8]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v27[4]; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD v28[8]; // [rsp+F0h] [rbp-10h] BYREF

  v10 = (_QWORD *)(a1 + 464);
  v11 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
          &v17,
          (_QWORD *)(a1 + 464));
  Spectre::Utils::PerformanceScope::PerformanceScope(
    v28,
    v11,
    (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\engine.cpp",
    1050,
    (__int64)"PresentFrame",
    (__int64)"PresentFrame");
  std::string::string(v27, (__int64)"PresentFrame");
  CpuProfiler = Spectre::Engine::Engine::GetCpuProfiler(a1, &v19);
  std::weak_ptr<Spectre::Engine::Scene>::weak_ptr<Spectre::Engine::Scene>(&v17, CpuProfiler);
  Spectre::Engine::CpuProfilerScope::CpuProfilerScope((__int64 *)&v21, (__int64)&v17);
  if ( v18 )
    std::_Ref_count_base::_Decwref(v18);
  if ( v20 )
    std::_Ref_count_base::_Decref(v20);
  std::string::_Tidy_deallocate((__int64)v27);
  (*(void (__fastcall **)(_QWORD, _QWORD *, __int64, __int64, __int64))(*(_QWORD *)*a2 + 216LL))(*a2, a3, a4, a5, a6);
  Spectre::Engine::CpuProfilerScope::~CpuProfilerScope((Spectre::Engine::CpuProfilerScope *)&v21);
  Spectre::Utils::PerformanceScope::~PerformanceScope((Spectre::Utils::PerformanceScope *)v28);
  v13 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
          &v19,
          v10);
  Spectre::Utils::PerformanceScope::PerformanceScope(
    v26,
    v13,
    (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\engine.cpp",
    1056,
    (__int64)"PresentFrame",
    (__int64)"kSpectreRenderCB_PostPresent");
  std::string::string(v28, (__int64)"kSpectreRenderCB_PostPresent");
  v14 = Spectre::Engine::Engine::GetCpuProfiler(a1, &v24);
  std::weak_ptr<Spectre::Engine::Scene>::weak_ptr<Spectre::Engine::Scene>(&v17, v14);
  Spectre::Engine::CpuProfilerScope::CpuProfilerScope(v27, (__int64)&v17);
  if ( v18 )
    std::_Ref_count_base::_Decwref(v18);
  if ( v25 )
    std::_Ref_count_base::_Decref(v25);
  std::string::_Tidy_deallocate((__int64)v28);
  v21 = *(Spectre::Engine::CpuProfiler **)(a1 + 968);
  v22 = 6;
  std::chrono::steady_clock::now(&v23);
  Spectre::Engine::CpuProfiler::RegisterCallbackTime(
    v21,
    (const struct Spectre::Engine::CpuProfiler::ScopedCallbackPerformanceTimer *)&v21);
  std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(&v19, a3);
  v15 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
          &v21,
          a2);
  Spectre::Engine::Engine::InvokeCallback(a1, 6u, (__int64)v15, v16);
  Spectre::Engine::CpuProfilerScope::~CpuProfilerScope((Spectre::Engine::CpuProfilerScope *)v27);
  Spectre::Utils::PerformanceScope::~PerformanceScope((Spectre::Utils::PerformanceScope *)v26);
}
