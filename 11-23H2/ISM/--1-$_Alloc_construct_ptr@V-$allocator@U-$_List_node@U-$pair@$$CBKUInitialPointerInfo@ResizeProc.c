/*
 * XREFs of ??1?$_Alloc_construct_ptr@V?$allocator@U?$_List_node@U?$pair@$$CBKUInitialPointerInfo@ResizeProcessor@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x180140964
 * Callers:
 *     _std::_List_node_emplace_op2_std::allocator_std::_List_node_CallOnThreadExit::CallbackData_void_______::_List_node_emplace_op2_std::allocator_std::_List_node_CallOnThreadExit::CallbackData_void__________::_1_::dtor$0 @ 0x1801408BD (_std--_List_node_emplace_op2_std--allocator_std--_List_node_CallOnThreadExit--CallbackData_void_.c)
 *     _std::_Hash_std::_Umap_traits_unsigned_long_ResizeProcessor::InitialPointerInfo_std::_Uhash_compare_unsigned_long_std::hash_unsigned_long__std::equal_to_unsigned_long____std::allocator_std::pair_unsigned_long_const__ResizeProcessor::InitialPointerInfo____0___::_Try_emplace_unsigned_long_const_&__::_1_::dtor$5 @ 0x180162F12 (_std--_Hash_std--_Umap_traits_unsigned_long_ResizeProcessor--InitialPointerInfo_std--_Uhash_comp.c)
 *     _std::_Hash_std::_Umap_traits_unsigned_long_ResizeProcessor::InitialPointerInfo_std::_Uhash_compare_unsigned_long_std::hash_unsigned_long__std::equal_to_unsigned_long____std::allocator_std::pair_unsigned_long_const__ResizeProcessor::InitialPointerInfo____0___::_Try_emplace_unsigned_long_const_&__::_1_::dtor$0 @ 0x180162F1E (_std--_Hash_std--_Umap_traits_unsigned_long_ResizeProcessor--InitialPointerInfo_std_ea_180162F1E.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A124 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_Alloc_construct_ptr<std::allocator<std::_List_node<std::pair<unsigned long const,ResizeProcessor::InitialPointerInfo>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_List_node<std::pair<unsigned long const,ResizeProcessor::InitialPointerInfo>,void *>>>(
        __int64 a1)
{
  void *v1; // rcx

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    std::_Deallocate<16,0>(v1, 0x60uLL);
}
