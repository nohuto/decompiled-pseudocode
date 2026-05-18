/*
 * XREFs of ?clear@?$vector@UMarker@CpuProfiler@Engine@Spectre@@V?$allocator@UMarker@CpuProfiler@Engine@Spectre@@@std@@@std@@QEAAXXZ @ 0x1800A05C8
 * Callers:
 *     ?BeginFrame@CpuProfiler@Engine@Spectre@@QEAAX_K@Z @ 0x1800A01D4 (-BeginFrame@CpuProfiler@Engine@Spectre@@QEAAX_K@Z.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@UMarker@CpuProfiler@Engine@Spectre@@@std@@@std@@YAXPEAUMarker@CpuProfiler@Engine@Spectre@@QEAU1234@AEAV?$allocator@UMarker@CpuProfiler@Engine@Spectre@@@0@@Z @ 0x18002E230 (--$_Destroy_range@V-$allocator@UMarker@CpuProfiler@Engine@Spectre@@@std@@@std@@YAXPEAUMarker@Cpu.c)
 */

__int64 __fastcall std::vector<Spectre::Engine::CpuProfiler::Marker>::clear(__int64 *a1)
{
  __int64 result; // rax

  std::_Destroy_range<std::allocator<Spectre::Engine::CpuProfiler::Marker>>(*a1, a1[1]);
  result = *a1;
  a1[1] = *a1;
  return result;
}
