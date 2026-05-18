/*
 * XREFs of ??B?$atomic@_N@std@@QEBA_NXZ @ 0x1800573E0
 * Callers:
 *     ?RenderThread@Display@Engine@Spectre@@AEAAXXZ @ 0x1800581C0 (-RenderThread@Display@Engine@Spectre@@AEAAXXZ.c)
 *     ?WaitForPresent@Display@Engine@Spectre@@QEAAXXZ @ 0x1800583DC (-WaitForPresent@Display@Engine@Spectre@@QEAAXXZ.c)
 *     ?PreUpdateScene@ViewerEngine@Engine@Spectre@@MEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@@Z @ 0x180067850 (-PreUpdateScene@ViewerEngine@Engine@Spectre@@MEAAXAEBV-$shared_ptr@VScene@Engine@Spectre@@@std@@.c)
 *     ?UpdateModelFromConfiguration@ViewerEngine@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@_N@Z @ 0x18006BA5C (-UpdateModelFromConfiguration@ViewerEngine@Engine@Spectre@@AEAAXAEBV-$shared_ptr@VScene@Engine@S.c)
 *     ?BeginTimeSpanMarker@CpuProfiler@Engine@Spectre@@QEAA_KAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x1800A0224 (-BeginTimeSpanMarker@CpuProfiler@Engine@Spectre@@QEAA_KAEBV-$basic_string@DU-$char_traits@D@std@.c)
 *     ?EndTimeSpanMarker@CpuProfiler@Engine@Spectre@@QEAAX_K@Z @ 0x1800A02C0 (-EndTimeSpanMarker@CpuProfiler@Engine@Spectre@@QEAAX_K@Z.c)
 *     ?BeginFrame@GpuProfiler@Engine@Spectre@@QEAA_NV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@_K@Z @ 0x1800A0F1C (-BeginFrame@GpuProfiler@Engine@Spectre@@QEAA_NV-$shared_ptr@VCommandList@Engine@Spectre@@@std@@_.c)
 *     ?BeginTimeSpanMarker@GpuProfiler@Engine@Spectre@@QEAA?AV?$weak_ptr@VITimeSpanMarker@GpuProfilerFrame@Engine@Spectre@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@5@AEBV?$shared_ptr@VCommandList@Engine@Spectre@@@5@@Z @ 0x1800A10AC (-BeginTimeSpanMarker@GpuProfiler@Engine@Spectre@@QEAA-AV-$weak_ptr@VITimeSpanMarker@GpuProfilerF.c)
 *     ?EndFrame@GpuProfiler@Engine@Spectre@@QEAA_NXZ @ 0x1800A1254 (-EndFrame@GpuProfiler@Engine@Spectre@@QEAA_NXZ.c)
 *     ?GetResultForFrame@GpuProfiler@Engine@Spectre@@QEAA?AW4FrameQueryResult@123@_KAEAUResult@GpuProfilerFrame@23@@Z @ 0x1800A13A4 (-GetResultForFrame@GpuProfiler@Engine@Spectre@@QEAA-AW4FrameQueryResult@123@_KAEAUResult@GpuProf.c)
 *     ?PresentFrame@GpuProfiler@Engine@Spectre@@QEAA_NXZ @ 0x1800A14A0 (-PresentFrame@GpuProfiler@Engine@Spectre@@QEAA_NXZ.c)
 *     ?StampMarker@GpuProfiler@Engine@Spectre@@QEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$shared_ptr@VCommandList@Engine@Spectre@@@5@@Z @ 0x1800A15B8 (-StampMarker@GpuProfiler@Engine@Spectre@@QEAA_NAEBV-$basic_string@DU-$char_traits@D@std@@V-$allo.c)
 *     ?Update@TweenManager@Tweening@Utils@Spectre@@QEAAXXZ @ 0x1800E07B0 (-Update@TweenManager@Tweening@Utils@Spectre@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
char __fastcall std::atomic<bool>::operator bool(__int64 a1)
{
  return std::_Atomic_storage<bool,1>::load(a1);
}
