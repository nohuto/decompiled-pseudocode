/*
 * XREFs of ?UpdateScene@Engine@1Spectre@@IEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@@Z @ 0x1800375F8
 * Callers:
 *     ?UpdateScenes@Engine@1Spectre@@MEAAXXZ @ 0x180037A80 (-UpdateScenes@Engine@1Spectre@@MEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x180010574 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ??1?$unique_lock@VMutex@Engine@Spectre@@@std@@QEAA@XZ @ 0x180010F54 (--1-$unique_lock@VMutex@Engine@Spectre@@@std@@QEAA@XZ.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x180011B24 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     ?now@steady_clock@chrono@std@@SA?AV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@23@XZ @ 0x180011CA0 (-now@steady_clock@chrono@std@@SA-AV-$time_point@Usteady_clock@chrono@std@@V-$duration@_JU-$ratio.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ??$?0VScene@Engine@Spectre@@$0A@@?$weak_ptr@VScene@Engine@Spectre@@@std@@QEAA@AEBV?$shared_ptr@VScene@Engine@Spectre@@@1@@Z @ 0x180015604 (--$-0VScene@Engine@Spectre@@$0A@@-$weak_ptr@VScene@Engine@Spectre@@@std@@QEAA@AEBV-$shared_ptr@V.c)
 *     ??0PerformanceScope@Utils@Spectre@@QEAA@V?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@std@@PEBDH11_N@Z @ 0x18001FD1C (--0PerformanceScope@Utils@Spectre@@QEAA@V-$shared_ptr@VPerformanceLogger@Utils@Spectre@@@std@@PE.c)
 *     ??1PerformanceScope@Utils@Spectre@@QEAA@XZ @ 0x18001FE24 (--1PerformanceScope@Utils@Spectre@@QEAA@XZ.c)
 *     ?GetExclusiveLockIfNecessary@Lockable@Engine@Spectre@@QEAA?AV?$unique_lock@VMutex@Engine@Spectre@@@std@@XZ @ 0x18002A044 (-GetExclusiveLockIfNecessary@Lockable@Engine@Spectre@@QEAA-AV-$unique_lock@VMutex@Engine@Spectre.c)
 *     ??0CpuProfilerScope@Engine@Spectre@@QEAA@AEBV?$weak_ptr@VCpuProfiler@Engine@Spectre@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@@Z @ 0x180030F54 (--0CpuProfilerScope@Engine@Spectre@@QEAA@AEBV-$weak_ptr@VCpuProfiler@Engine@Spectre@@@std@@AEBV-.c)
 *     ??1CpuProfilerScope@Engine@Spectre@@QEAA@XZ @ 0x180031C70 (--1CpuProfilerScope@Engine@Spectre@@QEAA@XZ.c)
 *     ?GetCpuProfiler@Engine@1Spectre@@QEBA?AV?$shared_ptr@VCpuProfiler@Engine@Spectre@@@std@@XZ @ 0x18003405C (-GetCpuProfiler@Engine@1Spectre@@QEBA-AV-$shared_ptr@VCpuProfiler@Engine@Spectre@@@std@@XZ.c)
 *     ?GetTweenManager@Engine@1Spectre@@QEBA?AV?$shared_ptr@VTweenManager@Tweening@Utils@Spectre@@@std@@AEBV?$shared_ptr@VScene@Engine@Spectre@@@4@@Z @ 0x1800348A4 (-GetTweenManager@Engine@1Spectre@@QEBA-AV-$shared_ptr@VTweenManager@Tweening@Utils@Spectre@@@std.c)
 *     ?InvokeCallback@Engine@1Spectre@@IEAAXW4ESpectreNativeRenderCallbackType@12@V?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@V?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@@Z @ 0x180034E40 (-InvokeCallback@Engine@1Spectre@@IEAAXW4ESpectreNativeRenderCallbackType@12@V-$shared_ptr@VRende.c)
 *     ?Update@Scene@Engine@Spectre@@QEAAXAEBVFrameData@23@@Z @ 0x18004226C (-Update@Scene@Engine@Spectre@@QEAAXAEBVFrameData@23@@Z.c)
 *     ?RegisterCallbackTime@CpuProfiler@Engine@Spectre@@QEAAXAEBVScopedCallbackPerformanceTimer@123@@Z @ 0x1800A03D0 (-RegisterCallbackTime@CpuProfiler@Engine@Spectre@@QEAAXAEBVScopedCallbackPerformanceTimer@123@@Z.c)
 *     ?Update@TweenManager@Tweening@Utils@Spectre@@QEAAXXZ @ 0x1800E07B0 (-Update@TweenManager@Tweening@Utils@Spectre@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=24
void __fastcall Spectre::Engine::Engine::UpdateScene(__int64 a1, __int64 *a2)
{
  __int64 v4; // rcx
  _QWORD *v5; // rax
  _QWORD *CpuProfiler; // rax
  _QWORD *v7; // rax
  _QWORD *v8; // rax
  _QWORD *v9; // rax
  _QWORD *v10; // rax
  _QWORD *v11; // rax
  _QWORD *v12; // rax
  std::_Ref_count_base *v13[2]; // [rsp+40h] [rbp-C0h] BYREF
  std::_Ref_count_base *v14[2]; // [rsp+50h] [rbp-B0h] BYREF
  Spectre::Engine::CpuProfiler *v15; // [rsp+60h] [rbp-A0h] BYREF
  std::_Ref_count_base *v16; // [rsp+68h] [rbp-98h]
  __int64 v17; // [rsp+70h] [rbp-90h] BYREF
  Spectre::Engine::CpuProfiler *v18; // [rsp+78h] [rbp-88h] BYREF
  std::_Ref_count_base *v19; // [rsp+80h] [rbp-80h]
  __int64 v20; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v21[16]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v22[16]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v23[8]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v24[4]; // [rsp+F0h] [rbp-10h] BYREF
  _QWORD v25[8]; // [rsp+110h] [rbp+10h] BYREF

  Spectre::Engine::Lockable::GetExclusiveLockIfNecessary((Spectre::Engine::Lockable *)(a1 + 8), (__int64)v22);
  Spectre::Engine::Lockable::GetExclusiveLockIfNecessary((Spectre::Engine::Lockable *)(*a2 + 16), (__int64)v21);
  Spectre::Engine::Engine::GetTweenManager(v4, v13, a2);
  if ( v13[0] )
    Spectre::Utils::Tweening::TweenManager::Update(v13[0]);
  if ( v13[1] )
    std::_Ref_count_base::_Decref(v13[1]);
  v5 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
         v14,
         (_QWORD *)(a1 + 464));
  Spectre::Utils::PerformanceScope::PerformanceScope(
    v25,
    v5,
    (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\engine.cpp",
    750,
    (__int64)"UpdateScene",
    (__int64)"PreUpdateScene");
  std::string::string(v24, (__int64)"PreUpdateScene");
  CpuProfiler = Spectre::Engine::Engine::GetCpuProfiler(a1, &v15);
  std::weak_ptr<Spectre::Engine::Scene>::weak_ptr<Spectre::Engine::Scene>(v13, CpuProfiler);
  Spectre::Engine::CpuProfilerScope::CpuProfilerScope((__int64 *)&v18, (__int64)v13);
  if ( v13[1] )
    std::_Ref_count_base::_Decwref(v13[1]);
  if ( v16 )
    std::_Ref_count_base::_Decref(v16);
  std::string::_Tidy_deallocate((__int64)v24);
  (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a1 + 96LL))(a1, a2);
  Spectre::Engine::CpuProfilerScope::~CpuProfilerScope((Spectre::Engine::CpuProfilerScope *)&v18);
  Spectre::Utils::PerformanceScope::~PerformanceScope((Spectre::Utils::PerformanceScope *)v25);
  v7 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
         &v15,
         (_QWORD *)(a1 + 464));
  Spectre::Utils::PerformanceScope::PerformanceScope(
    v23,
    v7,
    (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\engine.cpp",
    765,
    (__int64)"UpdateScene",
    (__int64)"kSpectreRenderCB_PreSceneUpdate");
  std::string::string(v25, (__int64)"kSpectreRenderCB_PreSceneUpdate");
  v8 = Spectre::Engine::Engine::GetCpuProfiler(a1, &v18);
  std::weak_ptr<Spectre::Engine::Scene>::weak_ptr<Spectre::Engine::Scene>(v13, v8);
  Spectre::Engine::CpuProfilerScope::CpuProfilerScope(v24, (__int64)v13);
  if ( v13[1] )
    std::_Ref_count_base::_Decwref(v13[1]);
  if ( v19 )
    std::_Ref_count_base::_Decref(v19);
  std::string::_Tidy_deallocate((__int64)v25);
  v15 = *(Spectre::Engine::CpuProfiler **)(a1 + 968);
  LODWORD(v16) = 1;
  std::chrono::steady_clock::now(&v17);
  Spectre::Engine::CpuProfiler::RegisterCallbackTime(
    v15,
    (const struct Spectre::Engine::CpuProfiler::ScopedCallbackPerformanceTimer *)&v15);
  *(_OWORD *)v14 = 0LL;
  *(_OWORD *)v13 = 0LL;
  Spectre::Engine::Engine::InvokeCallback(a1, 1u, (__int64)v13, v14);
  Spectre::Engine::CpuProfilerScope::~CpuProfilerScope((Spectre::Engine::CpuProfilerScope *)v24);
  Spectre::Utils::PerformanceScope::~PerformanceScope((Spectre::Utils::PerformanceScope *)v23);
  v9 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
         &v18,
         (_QWORD *)(a1 + 464));
  Spectre::Utils::PerformanceScope::PerformanceScope(
    v23,
    v9,
    (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\engine.cpp",
    771,
    (__int64)"UpdateScene",
    (__int64)"Update Scene");
  std::string::string(v25, (__int64)"Update Scene");
  v10 = Spectre::Engine::Engine::GetCpuProfiler(a1, &v15);
  std::weak_ptr<Spectre::Engine::Scene>::weak_ptr<Spectre::Engine::Scene>(v14, v10);
  Spectre::Engine::CpuProfilerScope::CpuProfilerScope(v24, (__int64)v14);
  if ( v14[1] )
    std::_Ref_count_base::_Decwref(v14[1]);
  if ( v16 )
    std::_Ref_count_base::_Decref(v16);
  std::string::_Tidy_deallocate((__int64)v25);
  Spectre::Engine::Scene::Update((Spectre::Engine::Scene *)*a2, (const struct Spectre::Engine::FrameData *)(a1 + 368));
  Spectre::Engine::CpuProfilerScope::~CpuProfilerScope((Spectre::Engine::CpuProfilerScope *)v24);
  Spectre::Utils::PerformanceScope::~PerformanceScope((Spectre::Utils::PerformanceScope *)v23);
  v11 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
          &v18,
          (_QWORD *)(a1 + 464));
  Spectre::Utils::PerformanceScope::PerformanceScope(
    v23,
    v11,
    (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\engine.cpp",
    777,
    (__int64)"UpdateScene",
    (__int64)"kSpectreRenderCB_PostSceneUpdate");
  std::string::string(v25, (__int64)"kSpectreRenderCB_PostSceneUpdate");
  v12 = Spectre::Engine::Engine::GetCpuProfiler(a1, &v15);
  std::weak_ptr<Spectre::Engine::Scene>::weak_ptr<Spectre::Engine::Scene>(v14, v12);
  Spectre::Engine::CpuProfilerScope::CpuProfilerScope(v24, (__int64)v14);
  if ( v14[1] )
    std::_Ref_count_base::_Decwref(v14[1]);
  if ( v16 )
    std::_Ref_count_base::_Decref(v16);
  std::string::_Tidy_deallocate((__int64)v25);
  v18 = *(Spectre::Engine::CpuProfiler **)(a1 + 968);
  LODWORD(v19) = 2;
  std::chrono::steady_clock::now(&v20);
  Spectre::Engine::CpuProfiler::RegisterCallbackTime(
    v18,
    (const struct Spectre::Engine::CpuProfiler::ScopedCallbackPerformanceTimer *)&v18);
  *(_OWORD *)v14 = 0LL;
  *(_OWORD *)v13 = 0LL;
  Spectre::Engine::Engine::InvokeCallback(a1, 2u, (__int64)v13, v14);
  Spectre::Engine::CpuProfilerScope::~CpuProfilerScope((Spectre::Engine::CpuProfilerScope *)v24);
  Spectre::Utils::PerformanceScope::~PerformanceScope((Spectre::Utils::PerformanceScope *)v23);
  (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a1 + 104LL))(a1, a2);
  std::unique_lock<Spectre::Engine::Mutex>::~unique_lock<Spectre::Engine::Mutex>((__int64)v21);
  std::unique_lock<Spectre::Engine::Mutex>::~unique_lock<Spectre::Engine::Mutex>((__int64)v22);
}
