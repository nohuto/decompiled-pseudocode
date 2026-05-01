/*
 * XREFs of ??1?$list@IV?$allocator@I@std@@@std@@QEAA@XZ @ 0x18045AC30
 * Callers:
 *     _std::_Hash_std::_Umap_traits_unsigned_int_bool_std::_Uhash_compare_unsigned_int_std::hash_unsigned_int__std::equal_to_unsigned_int____std::allocator_std::pair_unsigned_int_const__bool____0___::_Hash_std::_Umap_traits_unsigned_int_bool_std::_Uhash_compare_unsigned_int_std::hash_unsigned_int__std::equal_to_unsigned_int____std::allocator_std::pair_unsigned_int_const__bool____0____::_1_::dtor$0 @ 0x18021F507 (_std--_Hash_std--_Umap_traits_unsigned_int_bool_std--_Uhash_compare_unsigned_int_std--hash_unsig.c)
 *     _KBViewInfo::KBViewInfo_::_1_::dtor$13 @ 0x18045AA93 (_KBViewInfo--KBViewInfo_--_1_--dtor$13.c)
 * Callees:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBI_N@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBI_N@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBI_N@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180459F40 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBI_N@std@@PEAX@std@@@std@@@-$_List_node@.c)
 */

void __fastcall std::list<unsigned int>::~list<unsigned int>(void **a1)
{
  std::_List_node<std::pair<unsigned int const,bool>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned int const,bool>,void *>>>(
    (__int64)a1,
    (_QWORD **)*a1);
  std::_Deallocate<16,0>(*a1, 0x18uLL);
}
