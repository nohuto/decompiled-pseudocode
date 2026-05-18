/*
 * XREFs of ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CB_KUStatsEntry@?$StatsMap@M$0BE@$0A@@Engine@Spectre@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KUStatsEntry@?$StatsMap@M$0BE@$0A@@Engine@Spectre@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CB_KUStatsEntry@?$StatsMap@M$0BE@$0A@@Engine@Spectre@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CB_KUStatsEntry@?$StatsMap@M$0BE@$0A@@Engine@Spectre@@@std@@PEAX@1@@Z @ 0x18002EA28
 * Callers:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CB_KUStatsEntry@?$StatsMap@M$0BE@$0A@@Engine@Spectre@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KUStatsEntry@?$StatsMap@M$0BE@$0A@@Engine@Spectre@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CB_KUStatsEntry@?$StatsMap@M$0BE@$0A@@Engine@Spectre@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CB_KUStatsEntry@?$StatsMap@M$0BE@$0A@@Engine@Spectre@@@std@@PEAX@1@@Z @ 0x18002EA28 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CB_KUStatsEntry@-$StatsMap@M$0BE@$0A@@Engine.c)
 *     ??1?$_Tree@V?$_Tmap_traits@_KUStatsEntry@?$StatsMap@M$0BE@$0A@@Engine@Spectre@@U?$less@_K@std@@V?$allocator@U?$pair@$$CB_KUStatsEntry@?$StatsMap@M$0BE@$0A@@Engine@Spectre@@@std@@@6@$0A@@std@@@std@@QEAA@XZ @ 0x18003186C (--1-$_Tree@V-$_Tmap_traits@_KUStatsEntry@-$StatsMap@M$0BE@$0A@@Engine@Spectre@@U-$less@_K@std@@V.c)
 * Callees:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CB_KUStatsEntry@?$StatsMap@M$0BE@$0A@@Engine@Spectre@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KUStatsEntry@?$StatsMap@M$0BE@$0A@@Engine@Spectre@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CB_KUStatsEntry@?$StatsMap@M$0BE@$0A@@Engine@Spectre@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CB_KUStatsEntry@?$StatsMap@M$0BE@$0A@@Engine@Spectre@@@std@@PEAX@1@@Z @ 0x18002EA28 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CB_KUStatsEntry@-$StatsMap@M$0BE@$0A@@Engine.c)
 *     ??$_Freenode@V?$allocator@U?$_Tree_node@U?$pair@$$CB_KUStatsEntry@?$StatsMap@M$0BE@$0A@@Engine@Spectre@@@std@@PEAX@std@@@std@@@?$_Tree_node@U?$pair@$$CB_KUStatsEntry@?$StatsMap@M$0BE@$0A@@Engine@Spectre@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CB_KUStatsEntry@?$StatsMap@M$0BE@$0A@@Engine@Spectre@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18002F1A4 (--$_Freenode@V-$allocator@U-$_Tree_node@U-$pair@$$CB_KUStatsEntry@-$StatsMap@M$0BE@$0A@@Engine@S.c)
 */

__int64 __fastcall std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,Spectre::Engine::StatsMap<float,20,0>::StatsEntry>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<unsigned __int64 const,Spectre::Engine::StatsMap<float,20,0>::StatsEntry>,void *>>>(
        __int64 a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 *i; // rbx
  __int64 *v6; // rdx
  __int64 v7; // rcx
  __int64 result; // rax

  for ( i = a3;
        !*((_BYTE *)i + 25);
        result = std::_Tree_node<std::pair<unsigned __int64 const,Spectre::Engine::StatsMap<float,20,0>::StatsEntry>,void *>::_Freenode<std::allocator<std::_Tree_node<std::pair<unsigned __int64 const,Spectre::Engine::StatsMap<float,20,0>::StatsEntry>,void *>>>(
                   v7,
                   v6) )
  {
    std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,Spectre::Engine::StatsMap<float,20,0>::StatsEntry>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<unsigned __int64 const,Spectre::Engine::StatsMap<float,20,0>::StatsEntry>,void *>>>(
      a1,
      a2,
      i[2]);
    v6 = i;
    i = (__int64 *)*i;
  }
  return result;
}
