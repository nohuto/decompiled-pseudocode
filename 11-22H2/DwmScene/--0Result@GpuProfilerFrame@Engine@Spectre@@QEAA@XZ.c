/*
 * XREFs of ??0Result@GpuProfilerFrame@Engine@Spectre@@QEAA@XZ @ 0x18002B740
 * Callers:
 *     ?GetGpuProfilerResults@RenderOutput@Engine@Spectre@@IEAA?AV?$vector@UResult@GpuProfilerFrame@Engine@Spectre@@V?$allocator@UResult@GpuProfilerFrame@Engine@Spectre@@@std@@@std@@XZ @ 0x18002C040 (-GetGpuProfilerResults@RenderOutput@Engine@Spectre@@IEAA-AV-$vector@UResult@GpuProfilerFrame@Eng.c)
 *     ??$_Uninitialized_value_construct_n@V?$allocator@UResult@GpuProfilerFrame@Engine@Spectre@@@std@@@std@@YAPEAUResult@GpuProfilerFrame@Engine@Spectre@@PEAU1234@_KAEAV?$allocator@UResult@GpuProfilerFrame@Engine@Spectre@@@0@@Z @ 0x180073FA0 (--$_Uninitialized_value_construct_n@V-$allocator@UResult@GpuProfilerFrame@Engine@Spectre@@@std@@.c)
 *     ?Update@FramesData@GpuProfiler@Engine@Spectre@@QEAAXXZ @ 0x1800A1604 (-Update@FramesData@GpuProfiler@Engine@Spectre@@QEAAXXZ.c)
 *     ?WaitPendingFrames@FramesData@GpuProfiler@Engine@Spectre@@QEAAXI@Z @ 0x1800A16E8 (-WaitPendingFrames@FramesData@GpuProfiler@Engine@Spectre@@QEAAXI@Z.c)
 *     ??0GpuProfilerFrame@Engine@Spectre@@QEAA@AEAVRenderDevice@12@@Z @ 0x1800A2574 (--0GpuProfilerFrame@Engine@Spectre@@QEAA@AEAVRenderDevice@12@@Z.c)
 * Callees:
 *     ??0?$multimap@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UMarkerResult@GpuProfilerFrame@Engine@Spectre@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UMarkerResult@GpuProfilerFrame@Engine@Spectre@@@std@@@2@@std@@QEAA@XZ @ 0x18002B340 (--0-$multimap@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@UMarker_ea_18002B340.c)
 */

Spectre::Engine::GpuProfilerFrame::Result *__fastcall Spectre::Engine::GpuProfilerFrame::Result::Result(
        Spectre::Engine::GpuProfilerFrame::Result *this)
{
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_BYTE *)this + 120) = 0;
  *((_QWORD *)this + 16) = 0LL;
  std::multimap<std::string,Spectre::Engine::GpuProfilerFrame::MarkerResult>::multimap<std::string,Spectre::Engine::GpuProfilerFrame::MarkerResult>((_QWORD *)this + 17);
  return this;
}
