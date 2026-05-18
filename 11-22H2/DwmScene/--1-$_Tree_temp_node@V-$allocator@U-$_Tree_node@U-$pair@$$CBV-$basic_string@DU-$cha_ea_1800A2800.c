/*
 * XREFs of ??1?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UMarkerResult@GpuProfilerFrame@Engine@Spectre@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1800A2800
 * Callers:
 *     ??$_Emplace@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UMarkerResult@GpuProfilerFrame@Engine@Spectre@@@std@@@?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UMarkerResult@GpuProfilerFrame@Engine@Spectre@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UMarkerResult@GpuProfilerFrame@Engine@Spectre@@@std@@@2@$00@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UMarkerResult@GpuProfilerFrame@Engine@Spectre@@@std@@PEAX@std@@_N@1@$$QEAU?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UMarkerResult@GpuProfilerFrame@Engine@Spectre@@@1@@Z @ 0x1800A2490 (--$_Emplace@U-$pair@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@UMarkerResult@.c)
 *     _std::_Tree_std::_Tmap_traits_std::basic_string_char_std::char_traits_char__std::allocator_char____Spectre::Engine::GpuProfilerFrame::MarkerResult_std::less_std::basic_string_char_std::char_traits_char__std::allocator_char______std::allocator_std::pair_std::basic_string_char_std::char_traits_char__std::allocator_char____const__Spectre::Engine::GpuProfilerFrame::MarkerResult____1___::_Emplace_std::pair_std::basic_string_char_std::char_traits_char__std::allocator_char____Spectre::Engine::GpuProfilerFrame::MarkerResult____::_1_::dtor$0 @ 0x1800EB36C (_std--_Tree_std--_Tmap_traits_std--basic_string_char_std--char_traits_char__std--al_ea_1800EB36C.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x180011B24 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 */

void __fastcall std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<std::string const,Spectre::Engine::GpuProfilerFrame::MarkerResult>,void *>>>::~_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<std::string const,Spectre::Engine::GpuProfilerFrame::MarkerResult>,void *>>>(
        __int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    std::string::_Tidy_deallocate(v2 + 32);
  std::_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<std::pair<int,std::string> const,Spectre::Utils::Math::Vector4>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<std::pair<int,std::string> const,Spectre::Utils::Math::Vector4>,void *>>>(a1);
}
