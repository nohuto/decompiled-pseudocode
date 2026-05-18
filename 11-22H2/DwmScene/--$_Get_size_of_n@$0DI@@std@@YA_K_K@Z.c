/*
 * XREFs of ??$_Get_size_of_n@$0DI@@std@@YA_K_K@Z @ 0x180027BD4
 * Callers:
 *     ??$_Emplace_reallocate@AEBUPropertyInfo@ShaderPropertyLayout@Engine@Spectre@@@?$vector@UPropertyInfo@ShaderPropertyLayout@Engine@Spectre@@V?$allocator@UPropertyInfo@ShaderPropertyLayout@Engine@Spectre@@@std@@@std@@QEAAPEAUPropertyInfo@ShaderPropertyLayout@Engine@Spectre@@QEAU2345@AEBU2345@@Z @ 0x180081608 (--$_Emplace_reallocate@AEBUPropertyInfo@ShaderPropertyLayout@Engine@Spectre@@@-$vector@UProperty.c)
 *     ??$_Emplace_reallocate@W4Type@Marker@CpuProfiler@Engine@Spectre@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@7@V897@@?$vector@UMarker@CpuProfiler@Engine@Spectre@@V?$allocator@UMarker@CpuProfiler@Engine@Spectre@@@std@@@std@@QEAAPEAUMarker@CpuProfiler@Engine@Spectre@@QEAU2345@$$QEAW4Type@2345@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@$$QEAV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@1@3@Z @ 0x18009FF38 (--$_Emplace_reallocate@W4Type@Marker@CpuProfiler@Engine@Spectre@@AEBV-$basic_string@DU-$char_tra.c)
 * Callees:
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x180011AC4 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 */

__int64 __fastcall std::_Get_size_of_n<56>(unsigned __int64 a1)
{
  if ( a1 > 0x492492492492492LL )
    std::_Throw_bad_array_new_length();
  return 56 * a1;
}
