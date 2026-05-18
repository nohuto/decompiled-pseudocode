/*
 * XREFs of ?clear@?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UMarkerResult@GpuProfilerFrame@Engine@Spectre@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UMarkerResult@GpuProfilerFrame@Engine@Spectre@@@std@@@2@$00@std@@@std@@QEAAXXZ @ 0x180074298
 * Callers:
 *     ??4Result@GpuProfilerFrame@Engine@Spectre@@QEAAAEAU0123@AEBU0123@@Z @ 0x18007409C (--4Result@GpuProfilerFrame@Engine@Spectre@@QEAAAEAU0123@AEBU0123@@Z.c)
 *     ?FrameTick@GpuProfilingGrapher@Engine@Spectre@@UEAAXAEBV?$vector@UResult@GpuProfilerFrame@Engine@Spectre@@V?$allocator@UResult@GpuProfilerFrame@Engine@Spectre@@@std@@@std@@@Z @ 0x1800741A0 (-FrameTick@GpuProfilingGrapher@Engine@Spectre@@UEAAXAEBV-$vector@UResult@GpuProfilerFrame@Engine.c)
 *     ??4?$multimap@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UMarkerResult@GpuProfilerFrame@Engine@Spectre@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UMarkerResult@GpuProfilerFrame@Engine@Spectre@@@std@@@2@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800A286C (--4-$multimap@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@UMarkerResult@GpuPro.c)
 *     ?GetResult@GpuProfilerFrame@Engine@Spectre@@QEAA?AW4Status@123@AEAUResult@123@_N@Z @ 0x1800A2FDC (-GetResult@GpuProfilerFrame@Engine@Spectre@@QEAA-AW4Status@123@AEAUResult@123@_N@Z.c)
 * Callees:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UMarkerResult@GpuProfilerFrame@Engine@Spectre@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UMarkerResult@GpuProfilerFrame@Engine@Spectre@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UMarkerResult@GpuProfilerFrame@Engine@Spectre@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UMarkerResult@GpuProfilerFrame@Engine@Spectre@@@std@@PEAX@1@@Z @ 0x18002ADFC (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBV-$basic_string@DU-$char_trai_ea_18002ADFC.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<std::string,Spectre::Engine::GpuProfilerFrame::MarkerResult,std::less<std::string>,std::allocator<std::pair<std::string const,Spectre::Engine::GpuProfilerFrame::MarkerResult>>,1>>::clear(
        _QWORD *a1)
{
  _QWORD *v1; // rbx
  __int64 result; // rax

  v1 = (_QWORD *)*a1;
  result = std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const,Spectre::Engine::GpuProfilerFrame::MarkerResult>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<std::string const,Spectre::Engine::GpuProfilerFrame::MarkerResult>,void *>>>(
             (__int64)a1,
             (__int64)a1,
             *(__int64 **)(*a1 + 8LL));
  v1[1] = v1;
  *v1 = v1;
  v1[2] = v1;
  a1[1] = 0LL;
  return result;
}
