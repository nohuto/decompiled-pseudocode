/*
 * XREFs of ?now@steady_clock@chrono@std@@SA?AV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@23@XZ @ 0x180011CA0
 * Callers:
 *     ?Present@RenderOutputD3D11Gdi@D3D11@Engine@Spectre@@UEAAXAEAV?$unique_lock@VMutex@Engine@Spectre@@@std@@00@Z @ 0x180011560 (-Present@RenderOutputD3D11Gdi@D3D11@Engine@Spectre@@UEAAXAEAV-$unique_lock@VMutex@Engine@Spectre.c)
 *     _anonymous_namespace_::GetMSCountSinceStartAccurate @ 0x18001D618 (_anonymous_namespace_--GetMSCountSinceStartAccurate.c)
 *     ?GetTickCount@DefaultTimeProvider@Utils@Spectre@@UEBA?AV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@std@@XZ @ 0x180020820 (-GetTickCount@DefaultTimeProvider@Utils@Spectre@@UEBA-AV-$time_point@Usteady_clock@chrono@std@@V.c)
 *     ??0RenderDevice@Engine@Spectre@@IEAA@PEAV112@V?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@std@@@Z @ 0x180025518 (--0RenderDevice@Engine@Spectre@@IEAA@PEAV112@V-$shared_ptr@VPerformanceLogger@Utils@Spectre@@@st.c)
 *     ?BeginFrame@RenderDevice@Engine@Spectre@@UEAAXXZ @ 0x180025F80 (-BeginFrame@RenderDevice@Engine@Spectre@@UEAAXXZ.c)
 *     ?InitializeRenderer@RenderDevice@Engine@Spectre@@MEAAXXZ @ 0x180026C70 (-InitializeRenderer@RenderDevice@Engine@Spectre@@MEAAXXZ.c)
 *     ?NotifyAttachComplete@RenderDevice@Engine@Spectre@@IEAAXXZ @ 0x180026D6C (-NotifyAttachComplete@RenderDevice@Engine@Spectre@@IEAAXXZ.c)
 *     ?OnPresentFrameComplete@RenderDevice@Engine@Spectre@@MEAAXXZ @ 0x180026DD0 (-OnPresentFrameComplete@RenderDevice@Engine@Spectre@@MEAAXXZ.c)
 *     ??0Engine@0Spectre@@IEAA@W4ThreadingMode@Lockable@01@V?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@std@@V?$shared_ptr@VITelemetryManager@Utils@Spectre@@@5@V?$shared_ptr@VITelemetryTraceLogger@Utils@Spectre@@@5@@Z @ 0x180030FC8 (--0Engine@0Spectre@@IEAA@W4ThreadingMode@Lockable@01@V-$shared_ptr@VPerformanceLogger@Utils@Spec.c)
 *     ?Now@HighPerfClock@Tweening@Utils@Spectre@@UEAA?AV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@std@@XZ @ 0x180035240 (-Now@HighPerfClock@Tweening@Utils@Spectre@@UEAA-AV-$time_point@Usteady_clock@chrono@std@@V-$dura.c)
 *     ?PostRenderScene@Engine@1Spectre@@MEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@AEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@4@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@4@@Z @ 0x180035470 (-PostRenderScene@Engine@1Spectre@@MEAAXAEBV-$shared_ptr@VScene@Engine@Spectre@@@std@@AEBV-$share.c)
 *     ?PresentFrame@Engine@1Spectre@@IEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@4@AEAV?$unique_lock@VMutex@Engine@Spectre@@@4@22@Z @ 0x18003565C (-PresentFrame@Engine@1Spectre@@IEAAXAEBV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AEBV-$s.c)
 *     ?RenderContent@Engine@1Spectre@@IEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@AEBV?$vector@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@@2@@4@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@4@@Z @ 0x180035E98 (-RenderContent@Engine@1Spectre@@IEAAXAEBV-$shared_ptr@VScene@Engine@Spectre@@@std@@AEBV-$vector@.c)
 *     ?SendShutdownOrSuspendTelemetry@Engine@1Spectre@@IEAAX_N@Z @ 0x180036A54 (-SendShutdownOrSuspendTelemetry@Engine@1Spectre@@IEAAX_N@Z.c)
 *     ?UpdatePerformanceStats@Engine@1Spectre@@IEAAXXZ @ 0x1800374F8 (-UpdatePerformanceStats@Engine@1Spectre@@IEAAXXZ.c)
 *     ?UpdateScene@Engine@1Spectre@@IEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@@Z @ 0x1800375F8 (-UpdateScene@Engine@1Spectre@@IEAAXAEBV-$shared_ptr@VScene@Engine@Spectre@@@std@@@Z.c)
 *     ?UpdateScenes@Engine@1Spectre@@MEAAXXZ @ 0x180037A80 (-UpdateScenes@Engine@1Spectre@@MEAAXXZ.c)
 *     ?RenderInternal@Display@Engine@Spectre@@AEAAXXZ @ 0x180057BA4 (-RenderInternal@Display@Engine@Spectre@@AEAAXXZ.c)
 *     ?UpdateMouseEvent@Input@Engine@Spectre@@QEAAXAEBUPointerEvent@23@@Z @ 0x180074844 (-UpdateMouseEvent@Input@Engine@Spectre@@QEAAXAEBUPointerEvent@23@@Z.c)
 *     ?BeginFrame@CpuProfiler@Engine@Spectre@@QEAAX_K@Z @ 0x1800A01D4 (-BeginFrame@CpuProfiler@Engine@Spectre@@QEAAX_K@Z.c)
 *     ?BeginTimeSpanMarker@CpuProfiler@Engine@Spectre@@QEAA_KAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x1800A0224 (-BeginTimeSpanMarker@CpuProfiler@Engine@Spectre@@QEAA_KAEBV-$basic_string@DU-$char_traits@D@std@.c)
 *     ?EndTimeSpanMarker@CpuProfiler@Engine@Spectre@@QEAAX_K@Z @ 0x1800A02C0 (-EndTimeSpanMarker@CpuProfiler@Engine@Spectre@@QEAAX_K@Z.c)
 *     ?RegisterCallbackTime@CpuProfiler@Engine@Spectre@@QEAAXAEBVScopedCallbackPerformanceTimer@123@@Z @ 0x1800A03D0 (-RegisterCallbackTime@CpuProfiler@Engine@Spectre@@QEAAXAEBVScopedCallbackPerformanceTimer@123@@Z.c)
 *     ?WaitPendingFrames@FramesData@GpuProfiler@Engine@Spectre@@QEAAXI@Z @ 0x1800A16E8 (-WaitPendingFrames@FramesData@GpuProfiler@Engine@Spectre@@QEAAXI@Z.c)
 *     ?Present@RenderOutputD3D11@D3D11@Engine@Spectre@@UEAAXAEAV?$unique_lock@VMutex@Engine@Spectre@@@std@@00@Z @ 0x1800CA290 (-Present@RenderOutputD3D11@D3D11@Engine@Spectre@@UEAAXAEAV-$unique_lock@VMutex@Engine@Spectre@@@.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::chrono::steady_clock::now(_QWORD *a1)
{
  __int64 perf_frequency; // rbx
  __int64 perf_counter; // r9
  _QWORD *result; // rax

  perf_frequency = _Query_perf_frequency();
  perf_counter = _Query_perf_counter();
  result = a1;
  *a1 = 1000000000 * (perf_counter / perf_frequency) + 1000000000 * (perf_counter % perf_frequency) / perf_frequency;
  return result;
}
