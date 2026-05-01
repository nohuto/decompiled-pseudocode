/*
 * XREFs of ??1?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4JavaOption@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4JavaOption@@@std@@@2@@std@@QEAA@XZ @ 0x1801C6230
 * Callers:
 *     _GetJavaOption_::_2_::_dynamic_atexit_destructor_for__javaOptions__ @ 0x1802C7E20 (_GetJavaOption_--_2_--_dynamic_atexit_destructor_for__javaOptions__.c)
 *     _std::map_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____enum_JavaOption_std::less_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short______std::allocator_std::pair_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const__enum_JavaOption_____::map_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____enum_JavaOption_std::less_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short______std::allocator_std::pair_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const__enum_JavaOption______::_1_::dtor$0 @ 0x180628A68 (_std--map_std--basic_string_unsigned_short_std--char_traits_unsigned_short__std--allocator_unsig.c)
 * Callees:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4JavaOption@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4JavaOption@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4JavaOption@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4JavaOption@@@std@@PEAX@1@@Z @ 0x1806286E8 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBV-$basic_string@GU-$char_trai_ea_1806286E8.c)
 */

void __fastcall std::map<std::wstring,enum JavaOption>::~map<std::wstring,enum JavaOption>(void **a1)
{
  std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,enum JavaOption>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<std::wstring const,enum JavaOption>,void *>>>(
    a1,
    a1,
    *((_QWORD *)*a1 + 1));
  std::_Deallocate<16,0>(*a1, 0x48uLL);
}
