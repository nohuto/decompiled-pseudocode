/*
 * XREFs of ?_Change_array@?$vector@UResult@GpuProfilerFrame@Engine@Spectre@@V?$allocator@UResult@GpuProfilerFrame@Engine@Spectre@@@std@@@std@@AEAAXQEAUResult@GpuProfilerFrame@Engine@Spectre@@_K1@Z @ 0x18002D400
 * Callers:
 *     ??$_Emplace_reallocate@AEBUResult@GpuProfilerFrame@Engine@Spectre@@@?$vector@UResult@GpuProfilerFrame@Engine@Spectre@@V?$allocator@UResult@GpuProfilerFrame@Engine@Spectre@@@std@@@std@@QEAAPEAUResult@GpuProfilerFrame@Engine@Spectre@@QEAU2345@AEBU2345@@Z @ 0x18002AB84 (--$_Emplace_reallocate@AEBUResult@GpuProfilerFrame@Engine@Spectre@@@-$vector@UResult@GpuProfiler.c)
 *     ??$_Emplace_reallocate@UResult@GpuProfilerFrame@Engine@Spectre@@@?$vector@UResult@GpuProfilerFrame@Engine@Spectre@@V?$allocator@UResult@GpuProfilerFrame@Engine@Spectre@@@std@@@std@@QEAAPEAUResult@GpuProfilerFrame@Engine@Spectre@@QEAU2345@$$QEAU2345@@Z @ 0x18002ACA8 (--$_Emplace_reallocate@UResult@GpuProfilerFrame@Engine@Spectre@@@-$vector@UResult@GpuProfilerFra.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@UResult@GpuProfilerFrame@Engine@Spectre@@V?$allocator@UResult@GpuProfilerFrame@Engine@Spectre@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x180073EEC (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@UResult@GpuProfilerFrame@Engine@Spectre@@V.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800100E8 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@UResult@GpuProfilerFrame@Engine@Spectre@@@std@@@std@@YAXPEAUResult@GpuProfilerFrame@Engine@Spectre@@QEAU1234@AEAV?$allocator@UResult@GpuProfilerFrame@Engine@Spectre@@@0@@Z @ 0x18002AA18 (--$_Destroy_range@V-$allocator@UResult@GpuProfilerFrame@Engine@Spectre@@@std@@@std@@YAXPEAUResul.c)
 */

__int64 __fastcall std::vector<Spectre::Engine::GpuProfilerFrame::Result>::_Change_array(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  void *v6; // rcx
  __int64 result; // rax

  v6 = *(void **)a1;
  if ( v6 )
  {
    std::_Destroy_range<std::allocator<Spectre::Engine::GpuProfilerFrame::Result>>((__int64)v6, *(_QWORD *)(a1 + 8));
    std::_Deallocate<16,0>(*(void **)a1, 8 * ((__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3));
  }
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 152 * a3;
  result = a2 + 152 * a4;
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
