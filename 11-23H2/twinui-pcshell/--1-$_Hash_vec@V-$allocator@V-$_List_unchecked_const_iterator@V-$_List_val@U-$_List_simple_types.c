/*
 * XREFs of ??1?$_Hash_vec@V?$allocator@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@_K@std@@@std@@U_Iterator_base0@2@@std@@@std@@@std@@QEAA@XZ @ 0x180416C00
 * Callers:
 *     _winrt::Windows::Internal::Shell::implementation::RemoteDesktopCollection::GetAll_::_1_::dtor$6 @ 0x1802B9BC9 (_winrt--Windows--Internal--Shell--implementation--RemoteDesktopCollection--GetAll_--_1_--dtor$6.c)
 *     _std::_Hash_std::_Uset_traits_unsigned___int64_std::_Uhash_compare_unsigned___int64_std::hash_unsigned___int64__std::equal_to_unsigned___int64____std::allocator_unsigned___int64__0___::_Hash_std::_Uset_traits_unsigned___int64_std::_Uhash_compare_unsigned___int64_std::hash_unsigned___int64__std::equal_to_unsigned___int64____std::allocator_unsigned___int64__0____::_1_::dtor$1 @ 0x1802BA06F (_std--_Hash_std--_Uset_traits_unsigned___int64_std--_Uhash_compare_unsigned___int64_ea_1802BA06F.c)
 *     _std::_Ref_count_obj2_winrt::Windows::Internal::Shell::implementation::RemoteDesktopCollection_::_Ref_count_obj2_winrt::Windows::Internal::Shell::implementation::RemoteDesktopCollection____::_1_::dtor$9 @ 0x1802C539A (_std--_Ref_count_obj2_winrt--Windows--Internal--Shell--implementation--RemoteDeskto_ea_1802C539A.c)
 *     _std::_Hash_std::_Uset_traits_unsigned___int64_std::_Uhash_compare_unsigned___int64_std::hash_unsigned___int64__std::equal_to_unsigned___int64____std::allocator_unsigned___int64__0___::_Hash_std::_Uset_traits_unsigned___int64_std::_Uhash_compare_unsigned___int64_std::hash_unsigned___int64__std::equal_to_unsigned___int64____std::allocator_unsigned___int64__0____std::allocator_std::_List_node_unsigned___int64_void________::_1_::dtor$1 @ 0x180726AC1 (_std--_Hash_std--_Uset_traits_unsigned___int64_std--_Uhash_compare_unsigned___int64_ea_180726AC1.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1803920BC (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 */

__int64 __fastcall std::_Hash_vec<std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<unsigned __int64>>,std::_Iterator_base0>>>::~_Hash_vec<std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<unsigned __int64>>,std::_Iterator_base0>>>(
        __int64 a1)
{
  void *v2; // rcx
  __int64 result; // rax
  unsigned __int64 v4; // [rsp+30h] [rbp+8h] BYREF
  void *v5; // [rsp+38h] [rbp+10h] BYREF

  v2 = *(void **)a1;
  v5 = v2;
  v4 = (*(_QWORD *)(a1 + 8) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF8uLL;
  if ( v4 >= 0x1000 )
  {
    std::_Adjust_manually_vector_aligned(&v5, &v4);
    v2 = v5;
  }
  operator delete(v2);
  result = 0LL;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  return result;
}
