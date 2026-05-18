/*
 * XREFs of ??1?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VMarkerQueryData@GpuProfilerFrame@Engine@Spectre@@@std@@QEAA@XZ @ 0x1800A0C68
 * Callers:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VMarkerQueryData@GpuProfilerFrame@Engine@Spectre@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VMarkerQueryData@GpuProfilerFrame@Engine@Spectre@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VMarkerQueryData@GpuProfilerFrame@Engine@Spectre@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VMarkerQueryData@GpuProfilerFrame@Engine@Spectre@@@std@@PEAX@1@@Z @ 0x1800A0890 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBV-$basic_string@DU-$char_trai_ea_1800A0890.c)
 *     ??1?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VMarkerQueryData@GpuProfilerFrame@Engine@Spectre@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1800A2830 (--1-$_Tree_temp_node@V-$allocator@U-$_Tree_node@U-$pair@$$CBV-$basic_string@DU-$cha_ea_1800A2830.c)
 * Callees:
 *     ??1MarkerQueryData@GpuProfilerFrame@Engine@Spectre@@QEAA@XZ @ 0x1800A0D94 (--1MarkerQueryData@GpuProfilerFrame@Engine@Spectre@@QEAA@XZ.c)
 */

void __fastcall std::pair<std::string const,Spectre::Engine::GpuProfilerFrame::MarkerQueryData>::~pair<std::string const,Spectre::Engine::GpuProfilerFrame::MarkerQueryData>(
        __int64 a1)
{
  Spectre::Engine::GpuProfilerFrame::MarkerQueryData::~MarkerQueryData((Spectre::Engine::GpuProfilerFrame::MarkerQueryData *)(a1 + 32));
  std::string::_Tidy_deallocate(a1);
}
