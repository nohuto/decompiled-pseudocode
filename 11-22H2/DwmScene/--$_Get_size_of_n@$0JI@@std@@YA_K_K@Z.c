/*
 * XREFs of ??$_Get_size_of_n@$0JI@@std@@YA_K_K@Z @ 0x18002AF30
 * Callers:
 *     ??$_Emplace_reallocate@AEBUResult@GpuProfilerFrame@Engine@Spectre@@@?$vector@UResult@GpuProfilerFrame@Engine@Spectre@@V?$allocator@UResult@GpuProfilerFrame@Engine@Spectre@@@std@@@std@@QEAAPEAUResult@GpuProfilerFrame@Engine@Spectre@@QEAU2345@AEBU2345@@Z @ 0x18002AB84 (--$_Emplace_reallocate@AEBUResult@GpuProfilerFrame@Engine@Spectre@@@-$vector@UResult@GpuProfiler.c)
 *     ??$_Emplace_reallocate@UResult@GpuProfilerFrame@Engine@Spectre@@@?$vector@UResult@GpuProfilerFrame@Engine@Spectre@@V?$allocator@UResult@GpuProfilerFrame@Engine@Spectre@@@std@@@std@@QEAAPEAUResult@GpuProfilerFrame@Engine@Spectre@@QEAU2345@$$QEAU2345@@Z @ 0x18002ACA8 (--$_Emplace_reallocate@UResult@GpuProfilerFrame@Engine@Spectre@@@-$vector@UResult@GpuProfilerFra.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@UResult@GpuProfilerFrame@Engine@Spectre@@V?$allocator@UResult@GpuProfilerFrame@Engine@Spectre@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x180073EEC (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@UResult@GpuProfilerFrame@Engine@Spectre@@V.c)
 * Callees:
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x180011AC4 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 */

__int64 __fastcall std::_Get_size_of_n<152>(unsigned __int64 a1)
{
  if ( a1 > 0x1AF286BCA1AF286LL )
    std::_Throw_bad_array_new_length();
  return 152 * a1;
}
