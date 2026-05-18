/*
 * XREFs of ??0?$multimap@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UMarkerResult@GpuProfilerFrame@Engine@Spectre@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UMarkerResult@GpuProfilerFrame@Engine@Spectre@@@std@@@2@@std@@QEAA@AEBV01@@Z @ 0x18002B2DC
 * Callers:
 *     ??0Result@GpuProfilerFrame@Engine@Spectre@@QEAA@AEBU0123@@Z @ 0x18002B6B0 (--0Result@GpuProfilerFrame@Engine@Spectre@@QEAA@AEBU0123@@Z.c)
 * Callees:
 *     ??$_Buyheadnode@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UMarkerResult@GpuProfilerFrame@Engine@Spectre@@@std@@PEAX@std@@@std@@@?$_Tree_node@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UMarkerResult@GpuProfilerFrame@Engine@Spectre@@@std@@PEAX@std@@SAPEAU01@AEAV?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UMarkerResult@GpuProfilerFrame@Engine@Spectre@@@std@@PEAX@std@@@1@@Z @ 0x18002A864 (--$_Buyheadnode@V-$allocator@U-$_Tree_node@U-$pair@$$CBV-$basic_string@DU-$char_traits@D@std@@V-.c)
 *     ??$_Copy@U_Copy_tag@?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UMarkerResult@GpuProfilerFrame@Engine@Spectre@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UMarkerResult@GpuProfilerFrame@Engine@Spectre@@@std@@@2@$00@std@@@std@@@?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UMarkerResult@GpuProfilerFrame@Engine@Spectre@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UMarkerResult@GpuProfilerFrame@Engine@Spectre@@@std@@@2@$00@std@@@std@@IEAAXAEBV01@U_Copy_tag@01@@Z @ 0x18002A890 (--$_Copy@U_Copy_tag@-$_Tree@V-$_Tmap_traits@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@.c)
 *     ??1?$_Tree_head_scoped_ptr@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UMarkerResult@GpuProfilerFrame@Engine@Spectre@@@std@@PEAX@std@@@std@@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UMarkerResult@GpuProfilerFrame@Engine@Spectre@@@std@@@std@@@2@@std@@QEAA@XZ @ 0x18002B810 (--1-$_Tree_head_scoped_ptr@V-$allocator@U-$_Tree_node@U-$pair@$$CBV-$basic_string@DU-$char_trait.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::multimap<std::string,Spectre::Engine::GpuProfilerFrame::MarkerResult>::multimap<std::string,Spectre::Engine::GpuProfilerFrame::MarkerResult>(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 v4; // r9
  _QWORD v6[3]; // [rsp+20h] [rbp-18h] BYREF
  char v7; // [rsp+40h] [rbp+8h]

  v7 = (char)a1;
  *a1 = 0LL;
  a1[1] = 0LL;
  v6[0] = a1;
  *a1 = std::_Tree_node<std::pair<std::string const,Spectre::Engine::GpuProfilerFrame::MarkerResult>,void *>::_Buyheadnode<std::allocator<std::_Tree_node<std::pair<std::string const,Spectre::Engine::GpuProfilerFrame::MarkerResult>,void *>>>();
  std::_Tree<std::_Tmap_traits<std::string,Spectre::Engine::GpuProfilerFrame::MarkerResult,std::less<std::string>,std::allocator<std::pair<std::string const,Spectre::Engine::GpuProfilerFrame::MarkerResult>>,1>>::_Copy<std::_Tree<std::_Tmap_traits<std::string,Spectre::Engine::GpuProfilerFrame::MarkerResult,std::less<std::string>,std::allocator<std::pair<std::string const,Spectre::Engine::GpuProfilerFrame::MarkerResult>>,1>>::_Copy_tag>(
    a1,
    a2,
    v7,
    v4);
  v6[1] = 0LL;
  std::_Tree_head_scoped_ptr<std::allocator<std::_Tree_node<std::pair<std::string const,Spectre::Engine::GpuProfilerFrame::MarkerResult>,void *>>,std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const,Spectre::Engine::GpuProfilerFrame::MarkerResult>>>>::~_Tree_head_scoped_ptr<std::allocator<std::_Tree_node<std::pair<std::string const,Spectre::Engine::GpuProfilerFrame::MarkerResult>,void *>>,std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const,Spectre::Engine::GpuProfilerFrame::MarkerResult>>>>(v6);
  return a1;
}
