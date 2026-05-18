/*
 * XREFs of ??1?$list@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@VConfigurationValue@Utils@Spectre@@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@VConfigurationValue@Utils@Spectre@@@std@@@2@@std@@QEAA@XZ @ 0x1800DE204
 * Callers:
 *     _std::_Hash_std::_Umap_traits_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t____Spectre::Utils::ConfigurationValue_std::_Uhash_compare_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t____std::hash_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t______std::equal_to_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t________std::allocator_std::pair_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t____const__Spectre::Utils::ConfigurationValue____0___::_Hash_std::_Umap_traits_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t____Spectre::Utils::ConfigurationValue_std::_Uhash_compare_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t____std::hash_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t______std::equal_to_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t________std::allocator_std::pair_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t____const__Spectre::Utils::ConfigurationValue____0____std::allocator_std::_List_node_std::pair_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t____const__Spectre::Utils::ConfigurationValue__void________::_1_::dtor$0 @ 0x1800F1C7A (_std--_Hash_std--_Umap_traits_std--basic_string_wchar_t_std--char_traits_wchar_t__s_ea_1800F1C7A.c)
 *     _Spectre::Utils::ConfigurationValue::ConfigurationValue_::_1_::dtor$6 @ 0x1800F2067 (_Spectre--Utils--ConfigurationValue--ConfigurationValue_--_1_--dtor$6.c)
 * Callees:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@VConfigurationValue@Utils@Spectre@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@VConfigurationValue@Utils@Spectre@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@VConfigurationValue@Utils@Spectre@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800DD6A0 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBV-$basic_string@_WU-$char_traits@_W@std.c)
 */

void __fastcall std::list<std::pair<std::wstring const,Spectre::Utils::ConfigurationValue>>::~list<std::pair<std::wstring const,Spectre::Utils::ConfigurationValue>>(
        __int64 *a1)
{
  std::_List_node<std::pair<std::wstring const,Spectre::Utils::ConfigurationValue>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<std::wstring const,Spectre::Utils::ConfigurationValue>,void *>>>(
    (__int64)a1,
    *a1);
  std::_Deallocate<16,0>((void *)*a1, 0xB0uLL);
}
