/*
 * XREFs of ?_Calculate_growth@?$vector@UMarker@CpuProfiler@Engine@Spectre@@V?$allocator@UMarker@CpuProfiler@Engine@Spectre@@@std@@@std@@AEBA_K_K@Z @ 0x1800A048C
 * Callers:
 *     ??$_Emplace_reallocate@W4Type@Marker@CpuProfiler@Engine@Spectre@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@7@V897@@?$vector@UMarker@CpuProfiler@Engine@Spectre@@V?$allocator@UMarker@CpuProfiler@Engine@Spectre@@@std@@@std@@QEAAPEAUMarker@CpuProfiler@Engine@Spectre@@QEAU2345@$$QEAW4Type@2345@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@$$QEAV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@1@3@Z @ 0x18009FF38 (--$_Emplace_reallocate@W4Type@Marker@CpuProfiler@Engine@Spectre@@AEBV-$basic_string@DU-$char_tra.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::vector<Spectre::Engine::CpuProfiler::Marker>::_Calculate_growth(
        _QWORD *a1,
        unsigned __int64 a2)
{
  unsigned __int64 v2; // r8
  __int64 result; // rax
  unsigned __int64 v4; // r9

  v2 = 0x6DB6DB6DB6DB6DB7LL * ((__int64)(a1[2] - *a1) >> 3);
  result = 0x492492492492492LL;
  v4 = v2 >> 1;
  if ( v2 <= 0x492492492492492LL - (v2 >> 1) )
  {
    result = v4 + v2;
    if ( v4 + v2 < a2 )
      return a2;
  }
  return result;
}
