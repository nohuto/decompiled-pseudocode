/*
 * XREFs of ??1?$ProfileStatsRenderer@N$0BE@@Engine@Spectre@@QEAA@XZ @ 0x18002B7AC
 * Callers:
 *     _Spectre::Engine::GpuProfileStatsRenderer::GpuProfileStatsRenderer_::_1_::dtor$0 @ 0x1800E8694 (_Spectre--Engine--GpuProfileStatsRenderer--GpuProfileStatsRenderer_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Spectre::Engine::ProfileStatsRenderer<double,20>::~ProfileStatsRenderer<double,20>(__int64 a1)
{
  return std::_Tree<std::_Tmap_traits<unsigned __int64,Spectre::Engine::StatsMap<double,20,0>::StatsEntry,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,Spectre::Engine::StatsMap<double,20,0>::StatsEntry>>,0>>::~_Tree<std::_Tmap_traits<unsigned __int64,Spectre::Engine::StatsMap<double,20,0>::StatsEntry,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,Spectre::Engine::StatsMap<double,20,0>::StatsEntry>>,0>>(a1 + 16);
}
