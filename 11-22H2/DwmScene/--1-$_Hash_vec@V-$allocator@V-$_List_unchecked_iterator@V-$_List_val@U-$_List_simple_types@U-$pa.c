/*
 * XREFs of ??1?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@VConfigurationValue@Utils@Spectre@@@std@@@std@@@std@@@std@@@std@@@std@@QEAA@XZ @ 0x18003FDC4
 * Callers:
 *     _std::_Hash_std::_Umap_traits_unsigned___int64_Spectre::Transcoder::BoundingBox_std::_Uhash_compare_unsigned___int64_std::hash_unsigned___int64__std::equal_to_unsigned___int64____std::allocator_std::pair_unsigned___int64_const__Spectre::Transcoder::BoundingBox____0___::_Hash_std::_Umap_traits_unsigned___int64_Spectre::Transcoder::BoundingBox_std::_Uhash_compare_unsigned___int64_std::hash_unsigned___int64__std::equal_to_unsigned___int64____std::allocator_std::pair_unsigned___int64_const__Spectre::Transcoder::BoundingBox____0____::_1_::dtor$1 @ 0x1800E65BE (_std--_Hash_std--_Umap_traits_unsigned___int64_Spectre--Transcoder--BoundingBox_std--_Uhash_comp.c)
 *     _std::_Hash_std::_Umap_traits_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t____Spectre::Utils::ConfigurationValue_std::_Uhash_compare_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t____std::hash_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t______std::equal_to_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t________std::allocator_std::pair_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t____const__Spectre::Utils::ConfigurationValue____0___::_Hash_std::_Umap_traits_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t____Spectre::Utils::ConfigurationValue_std::_Uhash_compare_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t____std::hash_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t______std::equal_to_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t________std::allocator_std::pair_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t____const__Spectre::Utils::ConfigurationValue____0____std::allocator_std::_List_node_std::pair_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t____const__Spectre::Utils::ConfigurationValue__void________::_1_::dtor$1 @ 0x1800EAD45 (_std--_Hash_std--_Umap_traits_std--basic_string_wchar_t_std--char_traits_wchar_t__std--allocator.c)
 *     _Spectre::Utils::ConfigurationValue::ConfigurationValue_::_1_::dtor$7 @ 0x1800F207D (_Spectre--Utils--ConfigurationValue--ConfigurationValue_--_1_--dtor$7.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800100E8 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::wstring const,Spectre::Utils::ConfigurationValue>>>>>>::~_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::wstring const,Spectre::Utils::ConfigurationValue>>>>>>(
        __int64 a1)
{
  __int64 result; // rax

  std::_Deallocate<16,0>(*(void **)a1, (*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF8uLL);
  result = 0LL;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  return result;
}
