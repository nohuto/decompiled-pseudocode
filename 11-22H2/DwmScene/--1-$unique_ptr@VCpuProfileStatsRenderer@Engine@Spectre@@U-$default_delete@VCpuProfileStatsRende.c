/*
 * XREFs of ??1?$unique_ptr@VCpuProfileStatsRenderer@Engine@Spectre@@U?$default_delete@VCpuProfileStatsRenderer@Engine@Spectre@@@std@@@std@@QEAA@XZ @ 0x180031BA0
 * Callers:
 *     ??1Engine@0Spectre@@UEAA@XZ @ 0x180031CC4 (--1Engine@0Spectre@@UEAA@XZ.c)
 *     _Spectre::dtor$25::Engine::Engine_::_1_::dtor$25 @ 0x1800E568A (_Spectre--dtor$25--Engine--Engine_--_1_--dtor$25.c)
 *     _Spectre::dtor$22::Engine::_Engine_::_1_::dtor$22 @ 0x1800E598D (_Spectre--dtor$22--Engine--_Engine_--_1_--dtor$22.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18000B988 (--3@YAXPEAX_K@Z.c)
 *     ??1?$_Tree@V?$_Tmap_traits@_KUStatsEntry@?$StatsMap@M$0BE@$0A@@Engine@Spectre@@U?$less@_K@std@@V?$allocator@U?$pair@$$CB_KUStatsEntry@?$StatsMap@M$0BE@$0A@@Engine@Spectre@@@std@@@6@$0A@@std@@@std@@QEAA@XZ @ 0x18003186C (--1-$_Tree@V-$_Tmap_traits@_KUStatsEntry@-$StatsMap@M$0BE@$0A@@Engine@Spectre@@U-$less@_K@std@@V.c)
 */

void __fastcall std::unique_ptr<Spectre::Engine::CpuProfileStatsRenderer>::~unique_ptr<Spectre::Engine::CpuProfileStatsRenderer>(
        void ***a1)
{
  void **v1; // rbx

  v1 = *a1;
  if ( *a1 )
  {
    std::_Tree<std::_Tmap_traits<unsigned __int64,Spectre::Engine::StatsMap<float,20,0>::StatsEntry,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,Spectre::Engine::StatsMap<float,20,0>::StatsEntry>>,0>>::~_Tree<std::_Tmap_traits<unsigned __int64,Spectre::Engine::StatsMap<float,20,0>::StatsEntry,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,Spectre::Engine::StatsMap<float,20,0>::StatsEntry>>,0>>(v1 + 2);
    operator delete(v1);
  }
}
