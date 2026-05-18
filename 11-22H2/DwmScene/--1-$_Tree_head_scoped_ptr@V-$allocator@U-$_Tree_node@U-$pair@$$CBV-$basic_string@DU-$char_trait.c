/*
 * XREFs of ??1?$_Tree_head_scoped_ptr@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UMarkerResult@GpuProfilerFrame@Engine@Spectre@@@std@@PEAX@std@@@std@@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UMarkerResult@GpuProfilerFrame@Engine@Spectre@@@std@@@std@@@2@@std@@QEAA@XZ @ 0x18002B810
 * Callers:
 *     ??0?$multimap@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UMarkerResult@GpuProfilerFrame@Engine@Spectre@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UMarkerResult@GpuProfilerFrame@Engine@Spectre@@@std@@@2@@std@@QEAA@AEBV01@@Z @ 0x18002B2DC (--0-$multimap@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@UMarkerResult@GpuPro.c)
 *     _std::multimap_std::basic_string_char_std::char_traits_char__std::allocator_char____Spectre::Engine::GpuProfilerFrame::MarkerResult_std::less_std::basic_string_char_std::char_traits_char__std::allocator_char______std::allocator_std::pair_std::basic_string_char_std::char_traits_char__std::allocator_char____const__Spectre::Engine::GpuProfilerFrame::MarkerResult_____::multimap_std::basic_string_char_std::char_traits_char__std::allocator_char____Spectre::Engine::GpuProfilerFrame::MarkerResult_std::less_std::basic_string_char_std::char_traits_char__std::allocator_char______std::allocator_std::pair_std::basic_string_char_std::char_traits_char__std::allocator_char____const__Spectre::Engine::GpuProfilerFrame::MarkerResult______::_1_::dtor$1 @ 0x1800E4FDC (_std--multimap_std--basic_string_char_std--char_traits_char__std--allocator_char____Spectre--Eng.c)
 * Callees:
 *     ??$_Erase_head@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UMarkerResult@GpuProfilerFrame@Engine@Spectre@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UMarkerResult@GpuProfilerFrame@Engine@Spectre@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UMarkerResult@GpuProfilerFrame@Engine@Spectre@@@std@@PEAX@std@@@1@@Z @ 0x18002ADCC (--$_Erase_head@V-$allocator@U-$_Tree_node@U-$pair@$$CBV-$basic_string@DU-$char_traits@D@std@@V-$.c)
 */

void __fastcall std::_Tree_head_scoped_ptr<std::allocator<std::_Tree_node<std::pair<std::string const,Spectre::Engine::GpuProfilerFrame::MarkerResult>,void *>>,std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const,Spectre::Engine::GpuProfilerFrame::MarkerResult>>>>::~_Tree_head_scoped_ptr<std::allocator<std::_Tree_node<std::pair<std::string const,Spectre::Engine::GpuProfilerFrame::MarkerResult>,void *>>,std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const,Spectre::Engine::GpuProfilerFrame::MarkerResult>>>>(
        __int64 a1)
{
  if ( *(_QWORD *)(a1 + 8) )
    std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const,Spectre::Engine::GpuProfilerFrame::MarkerResult>>>::_Erase_head<std::allocator<std::_Tree_node<std::pair<std::string const,Spectre::Engine::GpuProfilerFrame::MarkerResult>,void *>>>(
      *(void ***)(a1 + 8),
      *(_QWORD *)a1);
}
