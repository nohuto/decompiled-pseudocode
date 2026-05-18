/*
 * XREFs of ??$_Freenode@V?$allocator@U?$_Tree_node@U?$pair@$$CB_KUStatsEntry@?$StatsMap@N$0BE@$0A@@Engine@Spectre@@@std@@PEAX@std@@@std@@@?$_Tree_node@U?$pair@$$CB_KUStatsEntry@?$StatsMap@N$0BE@$0A@@Engine@Spectre@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CB_KUStatsEntry@?$StatsMap@N$0BE@$0A@@Engine@Spectre@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18002AED8
 * Callers:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CB_KUStatsEntry@?$StatsMap@N$0BE@$0A@@Engine@Spectre@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KUStatsEntry@?$StatsMap@N$0BE@$0A@@Engine@Spectre@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CB_KUStatsEntry@?$StatsMap@N$0BE@$0A@@Engine@Spectre@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CB_KUStatsEntry@?$StatsMap@N$0BE@$0A@@Engine@Spectre@@@std@@PEAX@1@@Z @ 0x18002AE54 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CB_KUStatsEntry@-$StatsMap@N$0BE@$0A@@Engine.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x180011B24 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 */

void __fastcall std::_Tree_node<std::pair<unsigned __int64 const,Spectre::Engine::StatsMap<double,20,0>::StatsEntry>,void *>::_Freenode<std::allocator<std::_Tree_node<std::pair<unsigned __int64 const,Spectre::Engine::StatsMap<double,20,0>::StatsEntry>,void *>>>(
        __int64 a1,
        void *a2)
{
  std::string::_Tidy_deallocate((__int64)a2 + 48);
  std::_Deallocate<16,0>(a2, 0xF8uLL);
}
