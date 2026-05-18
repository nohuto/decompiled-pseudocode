/*
 * XREFs of ??0GpuProfilingGrapher@Engine@Spectre@@QEAA@XZ @ 0x180074010
 * Callers:
 *     ??$make_shared@VGpuProfilingGrapher@Engine@Spectre@@$$V@std@@YA?AV?$shared_ptr@VGpuProfilingGrapher@Engine@Spectre@@@0@XZ @ 0x18002B1A8 (--$make_shared@VGpuProfilingGrapher@Engine@Spectre@@$$V@std@@YA-AV-$shared_ptr@VGpuProfilingGrap.c)
 * Callees:
 *     ??$_Resize@U_Value_init_tag@std@@@?$vector@UResult@GpuProfilerFrame@Engine@Spectre@@V?$allocator@UResult@GpuProfilerFrame@Engine@Spectre@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x180073E58 (--$_Resize@U_Value_init_tag@std@@@-$vector@UResult@GpuProfilerFrame@Engine@Spectre@@V-$allocator.c)
 */

// Hidden C++ exception states: #wind=2
Spectre::Engine::GpuProfilingGrapher *__fastcall Spectre::Engine::GpuProfilingGrapher::GpuProfilingGrapher(
        Spectre::Engine::GpuProfilingGrapher *this)
{
  __int64 *v2; // rcx

  *(_QWORD *)this = &Spectre::Engine::GpuProfilingGrapher::`vftable';
  v2 = (__int64 *)((char *)this + 8);
  *v2 = 0LL;
  v2[1] = 0LL;
  v2[2] = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  std::vector<Spectre::Engine::GpuProfilerFrame::Result>::_Resize<std::_Value_init_tag>(v2);
  return this;
}
