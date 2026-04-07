/*
 * XREFs of ??1?$_Hash_vec@V?$allocator@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@_K@std@@@std@@U_Iterator_base0@2@@std@@@std@@@std@@QEAA@XZ @ 0x1800F3318
 * Callers:
 *     _cereal::OutputArchive_cereal::JSONOutputArchive_0_::OutputArchive_cereal::JSONOutputArchive_0__::_1_::dtor$17 @ 0x180065AAC (_cereal--OutputArchive_cereal--JSONOutputArchive_0_--OutputArchive_cereal--JSONOutp_ea_180065AAC.c)
 *     _std::_Hash_std::_Uset_traits_unsigned___int64_std::_Uhash_compare_unsigned___int64_std::hash_unsigned___int64__std::equal_to_unsigned___int64____std::allocator_unsigned___int64__0___::_Hash_std::_Uset_traits_unsigned___int64_std::_Uhash_compare_unsigned___int64_std::hash_unsigned___int64__std::equal_to_unsigned___int64____std::allocator_unsigned___int64__0____::_1_::dtor$1 @ 0x180065AD8 (_std--_Hash_std--_Uset_traits_unsigned___int64_std--_Uhash_compare_unsigned___int64_ea_180065AD8.c)
 *     _winrt::Udwm::Transitions::implementation::TransitionManager::TransitionManager_::_1_::dtor$38 @ 0x18006628A (_winrt--Udwm--Transitions--implementation--TransitionManager--TransitionManager_--_1_--dtor$38.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000FF20 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::_Hash_vec<std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<unsigned __int64>>,std::_Iterator_base0>>>::~_Hash_vec<std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<unsigned __int64>>,std::_Iterator_base0>>>(
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
