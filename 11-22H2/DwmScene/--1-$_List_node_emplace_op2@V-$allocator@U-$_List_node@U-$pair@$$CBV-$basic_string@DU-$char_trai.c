/*
 * XREFs of ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Layer@MaterialMaker@Framework@Spectre@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x180098960
 * Callers:
 *     ??$emplace@AEBU?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Layer@MaterialMaker@Framework@Spectre@@@std@@@?$_Hash@V?$_Umap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Layer@MaterialMaker@Framework@Spectre@@V?$_Uhash_compare@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Layer@MaterialMaker@Framework@Spectre@@@std@@@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Layer@MaterialMaker@Framework@Spectre@@@std@@@std@@@std@@@std@@_N@1@AEBU?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Layer@MaterialMaker@Framework@Spectre@@@1@@Z @ 0x180098648 (--$emplace@AEBU-$pair@$$CBV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@W4Layer@.c)
 *     _std::_Hash_std::_Umap_traits_std::basic_string_char_std::char_traits_char__std::allocator_char____enum_Spectre::Framework::MaterialMaker::Layer_std::_Uhash_compare_std::basic_string_char_std::char_traits_char__std::allocator_char____std::hash_std::basic_string_char_std::char_traits_char__std::allocator_char______std::equal_to_std::basic_string_char_std::char_traits_char__std::allocator_char________std::allocator_std::pair_std::basic_string_char_std::char_traits_char__std::allocator_char____const__enum_Spectre::Framework::MaterialMaker::Layer____0___::emplace_std::pair_std::basic_string_char_std::char_traits_char__std::allocator_char____const__enum_Spectre::Framework::MaterialMaker::Layer__const_&__::_1_::dtor$0 @ 0x1800EAD1D (_std--_Hash_std--_Umap_traits_std--basic_string_char_std--char_traits_char__std--allocator_char_.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x180011B24 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 */

void __fastcall std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<std::string const,enum Spectre::Framework::MaterialMaker::Layer>,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<std::string const,enum Spectre::Framework::MaterialMaker::Layer>,void *>>>(
        __int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    std::string::_Tidy_deallocate(v2 + 16);
  std::_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<enum Spectre::Engine::RenderDeviceID const,std::shared_ptr<Spectre::Engine::DeviceVertexLayout>>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<enum Spectre::Engine::RenderDeviceID const,std::shared_ptr<Spectre::Engine::DeviceVertexLayout>>,void *>>>(a1);
}
