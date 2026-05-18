/*
 * XREFs of ??0?$multimap@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UMarkerResult@GpuProfilerFrame@Engine@Spectre@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UMarkerResult@GpuProfilerFrame@Engine@Spectre@@@std@@@2@@std@@QEAA@XZ @ 0x18002B340
 * Callers:
 *     ??0Result@GpuProfilerFrame@Engine@Spectre@@QEAA@XZ @ 0x18002B740 (--0Result@GpuProfilerFrame@Engine@Spectre@@QEAA@XZ.c)
 *     ?Begin@GpuProfilerFrame@Engine@Spectre@@QEAAX_KV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@@Z @ 0x1800A2948 (-Begin@GpuProfilerFrame@Engine@Spectre@@QEAAX_KV-$shared_ptr@VCommandList@Engine@Spectre@@@std@@.c)
 *     ?GetResult@GpuProfilerFrame@Engine@Spectre@@QEAA?AW4Status@123@AEAUResult@123@_N@Z @ 0x1800A2FDC (-GetResult@GpuProfilerFrame@Engine@Spectre@@QEAA-AW4Status@123@AEAUResult@123@_N@Z.c)
 * Callees:
 *     ??$_Buyheadnode@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UMarkerResult@GpuProfilerFrame@Engine@Spectre@@@std@@PEAX@std@@@std@@@?$_Tree_node@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UMarkerResult@GpuProfilerFrame@Engine@Spectre@@@std@@PEAX@std@@SAPEAU01@AEAV?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UMarkerResult@GpuProfilerFrame@Engine@Spectre@@@std@@PEAX@std@@@1@@Z @ 0x18002A864 (--$_Buyheadnode@V-$allocator@U-$_Tree_node@U-$pair@$$CBV-$basic_string@DU-$char_traits@D@std@@V-.c)
 */

_QWORD *__fastcall std::multimap<std::string,Spectre::Engine::GpuProfilerFrame::MarkerResult>::multimap<std::string,Spectre::Engine::GpuProfilerFrame::MarkerResult>(
        _QWORD *a1)
{
  *a1 = 0LL;
  a1[1] = 0LL;
  *a1 = std::_Tree_node<std::pair<std::string const,Spectre::Engine::GpuProfilerFrame::MarkerResult>,void *>::_Buyheadnode<std::allocator<std::_Tree_node<std::pair<std::string const,Spectre::Engine::GpuProfilerFrame::MarkerResult>,void *>>>();
  return a1;
}
