/*
 * XREFs of ?UpdateScenes@Engine@1Spectre@@MEAAXXZ @ 0x180037A80
 * Callers:
 *     ?UpdateScenes@ViewerEngine@Engine@Spectre@@MEAAXXZ @ 0x18006DD20 (-UpdateScenes@ViewerEngine@Engine@Spectre@@MEAAXXZ.c)
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
 *     ?HasAnyDefaultPointerState@FrameInputData@Engine@Spectre@@QEBA_NXZ @ 0x18003495C (-HasAnyDefaultPointerState@FrameInputData@Engine@Spectre@@QEBA_NXZ.c)
 *     ?InvokeCallback@Engine@1Spectre@@IEAAXW4ESpectreNativeRenderCallbackType@12@V?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@V?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@@Z @ 0x180034E40 (-InvokeCallback@Engine@1Spectre@@IEAAXW4ESpectreNativeRenderCallbackType@12@V-$shared_ptr@VRende.c)
 *     ?UpdateScene@Engine@1Spectre@@IEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@@Z @ 0x1800375F8 (-UpdateScene@Engine@1Spectre@@IEAAXAEBV-$shared_ptr@VScene@Engine@Spectre@@@std@@@Z.c)
 *     ?GetInput@FrameData@Engine@Spectre@@QEBAAEBVInput@23@XZ @ 0x1800743C0 (-GetInput@FrameData@Engine@Spectre@@QEBAAEBVInput@23@XZ.c)
 *     ?SetInput@FrameData@Engine@Spectre@@QEAAXAEBVInput@23@@Z @ 0x1800743D8 (-SetInput@FrameData@Engine@Spectre@@QEAAXAEBVInput@23@@Z.c)
 *     ?GetFrameInputData@Input@Engine@Spectre@@QEBAAEBUFrameInputData@23@XZ @ 0x1800745B4 (-GetFrameInputData@Input@Engine@Spectre@@QEBAAEBUFrameInputData@23@XZ.c)
 *     ?Update@Input@Engine@Spectre@@QEAAXXZ @ 0x1800747A8 (-Update@Input@Engine@Spectre@@QEAAXXZ.c)
 *     ?UpdateMouseEvent@Input@Engine@Spectre@@QEAAXAEBUPointerEvent@23@@Z @ 0x180074844 (-UpdateMouseEvent@Input@Engine@Spectre@@QEAAXAEBUPointerEvent@23@@Z.c)
 *     ?RegisterCallbackTime@CpuProfiler@Engine@Spectre@@QEAAXAEBVScopedCallbackPerformanceTimer@123@@Z @ 0x1800A03D0 (-RegisterCallbackTime@CpuProfiler@Engine@Spectre@@QEAAXAEBVScopedCallbackPerformanceTimer@123@@Z.c)
 */

// Hidden C++ exception states: #wind=17
void __fastcall Spectre::Engine::Engine::UpdateScenes(Spectre::Engine::Engine *this)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // rax
  _QWORD *CpuProfiler; // rax
  _QWORD *v5; // rax
  _QWORD *v6; // rax
  __int64 *v7; // r15
  __int64 *v8; // rbx
  Spectre::Engine::Input *Input; // r12
  const struct Spectre::Engine::FrameInputData *FrameInputData; // rax
  Spectre::Engine::FrameInputData *v11; // rax
  std::_Ref_count_base *v12[2]; // [rsp+40h] [rbp-C0h] BYREF
  Spectre::Engine::CpuProfiler *v13[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v14; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v15; // [rsp+68h] [rbp-98h] BYREF
  std::_Ref_count_base *v16; // [rsp+70h] [rbp-90h]
  __int64 v17; // [rsp+78h] [rbp-88h] BYREF
  std::_Ref_count_base *v18; // [rsp+80h] [rbp-80h]
  __int64 v19[3]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v20[4]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v21[8]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v22[8]; // [rsp+100h] [rbp+0h] BYREF
  _OWORD v23[3]; // [rsp+140h] [rbp+40h] BYREF
  _QWORD v24[4]; // [rsp+170h] [rbp+70h] BYREF

  v2 = (_QWORD *)((char *)this + 464);
  v3 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
         v13,
         (_QWORD *)this + 58);
  Spectre::Utils::PerformanceScope::PerformanceScope(
    v22,
    v3,
    (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\engine.cpp",
    707,
    (__int64)"UpdateScenes",
    (__int64)"UpdateScenes");
  std::string::string(v24, (__int64)"UpdateScenes");
  CpuProfiler = Spectre::Engine::Engine::GetCpuProfiler((__int64)this, &v15);
  std::weak_ptr<Spectre::Engine::Scene>::weak_ptr<Spectre::Engine::Scene>(v12, CpuProfiler);
  Spectre::Engine::CpuProfilerScope::CpuProfilerScope(v20, (__int64)v12);
  if ( v12[1] )
    std::_Ref_count_base::_Decwref(v12[1]);
  if ( v16 )
    std::_Ref_count_base::_Decref(v16);
  std::string::_Tidy_deallocate((__int64)v24);
  v5 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
         v13,
         v2);
  Spectre::Utils::PerformanceScope::PerformanceScope(
    v21,
    v5,
    (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\engine.cpp",
    712,
    (__int64)"UpdateScenes",
    (__int64)"kSpectreRenderCB_BeginFrame");
  std::string::string(v23, (__int64)"kSpectreRenderCB_BeginFrame");
  v6 = Spectre::Engine::Engine::GetCpuProfiler((__int64)this, &v17);
  std::weak_ptr<Spectre::Engine::Scene>::weak_ptr<Spectre::Engine::Scene>(v12, v6);
  Spectre::Engine::CpuProfilerScope::CpuProfilerScope(v19, (__int64)v12);
  if ( v12[1] )
    std::_Ref_count_base::_Decwref(v12[1]);
  if ( v18 )
    std::_Ref_count_base::_Decref(v18);
  std::string::_Tidy_deallocate((__int64)v23);
  v13[0] = *((Spectre::Engine::CpuProfiler **)this + 121);
  LODWORD(v13[1]) = 0;
  std::chrono::steady_clock::now(&v14);
  Spectre::Engine::CpuProfiler::RegisterCallbackTime(
    v13[0],
    (const struct Spectre::Engine::CpuProfiler::ScopedCallbackPerformanceTimer *)v13);
  *(_OWORD *)v13 = 0LL;
  *(_OWORD *)v12 = 0LL;
  Spectre::Engine::Engine::InvokeCallback((__int64)this, 0, (__int64)v12, v13);
  Spectre::Engine::CpuProfilerScope::~CpuProfilerScope((Spectre::Engine::CpuProfilerScope *)v19);
  Spectre::Utils::PerformanceScope::~PerformanceScope((Spectre::Utils::PerformanceScope *)v21);
  v7 = (__int64 *)*((_QWORD *)this + 89);
  v8 = (__int64 *)*((_QWORD *)this + 88);
  if ( v8 != v7 )
  {
    Input = Spectre::Engine::FrameData::GetInput((Spectre::Engine::Engine *)((char *)this + 368));
    do
    {
      FrameInputData = Spectre::Engine::Input::GetFrameInputData(Input);
      v23[0] = *(_OWORD *)FrameInputData;
      v23[1] = *((_OWORD *)FrameInputData + 1);
      v23[2] = *((_OWORD *)FrameInputData + 2);
      v11 = Spectre::Engine::Input::GetFrameInputData((Spectre::Engine::Engine *)((char *)this + 200));
      if ( Spectre::Engine::FrameInputData::HasAnyDefaultPointerState(v11)
        && !Spectre::Engine::FrameInputData::HasAnyDefaultPointerState((Spectre::Engine::FrameInputData *)v23) )
      {
        Spectre::Engine::Input::UpdateMouseEvent(
          (Spectre::Engine::Engine *)((char *)this + 200),
          (const struct Spectre::Engine::PointerEvent *)v23);
      }
      Spectre::Engine::FrameData::SetInput(
        (Spectre::Engine::Engine *)((char *)this + 368),
        (Spectre::Engine::Engine *)((char *)this + 200));
      Spectre::Engine::Engine::UpdateScene((__int64)this, v8);
      v8 += 2;
    }
    while ( v8 != v7 );
  }
  Spectre::Engine::Input::Update((Spectre::Engine::Engine *)((char *)this + 200));
  Spectre::Engine::CpuProfilerScope::~CpuProfilerScope((Spectre::Engine::CpuProfilerScope *)v20);
  Spectre::Utils::PerformanceScope::~PerformanceScope((Spectre::Utils::PerformanceScope *)v22);
}
