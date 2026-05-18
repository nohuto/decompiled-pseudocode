/*
 * XREFs of ??1?$_Alloc_construct_ptr@V?$allocator@U?$_List_node@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@VConfigurationValue@Utils@Spectre@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1800DE05C
 * Callers:
 *     ??$_Append_range_unchecked@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@VConfigurationValue@Utils@Spectre@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@V12@@?$_List_node_insert_op2@V?$allocator@U?$_List_node@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@VConfigurationValue@Utils@Spectre@@@std@@PEAX@std@@@std@@@std@@QEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@VConfigurationValue@Utils@Spectre@@@std@@@std@@@std@@U_Iterator_base0@2@@1@V21@@Z @ 0x1800DD454 (--$_Append_range_unchecked@V-$_List_unchecked_const_iterator@V-$_List_val@U-$_List_simple_types@.c)
 *     ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@VConfigurationValue@Utils@Spectre@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1800DE0F4 (--1-$_List_node_emplace_op2@V-$allocator@U-$_List_node@U-$pair@$$CBV-$basic_string@_WU-$char_tra.c)
 *     _std::_List_node_insert_op2_std::allocator_std::_List_node_std::pair_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t____const__Spectre::Utils::ConfigurationValue__void_______::_Append_range_unchecked_std::_List_unchecked_const_iterator_std::_List_val_std::_List_simple_types_std::pair_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t____const__Spectre::Utils::ConfigurationValue______std::_Iterator_base0__std::_List_unchecked_const_iterator_std::_List_val_std::_List_simple_types_std::pair_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t____const__Spectre::Utils::ConfigurationValue______std::_Iterator_base0____::_1_::dtor$0 @ 0x1800F1D32 (_std--_List_node_insert_op2_std--allocator_std--_List_node_std--pair_std--basic_string_wchar_t_s.c)
 *     _std::_Hash_std::_Umap_traits_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t____Spectre::Utils::ConfigurationValue_std::_Uhash_compare_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t____std::hash_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t______std::equal_to_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t________std::allocator_std::pair_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t____const__Spectre::Utils::ConfigurationValue____0___::_Try_emplace_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t____const_&__::_1_::dtor$1 @ 0x1800F1D8C (_std--_Hash_std--_Umap_traits_std--basic_string_wchar_t_std--char_traits_wchar_t__s_ea_1800F1D8C.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800100E8 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_Alloc_construct_ptr<std::allocator<std::_List_node<std::pair<std::wstring const,Spectre::Utils::ConfigurationValue>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_List_node<std::pair<std::wstring const,Spectre::Utils::ConfigurationValue>,void *>>>(
        __int64 a1)
{
  void *v1; // rcx

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    std::_Deallocate<16,0>(v1, 0xB0uLL);
}
