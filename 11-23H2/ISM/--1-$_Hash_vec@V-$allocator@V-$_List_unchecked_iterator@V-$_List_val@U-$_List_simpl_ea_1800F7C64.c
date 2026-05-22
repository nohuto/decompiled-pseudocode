/*
 * XREFs of ??1?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@@std@@@std@@QEAA@XZ @ 0x1800F7C64
 * Callers:
 *     _Win32kInterop::DoConvergedHitTestCallback_::_1_::dtor$21 @ 0x18006BA60 (_Win32kInterop--DoConvergedHitTestCallback_--_1_--dtor$21.c)
 *     _std::_Hash_std::_Umap_traits_unsigned_long_Microsoft::WRL::ComPtr_IInputTarget__std::_Uhash_compare_unsigned_long_std::hash_unsigned_long__std::equal_to_unsigned_long____std::allocator_std::pair_unsigned_long_const__Microsoft::WRL::ComPtr_IInputTarget______0___::_Hash_std::_Umap_traits_unsigned_long_Microsoft::WRL::ComPtr_IInputTarget__std::_Uhash_compare_unsigned_long_std::hash_unsigned_long__std::equal_to_unsigned_long____std::allocator_std::pair_unsigned_long_const__Microsoft::WRL::ComPtr_IInputTarget______0____::_1_::dtor$1 @ 0x18006FC5B (_std--_Hash_std--_Umap_traits_unsigned_long_Microsoft--WRL--ComPtr_IInputTarget__st_ea_18006FC5B.c)
 *     _std::_Hash_std::_Umap_traits_unsigned_long_Microsoft::WRL::ComPtr_IInputTarget__std::_Uhash_compare_unsigned_long_std::hash_unsigned_long__std::equal_to_unsigned_long____std::allocator_std::pair_unsigned_long_const__Microsoft::WRL::ComPtr_IInputTarget______0___::_Hash_std::_Umap_traits_unsigned_long_Microsoft::WRL::ComPtr_IInputTarget__std::_Uhash_compare_unsigned_long_std::hash_unsigned_long__std::equal_to_unsigned_long____std::allocator_std::pair_unsigned_long_const__Microsoft::WRL::ComPtr_IInputTarget______0____std::allocator_std::_List_node_std::pair_unsigned_long_const__Microsoft::WRL::ComPtr_IInputTarget____void________::_1_::dtor$1 @ 0x1801BE4D4 (_std--_Hash_std--_Umap_traits_unsigned_long_Microsoft--WRL--ComPtr_IInputTarget__st_ea_1801BE4D4.c)
 *     _std::_Hash_std::_Umap_traits_unsigned_long_Microsoft::WRL::ComPtr_IInputTarget__std::_Uhash_compare_unsigned_long_std::hash_unsigned_long__std::equal_to_unsigned_long____std::allocator_std::pair_unsigned_long_const__Microsoft::WRL::ComPtr_IInputTarget______0___::_Hash_std::_Umap_traits_unsigned_long_Microsoft::WRL::ComPtr_IInputTarget__std::_Uhash_compare_unsigned_long_std::hash_unsigned_long__std::equal_to_unsigned_long____std::allocator_std::pair_unsigned_long_const__Microsoft::WRL::ComPtr_IInputTarget______0____::_1_::dtor$1_0 @ 0x1801BF64D (_std--_Hash_std--_Umap_traits_unsigned_long_Microsoft--WRL--ComPtr_IInputTarget__st_ea_1801BF64D.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800569E0 (--3@YAXPEAX_K@Z.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x180096C5C (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 */

__int64 __fastcall std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IInputTarget>>>>>>>::~_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IInputTarget>>>>>>>(
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
