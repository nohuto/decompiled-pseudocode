/*
 * XREFs of ??1?$_Alloc_construct_ptr@V?$allocator@U?$_List_node@U?$pair@$$CBIV?$unordered_set@_KU?$hash@_K@std@@U?$equal_to@_K@2@V?$allocator@_K@2@@std@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1800A0F1C
 * Callers:
 *     _std::_Hash_std::_Umap_traits_unsigned_int_std::unordered_set_unsigned___int64_std::hash_unsigned___int64__std::equal_to_unsigned___int64__std::allocator_unsigned___int64____std::_Uhash_compare_unsigned_int_std::hash_unsigned_int__std::equal_to_unsigned_int____std::allocator_std::pair_unsigned_int_const__std::unordered_set_unsigned___int64_std::hash_unsigned___int64__std::equal_to_unsigned___int64__std::allocator_unsigned___int64________0___::_Try_emplace_unsigned_int_const_&__::_1_::dtor$5 @ 0x18006D158 (_std--_Hash_std--_Umap_traits_unsigned_int_std--unordered_set_unsigned___int64_std-_ea_18006D158.c)
 *     _std::_Hash_std::_Umap_traits_unsigned_long_std::unordered_map_unsigned_long_Win32kInterop::TargetingInfo_std::hash_unsigned_long__std::equal_to_unsigned_long__std::allocator_std::pair_unsigned_long_const__Win32kInterop::TargetingInfo______std::_Uhash_compare_unsigned_long_std::hash_unsigned_long__std::equal_to_unsigned_long____std::allocator_std::pair_unsigned_long_const__std::unordered_map_unsigned_long_Win32kInterop::TargetingInfo_std::hash_unsigned_long__std::equal_to_unsigned_long__std::allocator_std::pair_unsigned_long_const__Win32kInterop::TargetingInfo__________0___::_Try_emplace_unsigned_long_const_&__::_1_::dtor$5 @ 0x1800F751F (_std--_Hash_std--_Umap_traits_unsigned_long_std--unordered_map_unsigned_long_Win32k_ea_1800F751F.c)
 *     _std::_Hash_std::_Umap_traits_IInputTarget___std::unordered_set_unsigned_long_std::hash_unsigned_long__std::equal_to_unsigned_long__std::allocator_unsigned_long____std::_Uhash_compare_IInputTarget___std::hash_IInputTarget____std::equal_to_IInputTarget______std::allocator_std::pair_IInputTarget___const_std::unordered_set_unsigned_long_std::hash_unsigned_long__std::equal_to_unsigned_long__std::allocator_unsigned_long________0___::_Try_emplace_IInputTarget____::_1_::dtor$5 @ 0x1801BF181 (_std--_Hash_std--_Umap_traits_IInputTarget___std--unordered_set_unsigned_long_std--hash_unsigned.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A124 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_Alloc_construct_ptr<std::allocator<std::_List_node<std::pair<unsigned int const,std::unordered_set<unsigned __int64>>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_List_node<std::pair<unsigned int const,std::unordered_set<unsigned __int64>>,void *>>>(
        __int64 a1)
{
  void *v1; // rcx

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    std::_Deallocate<16,0>(v1, 0x58uLL);
}
