/*
 * XREFs of ??1?$list@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Layer@MaterialMaker@Framework@Spectre@@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Layer@MaterialMaker@Framework@Spectre@@@std@@@2@@std@@QEAA@XZ @ 0x1800989C4
 * Callers:
 *     _std::_Hash_std::_Umap_traits_std::basic_string_char_std::char_traits_char__std::allocator_char____enum_Spectre::Framework::MaterialMaker::Layer_std::_Uhash_compare_std::basic_string_char_std::char_traits_char__std::allocator_char____std::hash_std::basic_string_char_std::char_traits_char__std::allocator_char______std::equal_to_std::basic_string_char_std::char_traits_char__std::allocator_char________std::allocator_std::pair_std::basic_string_char_std::char_traits_char__std::allocator_char____const__enum_Spectre::Framework::MaterialMaker::Layer____0___::_Hash_std::_Umap_traits_std::basic_string_char_std::char_traits_char__std::allocator_char____enum_Spectre::Framework::MaterialMaker::Layer_std::_Uhash_compare_std::basic_string_char_std::char_traits_char__std::allocator_char____std::hash_std::basic_string_char_std::char_traits_char__std::allocator_char______std::equal_to_std::basic_string_char_std::char_traits_char__std::allocator_char________std::allocator_std::pair_std::basic_string_char_std::char_traits_char__std::allocator_char____const__enum_Spectre::Framework::MaterialMaker::Layer____0____::_1_::dtor$0 @ 0x1800EAD2F (_std--_Hash_std--_Umap_traits_std--basic_string_char_std--char_traits_char__std--al_ea_1800EAD2F.c)
 * Callees:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Layer@MaterialMaker@Framework@Spectre@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Layer@MaterialMaker@Framework@Spectre@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Layer@MaterialMaker@Framework@Spectre@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180098560 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBV-$basic_string@DU-$char_traits@D@std@@.c)
 */

void __fastcall std::list<std::pair<std::string const,enum Spectre::Framework::MaterialMaker::Layer>>::~list<std::pair<std::string const,enum Spectre::Framework::MaterialMaker::Layer>>(
        __int64 *a1)
{
  std::_List_node<std::pair<std::string const,enum Spectre::Framework::MaterialMaker::Layer>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<std::string const,enum Spectre::Framework::MaterialMaker::Layer>,void *>>>(
    (__int64)a1,
    *a1);
  std::_Deallocate<16,0>((void *)*a1, 0x38uLL);
}
