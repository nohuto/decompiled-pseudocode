/*
 * XREFs of ??1?$_Hash_vec@V?$allocator@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@_K@std@@@std@@U_Iterator_base0@2@@std@@@std@@@std@@QEAA@XZ @ 0x1800F111C
 * Callers:
 *     _winrt::Udwm::Transitions::implementation::TransitionManager::TransitionManager_::_1_::dtor$46 @ 0x180068594 (_winrt--Udwm--Transitions--implementation--TransitionManager--TransitionManager_--_1_--dtor$46.c)
 *     _std::_Hash_std::_Umap_traits_HWND_____winrt::Udwm::Transitions::ITransitionHandler_std::_Uhash_compare_HWND_____std::hash_HWND______std::equal_to_HWND________std::allocator_std::pair_HWND_____const_winrt::Udwm::Transitions::ITransitionHandler____0___::_Hash_std::_Umap_traits_HWND_____winrt::Udwm::Transitions::ITransitionHandler_std::_Uhash_compare_HWND_____std::hash_HWND______std::equal_to_HWND________std::allocator_std::pair_HWND_____const_winrt::Udwm::Transitions::ITransitionHandler____0____::_1_::dtor$1 @ 0x18006862A (_std--_Hash_std--_Umap_traits_HWND_____winrt--Udwm--Transitions--ITransitionHandler_ea_18006862A.c)
 *     _cereal::OutputArchive_cereal::JSONOutputArchive_0_::OutputArchive_cereal::JSONOutputArchive_0__::_1_::dtor$17 @ 0x1800F0932 (_cereal--OutputArchive_cereal--JSONOutputArchive_0_--OutputArchive_cereal--JSONOutp_ea_1800F0932.c)
 *     _std::_Hash_std::_Umap_traits_char_const___unsigned_int_std::_Uhash_compare_char_const___std::hash_char_const____std::equal_to_char_const______std::allocator_std::pair_char_const___const_unsigned_int____0___::_Hash_std::_Umap_traits_char_const___unsigned_int_std::_Uhash_compare_char_const___std::hash_char_const____std::equal_to_char_const______std::allocator_std::pair_char_const___const_unsigned_int____0____::_1_::dtor$1 @ 0x1800F09E8 (_std--_Hash_std--_Umap_traits_char_const___unsigned_int_std--_Uhash_compare_char_co_ea_1800F09E8.c)
 *     _std::_Hash_std::_Uset_traits_cereal::traits::detail::base_class_id_std::_Uhash_compare_cereal::traits::detail::base_class_id_cereal::traits::detail::base_class_id_hash_std::equal_to_cereal::traits::detail::base_class_id____std::allocator_cereal::traits::detail::base_class_id__0___::_Hash_std::_Uset_traits_cereal::traits::detail::base_class_id_std::_Uhash_compare_cereal::traits::detail::base_class_id_cereal::traits::detail::base_class_id_hash_std::equal_to_cereal::traits::detail::base_class_id____std::allocator_cereal::traits::detail::base_class_id__0____::_1_::dtor$1 @ 0x1800F0A84 (_std--_Hash_std--_Uset_traits_cereal--traits--detail--base_class_id_std--_Uhash_com_ea_1800F0A84.c)
 *     _std::_Hash_std::_Uset_traits_unsigned___int64_std::_Uhash_compare_unsigned___int64_std::hash_unsigned___int64__std::equal_to_unsigned___int64____std::allocator_unsigned___int64__0___::_Hash_std::_Uset_traits_unsigned___int64_std::_Uhash_compare_unsigned___int64_std::hash_unsigned___int64__std::equal_to_unsigned___int64____std::allocator_unsigned___int64__0____::_1_::dtor$1 @ 0x1800F0B18 (_std--_Hash_std--_Uset_traits_unsigned___int64_std--_Uhash_compare_unsigned___int64_ea_1800F0B18.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800558D4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
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
