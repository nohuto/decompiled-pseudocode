/*
 * XREFs of ??4?$vector@UResult@GpuProfilerFrame@Engine@Spectre@@V?$allocator@UResult@GpuProfilerFrame@Engine@Spectre@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18002BA4C
 * Callers:
 *     ?UpdateGpuProfiler@RenderOutput@Engine@Spectre@@UEAAXH@Z @ 0x18002CDC0 (-UpdateGpuProfiler@RenderOutput@Engine@Spectre@@UEAAXH@Z.c)
 * Callees:
 *     ?_Tidy@?$vector@UResult@GpuProfilerFrame@Engine@Spectre@@V?$allocator@UResult@GpuProfilerFrame@Engine@Spectre@@@std@@@std@@AEAAXXZ @ 0x18002D504 (-_Tidy@-$vector@UResult@GpuProfilerFrame@Engine@Spectre@@V-$allocator@UResult@GpuProfilerFrame@E.c)
 */

_QWORD *__fastcall std::vector<Spectre::Engine::GpuProfilerFrame::Result>::operator=(_QWORD *a1, _QWORD *a2)
{
  if ( a1 != a2 )
  {
    std::vector<Spectre::Engine::GpuProfilerFrame::Result>::_Tidy(a1);
    *a1 = *a2;
    a1[1] = a2[1];
    a1[2] = a2[2];
    *a2 = 0LL;
    a2[1] = 0LL;
    a2[2] = 0LL;
  }
  return a1;
}
