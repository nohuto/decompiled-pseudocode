/*
 * XREFs of ?unlock@Mutex@Engine@Spectre@@QEAAXXZ @ 0x18002A5AC
 * Callers:
 *     ??1?$unique_lock@VMutex@Engine@Spectre@@@std@@QEAA@XZ @ 0x180010F54 (--1-$unique_lock@VMutex@Engine@Spectre@@@std@@QEAA@XZ.c)
 *     ??4?$unique_lock@VMutex@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180017C90 (--4-$unique_lock@VMutex@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??1?$lock_guard@VMutex@Engine@Spectre@@@std@@QEAA@XZ @ 0x180025A50 (--1-$lock_guard@VMutex@Engine@Spectre@@@std@@QEAA@XZ.c)
 *     ?GetQuery@QueryPool@RenderDevice@Engine@Spectre@@UEAA?AV?$shared_ptr@VGpuQuery@Engine@Spectre@@@std@@W4QueryType@GpuQuery@34@@Z @ 0x1800266A0 (-GetQuery@QueryPool@RenderDevice@Engine@Spectre@@UEAA-AV-$shared_ptr@VGpuQuery@Engine@Spectre@@@.c)
 *     ?ReleaseQuery@QueryPool@RenderDevice@Engine@Spectre@@UEAAX$$QEAV?$shared_ptr@VGpuQuery@Engine@Spectre@@@std@@@Z @ 0x180026FE0 (-ReleaseQuery@QueryPool@RenderDevice@Engine@Spectre@@UEAAX$$QEAV-$shared_ptr@VGpuQuery@Engine@Sp.c)
 *     ?unlock@?$unique_lock@VMutex@Engine@Spectre@@@std@@QEAAXXZ @ 0x180027A80 (-unlock@-$unique_lock@VMutex@Engine@Spectre@@@std@@QEAAXXZ.c)
 *     ?BeginFrame@CpuProfiler@Engine@Spectre@@QEAAX_K@Z @ 0x1800A01D4 (-BeginFrame@CpuProfiler@Engine@Spectre@@QEAAX_K@Z.c)
 *     ?BeginTimeSpanMarker@CpuProfiler@Engine@Spectre@@QEAA_KAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x1800A0224 (-BeginTimeSpanMarker@CpuProfiler@Engine@Spectre@@QEAA_KAEBV-$basic_string@DU-$char_traits@D@std@.c)
 *     ?EndTimeSpanMarker@CpuProfiler@Engine@Spectre@@QEAAX_K@Z @ 0x1800A02C0 (-EndTimeSpanMarker@CpuProfiler@Engine@Spectre@@QEAAX_K@Z.c)
 *     ?BeginFrame@FramesData@GpuProfiler@Engine@Spectre@@QEAA_NV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@_K@Z @ 0x1800A0E14 (-BeginFrame@FramesData@GpuProfiler@Engine@Spectre@@QEAA_NV-$shared_ptr@VCommandList@Engine@Spect.c)
 *     ?BeginTimeSpanMarker@FramesData@GpuProfiler@Engine@Spectre@@QEAA?AV?$weak_ptr@VITimeSpanMarker@GpuProfilerFrame@Engine@Spectre@@@std@@_KAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@6@AEBV?$shared_ptr@VCommandList@Engine@Spectre@@@6@@Z @ 0x1800A0F9C (-BeginTimeSpanMarker@FramesData@GpuProfiler@Engine@Spectre@@QEAA-AV-$weak_ptr@VITimeSpanMarker@G.c)
 *     ?Clear@FramesData@GpuProfiler@Engine@Spectre@@QEAAXXZ @ 0x1800A1110 (-Clear@FramesData@GpuProfiler@Engine@Spectre@@QEAAXXZ.c)
 *     ?EndFrame@FramesData@GpuProfiler@Engine@Spectre@@QEAA_N_K@Z @ 0x1800A11C8 (-EndFrame@FramesData@GpuProfiler@Engine@Spectre@@QEAA_N_K@Z.c)
 *     ?GetResultForFrame@FramesData@GpuProfiler@Engine@Spectre@@QEAA?AW4FrameQueryResult@234@_KAEAUResult@GpuProfilerFrame@34@@Z @ 0x1800A128C (-GetResultForFrame@FramesData@GpuProfiler@Engine@Spectre@@QEAA-AW4FrameQueryResult@234@_KAEAURes.c)
 *     ?PresentFrame@FramesData@GpuProfiler@Engine@Spectre@@QEAA_N_K@Z @ 0x1800A1430 (-PresentFrame@FramesData@GpuProfiler@Engine@Spectre@@QEAA_N_K@Z.c)
 *     ?StampMarker@FramesData@GpuProfiler@Engine@Spectre@@QEAA_N_KAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$shared_ptr@VCommandList@Engine@Spectre@@@6@@Z @ 0x1800A1500 (-StampMarker@FramesData@GpuProfiler@Engine@Spectre@@QEAA_N_KAEBV-$basic_string@DU-$char_traits@D.c)
 *     ?Update@FramesData@GpuProfiler@Engine@Spectre@@QEAAXXZ @ 0x1800A1604 (-Update@FramesData@GpuProfiler@Engine@Spectre@@QEAAXXZ.c)
 *     ?WaitPendingFrames@FramesData@GpuProfiler@Engine@Spectre@@QEAAXI@Z @ 0x1800A16E8 (-WaitPendingFrames@FramesData@GpuProfiler@Engine@Spectre@@QEAAXI@Z.c)
 *     ??0MarkerQueryData@GpuProfilerFrame@Engine@Spectre@@QEAA@$$QEAV0123@@Z @ 0x1800A2640 (--0MarkerQueryData@GpuProfilerFrame@Engine@Spectre@@QEAA@$$QEAV0123@@Z.c)
 *     ?EndTimeSpan@MarkerQueryData@GpuProfilerFrame@Engine@Spectre@@UEAAXXZ @ 0x1800A2E40 (-EndTimeSpan@MarkerQueryData@GpuProfilerFrame@Engine@Spectre@@UEAAXXZ.c)
 *     ?GetResult@MarkerQueryData@GpuProfilerFrame@Engine@Spectre@@QEAA?AUMarkerResult@234@N@Z @ 0x1800A36E4 (-GetResult@MarkerQueryData@GpuProfilerFrame@Engine@Spectre@@QEAA-AUMarkerResult@234@N@Z.c)
 *     ?IsResultAvailable@MarkerQueryData@GpuProfilerFrame@Engine@Spectre@@QEAA_NXZ @ 0x1800A37C0 (-IsResultAvailable@MarkerQueryData@GpuProfilerFrame@Engine@Spectre@@QEAA_NXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall Spectre::Engine::Mutex::unlock(Spectre::Utils::SharedMutex *this)
{
  Spectre::Engine::Mutex::doUnlock<&public: void Spectre::Utils::SharedMutex::unlock(void)>(this);
}
