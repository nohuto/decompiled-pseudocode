/*
 * XREFs of ??1?$list@IV?$allocator@I@std@@@std@@QEAA@XZ @ 0x18022187C
 * Callers:
 *     _std::_Hash_std::_Umap_traits_int_unsigned_int_std::_Uhash_compare_int_std::hash_int__std::equal_to_int____std::allocator_std::pair_int_const__unsigned_int____0___::_Hash_std::_Umap_traits_int_unsigned_int_std::_Uhash_compare_int_std::hash_int__std::equal_to_int____std::allocator_std::pair_int_const__unsigned_int____0____::_1_::dtor$0 @ 0x1802212C5 (_std--_Hash_std--_Umap_traits_int_unsigned_int_std--_Uhash_compare_int_std--hash_in_ea_1802212C5.c)
 *     _std::_Hash_std::_Uset_traits_unsigned_int_std::_Uhash_compare_unsigned_int_std::hash_unsigned_int__std::equal_to_unsigned_int____std::allocator_unsigned_int__0___::_Hash_std::_Uset_traits_unsigned_int_std::_Uhash_compare_unsigned_int_std::hash_unsigned_int__std::equal_to_unsigned_int____std::allocator_unsigned_int__0____::_1_::dtor$0 @ 0x18050BDF9 (_std--_Hash_std--_Uset_traits_unsigned_int_std--_Uhash_compare_unsigned_int_std--ha_ea_18050BDF9.c)
 *     _std::_Hash_std::_Uset_traits_unsigned_int_std::_Uhash_compare_unsigned_int_std::hash_unsigned_int__std::equal_to_unsigned_int____std::allocator_unsigned_int__0___::_Hash_std::_Uset_traits_unsigned_int_std::_Uhash_compare_unsigned_int_std::hash_unsigned_int__std::equal_to_unsigned_int____std::allocator_unsigned_int__0____std::allocator_std::_List_node_unsigned_int_void________::_1_::dtor$0 @ 0x1807269DD (_std--_Hash_std--_Uset_traits_unsigned_int_std--_Uhash_compare_unsigned_int_std--ha_ea_1807269DD.c)
 *     _std::_Hash_std::_Umap_traits_enum_winrt::Windows::Internal::Shell::CloudPCState_unsigned_int_std::_Uhash_compare_enum_winrt::Windows::Internal::Shell::CloudPCState_std::hash_enum_winrt::Windows::Internal::Shell::CloudPCState__std::equal_to_enum_winrt::Windows::Internal::Shell::CloudPCState____std::allocator_std::pair_enum_winrt::Windows::Internal::Shell::CloudPCState_const__unsigned_int____0___::_Hash_std::_Umap_traits_enum_winrt::Windows::Internal::Shell::CloudPCState_unsigned_int_std::_Uhash_compare_enum_winrt::Windows::Internal::Shell::CloudPCState_std::hash_enum_winrt::Windows::Internal::Shell::CloudPCState__std::equal_to_enum_winrt::Windows::Internal::Shell::CloudPCState____std::allocator_std::pair_enum_winrt::Windows::Internal::Shell::CloudPCState_const__unsigned_int____0____::_1_::dtor$0 @ 0x180735A2D (_std--_Hash_std--_Umap_traits_enum_winrt--Windows--Internal--Shell--CloudPCState_un_ea_180735A2D.c)
 * Callees:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBW4CloudPCState@Shell@Internal@Windows@winrt@@I@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBW4CloudPCState@Shell@Internal@Windows@winrt@@I@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBW4CloudPCState@Shell@Internal@Windows@winrt@@I@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18022058C (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBW4CloudPCState@Shell@Internal@Windows@w.c)
 */

void __fastcall std::list<unsigned int>::~list<unsigned int>(void **a1)
{
  std::_List_node<std::pair<enum winrt::Windows::Internal::Shell::CloudPCState const,unsigned int>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<enum winrt::Windows::Internal::Shell::CloudPCState const,unsigned int>,void *>>>(
    (__int64)a1,
    (_QWORD **)*a1);
  std::_Deallocate<16,0>(*a1, 0x18uLL);
}
