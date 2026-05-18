/*
 * XREFs of ??$_Destroy_range@V?$allocator@UMarker@CpuProfiler@Engine@Spectre@@@std@@@std@@YAXPEAUMarker@CpuProfiler@Engine@Spectre@@QEAU1234@AEAV?$allocator@UMarker@CpuProfiler@Engine@Spectre@@@0@@Z @ 0x18002E230
 * Callers:
 *     ?_Tidy@?$vector@UMarker@CpuProfiler@Engine@Spectre@@V?$allocator@UMarker@CpuProfiler@Engine@Spectre@@@std@@@std@@AEAAXXZ @ 0x1800384EC (-_Tidy@-$vector@UMarker@CpuProfiler@Engine@Spectre@@V-$allocator@UMarker@CpuProfiler@Engine@Spec.c)
 *     ??$_Uninitialized_move@PEAUMarker@CpuProfiler@Engine@Spectre@@V?$allocator@UMarker@CpuProfiler@Engine@Spectre@@@std@@@std@@YAPEAUMarker@CpuProfiler@Engine@Spectre@@QEAU1234@0PEAU1234@AEAV?$allocator@UMarker@CpuProfiler@Engine@Spectre@@@0@@Z @ 0x1800A0074 (--$_Uninitialized_move@PEAUMarker@CpuProfiler@Engine@Spectre@@V-$allocator@UMarker@CpuProfiler@E.c)
 *     ?_Change_array@?$vector@UMarker@CpuProfiler@Engine@Spectre@@V?$allocator@UMarker@CpuProfiler@Engine@Spectre@@@std@@@std@@AEAAXQEAUMarker@CpuProfiler@Engine@Spectre@@_K1@Z @ 0x1800A053C (-_Change_array@-$vector@UMarker@CpuProfiler@Engine@Spectre@@V-$allocator@UMarker@CpuProfiler@Eng.c)
 *     ?clear@?$vector@UMarker@CpuProfiler@Engine@Spectre@@V?$allocator@UMarker@CpuProfiler@Engine@Spectre@@@std@@@std@@QEAAXXZ @ 0x1800A05C8 (-clear@-$vector@UMarker@CpuProfiler@Engine@Spectre@@V-$allocator@UMarker@CpuProfiler@Engine@Spec.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x180011B24 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 */

void __fastcall std::_Destroy_range<std::allocator<Spectre::Engine::CpuProfiler::Marker>>(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      std::string::_Tidy_deallocate(v3 + 8);
      v3 += 56LL;
    }
    while ( v3 != a2 );
  }
}
