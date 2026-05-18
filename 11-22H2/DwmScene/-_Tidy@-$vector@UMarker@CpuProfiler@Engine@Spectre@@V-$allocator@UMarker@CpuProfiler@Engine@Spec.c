/*
 * XREFs of ?_Tidy@?$vector@UMarker@CpuProfiler@Engine@Spectre@@V?$allocator@UMarker@CpuProfiler@Engine@Spectre@@@std@@@std@@AEAAXXZ @ 0x1800384EC
 * Callers:
 *     ??1CpuProfiler@Engine@Spectre@@QEAA@XZ @ 0x180031C30 (--1CpuProfiler@Engine@Spectre@@QEAA@XZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800100E8 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@UMarker@CpuProfiler@Engine@Spectre@@@std@@@std@@YAXPEAUMarker@CpuProfiler@Engine@Spectre@@QEAU1234@AEAV?$allocator@UMarker@CpuProfiler@Engine@Spectre@@@0@@Z @ 0x18002E230 (--$_Destroy_range@V-$allocator@UMarker@CpuProfiler@Engine@Spectre@@@std@@@std@@YAXPEAUMarker@Cpu.c)
 */

void __fastcall std::vector<Spectre::Engine::CpuProfiler::Marker>::_Tidy(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)a1;
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<Spectre::Engine::CpuProfiler::Marker>>((__int64)v2, *(_QWORD *)(a1 + 8));
    std::_Deallocate<16,0>(*(void **)a1, 8 * ((__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3));
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
