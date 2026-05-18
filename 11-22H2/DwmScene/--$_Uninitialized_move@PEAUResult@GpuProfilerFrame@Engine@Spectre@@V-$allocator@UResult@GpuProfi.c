/*
 * XREFs of ??$_Uninitialized_move@PEAUResult@GpuProfilerFrame@Engine@Spectre@@V?$allocator@UResult@GpuProfilerFrame@Engine@Spectre@@@std@@@std@@YAPEAUResult@GpuProfilerFrame@Engine@Spectre@@QEAU1234@0PEAU1234@AEAV?$allocator@UResult@GpuProfilerFrame@Engine@Spectre@@@0@@Z @ 0x18002AFD0
 * Callers:
 *     ??$_Emplace_reallocate@AEBUResult@GpuProfilerFrame@Engine@Spectre@@@?$vector@UResult@GpuProfilerFrame@Engine@Spectre@@V?$allocator@UResult@GpuProfilerFrame@Engine@Spectre@@@std@@@std@@QEAAPEAUResult@GpuProfilerFrame@Engine@Spectre@@QEAU2345@AEBU2345@@Z @ 0x18002AB84 (--$_Emplace_reallocate@AEBUResult@GpuProfilerFrame@Engine@Spectre@@@-$vector@UResult@GpuProfiler.c)
 *     ??$_Emplace_reallocate@UResult@GpuProfilerFrame@Engine@Spectre@@@?$vector@UResult@GpuProfilerFrame@Engine@Spectre@@V?$allocator@UResult@GpuProfilerFrame@Engine@Spectre@@@std@@@std@@QEAAPEAUResult@GpuProfilerFrame@Engine@Spectre@@QEAU2345@$$QEAU2345@@Z @ 0x18002ACA8 (--$_Emplace_reallocate@UResult@GpuProfilerFrame@Engine@Spectre@@@-$vector@UResult@GpuProfilerFra.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@UResult@GpuProfilerFrame@Engine@Spectre@@@std@@@std@@YAXPEAUResult@GpuProfilerFrame@Engine@Spectre@@QEAU1234@AEAV?$allocator@UResult@GpuProfilerFrame@Engine@Spectre@@@0@@Z @ 0x18002AA18 (--$_Destroy_range@V-$allocator@UResult@GpuProfilerFrame@Engine@Spectre@@@std@@@std@@YAXPEAUResul.c)
 *     ??$construct@UResult@GpuProfilerFrame@Engine@Spectre@@U1234@@?$_Default_allocator_traits@V?$allocator@UResult@GpuProfilerFrame@Engine@Spectre@@@std@@@std@@SAXAEAV?$allocator@UResult@GpuProfilerFrame@Engine@Spectre@@@1@QEAUResult@GpuProfilerFrame@Engine@Spectre@@$$QEAU3456@@Z @ 0x18002B044 (--$construct@UResult@GpuProfilerFrame@Engine@Spectre@@U1234@@-$_Default_allocator_traits@V-$allo.c)
 */

__int64 __fastcall std::_Uninitialized_move<Spectre::Engine::GpuProfilerFrame::Result *>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 i; // rdi

  for ( i = a1; i != a2; i += 152LL )
  {
    std::_Default_allocator_traits<std::allocator<Spectre::Engine::GpuProfilerFrame::Result>>::construct<Spectre::Engine::GpuProfilerFrame::Result,Spectre::Engine::GpuProfilerFrame::Result>(
      a1,
      a3,
      i);
    a3 += 152LL;
  }
  std::_Destroy_range<std::allocator<Spectre::Engine::GpuProfilerFrame::Result>>(a3, a3);
  return a3;
}
