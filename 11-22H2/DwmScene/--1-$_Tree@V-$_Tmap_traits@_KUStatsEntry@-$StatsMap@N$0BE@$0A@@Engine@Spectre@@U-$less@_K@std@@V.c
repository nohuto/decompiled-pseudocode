/*
 * XREFs of ??1?$_Tree@V?$_Tmap_traits@_KUStatsEntry@?$StatsMap@N$0BE@$0A@@Engine@Spectre@@U?$less@_K@std@@V?$allocator@U?$pair@$$CB_KUStatsEntry@?$StatsMap@N$0BE@$0A@@Engine@Spectre@@@std@@@6@$0A@@std@@@std@@QEAA@XZ @ 0x18002B7E0
 * Callers:
 *     ??1?$ProfileStatsRenderer@N$0BE@@Engine@Spectre@@QEAA@XZ @ 0x18002B7AC (--1-$ProfileStatsRenderer@N$0BE@@Engine@Spectre@@QEAA@XZ.c)
 *     ??1GpuProfileStatsRenderer@Engine@Spectre@@QEAA@XZ @ 0x18002B8C4 (--1GpuProfileStatsRenderer@Engine@Spectre@@QEAA@XZ.c)
 * Callees:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CB_KUStatsEntry@?$StatsMap@N$0BE@$0A@@Engine@Spectre@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KUStatsEntry@?$StatsMap@N$0BE@$0A@@Engine@Spectre@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CB_KUStatsEntry@?$StatsMap@N$0BE@$0A@@Engine@Spectre@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CB_KUStatsEntry@?$StatsMap@N$0BE@$0A@@Engine@Spectre@@@std@@PEAX@1@@Z @ 0x18002AE54 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CB_KUStatsEntry@-$StatsMap@N$0BE@$0A@@Engine.c)
 */

void __fastcall std::_Tree<std::_Tmap_traits<unsigned __int64,Spectre::Engine::StatsMap<double,20,0>::StatsEntry,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,Spectre::Engine::StatsMap<double,20,0>::StatsEntry>>,0>>::~_Tree<std::_Tmap_traits<unsigned __int64,Spectre::Engine::StatsMap<double,20,0>::StatsEntry,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,Spectre::Engine::StatsMap<double,20,0>::StatsEntry>>,0>>(
        void **a1)
{
  std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,Spectre::Engine::StatsMap<double,20,0>::StatsEntry>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<unsigned __int64 const,Spectre::Engine::StatsMap<double,20,0>::StatsEntry>,void *>>>(
    (__int64)a1,
    (__int64)a1,
    *((__int64 **)*a1 + 1));
  std::_Deallocate<16,0>(*a1, 0xF8uLL);
}
