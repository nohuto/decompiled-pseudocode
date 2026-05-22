/*
 * XREFs of ??1?$list@U?$pair@$$CBKUEdgyDragMessageInfo@EdgyProcessor@@@std@@V?$allocator@U?$pair@$$CBKUEdgyDragMessageInfo@EdgyProcessor@@@std@@@2@@std@@QEAA@XZ @ 0x180148504
 * Callers:
 *     _std::_Hash_std::_Umap_traits_unsigned_long_EdgyProcessor::EdgyDragMessageInfo_std::_Uhash_compare_unsigned_long_std::hash_unsigned_long__std::equal_to_unsigned_long____std::allocator_std::pair_unsigned_long_const__EdgyProcessor::EdgyDragMessageInfo____0___::_Hash_std::_Umap_traits_unsigned_long_EdgyProcessor::EdgyDragMessageInfo_std::_Uhash_compare_unsigned_long_std::hash_unsigned_long__std::equal_to_unsigned_long____std::allocator_std::pair_unsigned_long_const__EdgyProcessor::EdgyDragMessageInfo____0____::_1_::dtor$0 @ 0x1801480A9 (_std--_Hash_std--_Umap_traits_unsigned_long_EdgyProcessor--EdgyDragMessageInfo_std-_ea_1801480A9.c)
 * Callees:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBKUEdgyDragMessageInfo@EdgyProcessor@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBKUEdgyDragMessageInfo@EdgyProcessor@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBKUEdgyDragMessageInfo@EdgyProcessor@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180147A84 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBKUEdgyDragMessageInfo@EdgyProcessor@@@s.c)
 */

void __fastcall std::list<std::pair<unsigned long const,EdgyProcessor::EdgyDragMessageInfo>>::~list<std::pair<unsigned long const,EdgyProcessor::EdgyDragMessageInfo>>(
        void **a1)
{
  std::_List_node<std::pair<unsigned long const,EdgyProcessor::EdgyDragMessageInfo>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned long const,EdgyProcessor::EdgyDragMessageInfo>,void *>>>(
    (__int64)a1,
    (_QWORD **)*a1);
  std::_Deallocate<16,0>(*a1, 0x88uLL);
}
