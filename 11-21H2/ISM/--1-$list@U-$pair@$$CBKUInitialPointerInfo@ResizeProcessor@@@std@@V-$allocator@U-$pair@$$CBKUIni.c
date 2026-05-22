/*
 * XREFs of ??1?$list@U?$pair@$$CBKUInitialPointerInfo@ResizeProcessor@@@std@@V?$allocator@U?$pair@$$CBKUInitialPointerInfo@ResizeProcessor@@@std@@@2@@std@@QEAA@XZ @ 0x180144844
 * Callers:
 *     _std::_Hash_std::_Umap_traits_unsigned_long_ResizeProcessor::InitialPointerInfo_std::_Uhash_compare_unsigned_long_std::hash_unsigned_long__std::equal_to_unsigned_long____std::allocator_std::pair_unsigned_long_const__ResizeProcessor::InitialPointerInfo____0___::_Hash_std::_Umap_traits_unsigned_long_ResizeProcessor::InitialPointerInfo_std::_Uhash_compare_unsigned_long_std::hash_unsigned_long__std::equal_to_unsigned_long____std::allocator_std::pair_unsigned_long_const__ResizeProcessor::InitialPointerInfo____0____::_1_::dtor$0 @ 0x18014457D (_std--_Hash_std--_Umap_traits_unsigned_long_ResizeProcessor--InitialPointerInfo_std_ea_18014457D.c)
 * Callees:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBKUInitialPointerInfo@ResizeProcessor@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBKUInitialPointerInfo@ResizeProcessor@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBKUInitialPointerInfo@ResizeProcessor@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180143FDC (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBKUInitialPointerInfo@ResizeProcessor@@@.c)
 */

void __fastcall std::list<std::pair<unsigned long const,ResizeProcessor::InitialPointerInfo>>::~list<std::pair<unsigned long const,ResizeProcessor::InitialPointerInfo>>(
        void **a1)
{
  std::_List_node<std::pair<unsigned long const,ResizeProcessor::InitialPointerInfo>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned long const,ResizeProcessor::InitialPointerInfo>,void *>>>(
    (__int64)a1,
    (_QWORD **)*a1);
  std::_Deallocate<16,0>(*a1, 0x60uLL);
}
