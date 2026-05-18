/*
 * XREFs of ??1?$_Alloc_construct_ptr@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VMarkerQueryData@GpuProfilerFrame@Engine@Spectre@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1800A27DC
 * Callers:
 *     ??1?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VMarkerQueryData@GpuProfilerFrame@Engine@Spectre@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1800A2830 (--1-$_Tree_temp_node@V-$allocator@U-$_Tree_node@U-$pair@$$CBV-$basic_string@DU-$cha_ea_1800A2830.c)
 *     ??1?$_Tree_temp_node_alloc@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VMarkerQueryData@GpuProfilerFrame@Engine@Spectre@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1800A2860 (--1-$_Tree_temp_node_alloc@V-$allocator@U-$_Tree_node@U-$pair@$$CBV-$basic_string@D_ea_1800A2860.c)
 *     _std::_Tree_std::_Tmap_traits_std::basic_string_char_std::char_traits_char__std::allocator_char____Spectre::Engine::GpuProfilerFrame::MarkerQueryData_std::less_std::basic_string_char_std::char_traits_char__std::allocator_char______std::allocator_std::pair_std::basic_string_char_std::char_traits_char__std::allocator_char____const__Spectre::Engine::GpuProfilerFrame::MarkerQueryData____1___::_Emplace_std::basic_string_char_std::char_traits_char__std::allocator_char____&_Spectre::Engine::GpuProfilerFrame::MarkerQueryData__::_1_::dtor$2 @ 0x1800EB35A (_std--_Tree_std--_Tmap_traits_std--basic_string_char_std--char_traits_char__std--al_ea_1800EB35A.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800100E8 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<std::string const,Spectre::Engine::GpuProfilerFrame::MarkerQueryData>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<std::string const,Spectre::Engine::GpuProfilerFrame::MarkerQueryData>,void *>>>(
        __int64 a1)
{
  void *v1; // rcx

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    std::_Deallocate<16,0>(v1, 0x1D0uLL);
}
