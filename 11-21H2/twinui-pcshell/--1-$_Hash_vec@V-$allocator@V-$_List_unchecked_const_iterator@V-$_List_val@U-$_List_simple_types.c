/*
 * XREFs of ??1?$_Hash_vec@V?$allocator@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@_K@std@@@std@@U_Iterator_base0@2@@std@@@std@@@std@@QEAA@XZ @ 0x18034CA38
 * Callers:
 *     _cereal::OutputArchive_cereal::JSONOutputArchive_0_::OutputArchive_cereal::JSONOutputArchive_0__::_1_::dtor$57 @ 0x180218B10 (_cereal--OutputArchive_cereal--JSONOutputArchive_0_--OutputArchive_cereal--JSONOutp_ea_180218B10.c)
 *     _std::_Hash_std::_Uset_traits_unsigned___int64_std::_Uhash_compare_unsigned___int64_std::hash_unsigned___int64__std::equal_to_unsigned___int64____std::allocator_unsigned___int64__0___::_Hash_std::_Uset_traits_unsigned___int64_std::_Uhash_compare_unsigned___int64_std::hash_unsigned___int64__std::equal_to_unsigned___int64____std::allocator_unsigned___int64__0____::_1_::dtor$1 @ 0x180218BD0 (_std--_Hash_std--_Uset_traits_unsigned___int64_std--_Uhash_compare_unsigned___int64_ea_180218BD0.c)
 *     _std::_Hash_std::_Uset_traits_cereal::traits::detail::base_class_id_std::_Uhash_compare_cereal::traits::detail::base_class_id_cereal::traits::detail::base_class_id_hash_std::equal_to_cereal::traits::detail::base_class_id____std::allocator_cereal::traits::detail::base_class_id__0___::_Hash_std::_Uset_traits_cereal::traits::detail::base_class_id_std::_Uhash_compare_cereal::traits::detail::base_class_id_cereal::traits::detail::base_class_id_hash_std::equal_to_cereal::traits::detail::base_class_id____std::allocator_cereal::traits::detail::base_class_id__0____::_1_::dtor$1 @ 0x18022C16E (_std--_Hash_std--_Uset_traits_cereal--traits--detail--base_class_id_std--_Uhash_com_ea_18022C16E.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1802E911C (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 */

__int64 __fastcall std::_Hash_vec<std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<unsigned __int64>>,std::_Iterator_base0>>>::~_Hash_vec<std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<unsigned __int64>>,std::_Iterator_base0>>>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  void *v4; // rcx
  __int64 result; // rax
  unsigned __int64 v6; // [rsp+30h] [rbp+8h] BYREF
  void *v7; // [rsp+38h] [rbp+10h] BYREF

  v4 = *(void **)a1;
  v7 = v4;
  v6 = (*(_QWORD *)(a1 + 8) - (_QWORD)v4) & 0xFFFFFFFFFFFFFFF8uLL;
  if ( v6 >= 0x1000 )
  {
    std::_Adjust_manually_vector_aligned(&v7, &v6, a3);
    v4 = v7;
  }
  operator delete(v4);
  result = 0LL;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  return result;
}
