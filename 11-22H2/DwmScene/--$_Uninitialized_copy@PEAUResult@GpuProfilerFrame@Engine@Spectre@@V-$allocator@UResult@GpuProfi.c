/*
 * XREFs of ??$_Uninitialized_copy@PEAUResult@GpuProfilerFrame@Engine@Spectre@@V?$allocator@UResult@GpuProfilerFrame@Engine@Spectre@@@std@@@std@@YAPEAUResult@GpuProfilerFrame@Engine@Spectre@@QEAU1234@0PEAU1234@AEAV?$allocator@UResult@GpuProfilerFrame@Engine@Spectre@@@0@@Z @ 0x18002AF5C
 * Callers:
 *     ??$_Emplace_reallocate@AEBUResult@GpuProfilerFrame@Engine@Spectre@@@?$vector@UResult@GpuProfilerFrame@Engine@Spectre@@V?$allocator@UResult@GpuProfilerFrame@Engine@Spectre@@@std@@@std@@QEAAPEAUResult@GpuProfilerFrame@Engine@Spectre@@QEAU2345@AEBU2345@@Z @ 0x18002AB84 (--$_Emplace_reallocate@AEBUResult@GpuProfilerFrame@Engine@Spectre@@@-$vector@UResult@GpuProfiler.c)
 *     ??$_Emplace_reallocate@UResult@GpuProfilerFrame@Engine@Spectre@@@?$vector@UResult@GpuProfilerFrame@Engine@Spectre@@V?$allocator@UResult@GpuProfilerFrame@Engine@Spectre@@@std@@@std@@QEAAPEAUResult@GpuProfilerFrame@Engine@Spectre@@QEAU2345@$$QEAU2345@@Z @ 0x18002ACA8 (--$_Emplace_reallocate@UResult@GpuProfilerFrame@Engine@Spectre@@@-$vector@UResult@GpuProfilerFra.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@UResult@GpuProfilerFrame@Engine@Spectre@@V?$allocator@UResult@GpuProfilerFrame@Engine@Spectre@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x180073EEC (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@UResult@GpuProfilerFrame@Engine@Spectre@@V.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@UResult@GpuProfilerFrame@Engine@Spectre@@@std@@@std@@YAXPEAUResult@GpuProfilerFrame@Engine@Spectre@@QEAU1234@AEAV?$allocator@UResult@GpuProfilerFrame@Engine@Spectre@@@0@@Z @ 0x18002AA18 (--$_Destroy_range@V-$allocator@UResult@GpuProfilerFrame@Engine@Spectre@@@std@@@std@@YAXPEAUResul.c)
 *     ??0Result@GpuProfilerFrame@Engine@Spectre@@QEAA@AEBU0123@@Z @ 0x18002B6B0 (--0Result@GpuProfilerFrame@Engine@Spectre@@QEAA@AEBU0123@@Z.c)
 */

// Hidden C++ exception states: #wind=1
Spectre::Engine::GpuProfilerFrame::Result *__fastcall std::_Uninitialized_copy<Spectre::Engine::GpuProfilerFrame::Result *>(
        struct Spectre::Engine::GpuProfilerFrame::Result *a1,
        const struct Spectre::Engine::GpuProfilerFrame::Result *a2,
        Spectre::Engine::GpuProfilerFrame::Result *a3)
{
  const struct Spectre::Engine::GpuProfilerFrame::Result *i; // rdi

  for ( i = a1; i != a2; i = (const struct Spectre::Engine::GpuProfilerFrame::Result *)((char *)i + 152) )
  {
    Spectre::Engine::GpuProfilerFrame::Result::Result(a3, i);
    a3 = (Spectre::Engine::GpuProfilerFrame::Result *)((char *)a3 + 152);
  }
  std::_Destroy_range<std::allocator<Spectre::Engine::GpuProfilerFrame::Result>>((__int64)a3, (__int64)a3);
  return a3;
}
