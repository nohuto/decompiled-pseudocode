/*
 * XREFs of ??1GpuProfilingGrapher@Engine@Spectre@@UEAA@XZ @ 0x180074054
 * Callers:
 *     ??_EGpuProfilingGrapher@Engine@Spectre@@UEAAPEAXI@Z @ 0x18002BB60 (--_EGpuProfilingGrapher@Engine@Spectre@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Tidy@?$vector@UResult@GpuProfilerFrame@Engine@Spectre@@V?$allocator@UResult@GpuProfilerFrame@Engine@Spectre@@@std@@@std@@AEAAXXZ @ 0x18002D504 (-_Tidy@-$vector@UResult@GpuProfilerFrame@Engine@Spectre@@V-$allocator@UResult@GpuProfilerFrame@E.c)
 */

void __fastcall Spectre::Engine::GpuProfilingGrapher::~GpuProfilingGrapher(Spectre::Engine::GpuProfilingGrapher *this)
{
  *(_QWORD *)this = &Spectre::Engine::GpuProfilingGrapher::`vftable';
  std::vector<Spectre::Engine::GpuProfilerFrame::Result>::_Tidy((__int64)this + 8);
  *(_QWORD *)this = &Spectre::Engine::IGpuProfilingGrapher::`vftable';
}
