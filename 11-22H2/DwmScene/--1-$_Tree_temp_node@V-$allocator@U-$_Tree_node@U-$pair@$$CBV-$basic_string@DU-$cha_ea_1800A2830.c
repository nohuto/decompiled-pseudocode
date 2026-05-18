/*
 * XREFs of ??1?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VMarkerQueryData@GpuProfilerFrame@Engine@Spectre@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1800A2830
 * Callers:
 *     ??$_Emplace@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VMarkerQueryData@GpuProfilerFrame@Engine@Spectre@@@?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VMarkerQueryData@GpuProfilerFrame@Engine@Spectre@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VMarkerQueryData@GpuProfilerFrame@Engine@Spectre@@@std@@@2@$00@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VMarkerQueryData@GpuProfilerFrame@Engine@Spectre@@@std@@PEAX@std@@_N@1@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@$$QEAVMarkerQueryData@GpuProfilerFrame@Engine@Spectre@@@Z @ 0x1800A2374 (--$_Emplace@AEAV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@VMarkerQueryData@Gp.c)
 *     _std::_Tree_std::_Tmap_traits_std::basic_string_char_std::char_traits_char__std::allocator_char____Spectre::Engine::GpuProfilerFrame::MarkerQueryData_std::less_std::basic_string_char_std::char_traits_char__std::allocator_char______std::allocator_std::pair_std::basic_string_char_std::char_traits_char__std::allocator_char____const__Spectre::Engine::GpuProfilerFrame::MarkerQueryData____1___::_Emplace_std::basic_string_char_std::char_traits_char__std::allocator_char____&_Spectre::Engine::GpuProfilerFrame::MarkerQueryData__::_1_::dtor$0 @ 0x1800EB336 (_std--_Tree_std--_Tmap_traits_std--basic_string_char_std--char_traits_char__std--al_ea_1800EB336.c)
 * Callees:
 *     ??1?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VMarkerQueryData@GpuProfilerFrame@Engine@Spectre@@@std@@QEAA@XZ @ 0x1800A0C68 (--1-$pair@$$CBV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@VMarkerQueryData@Gpu.c)
 */

void __fastcall std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<std::string const,Spectre::Engine::GpuProfilerFrame::MarkerQueryData>,void *>>>::~_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<std::string const,Spectre::Engine::GpuProfilerFrame::MarkerQueryData>,void *>>>(
        __int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    std::pair<std::string const,Spectre::Engine::GpuProfilerFrame::MarkerQueryData>::~pair<std::string const,Spectre::Engine::GpuProfilerFrame::MarkerQueryData>(v2 + 32);
  std::_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<std::string const,Spectre::Engine::GpuProfilerFrame::MarkerQueryData>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<std::string const,Spectre::Engine::GpuProfilerFrame::MarkerQueryData>,void *>>>(a1);
}
