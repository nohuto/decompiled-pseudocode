/*
 * XREFs of ??1?$list@U?$pair@$$CBIUTargetingInfo@ForegroundManager@@@std@@V?$allocator@U?$pair@$$CBIUTargetingInfo@ForegroundManager@@@std@@@2@@std@@QEAA@XZ @ 0x1800A100C
 * Callers:
 *     _std::_Hash_std::_Umap_traits_unsigned_int_ForegroundManager::TargetingInfo_std::_Uhash_compare_unsigned_int_std::hash_unsigned_int__std::equal_to_unsigned_int____std::allocator_std::pair_unsigned_int_const__ForegroundManager::TargetingInfo____0___::_Hash_std::_Umap_traits_unsigned_int_ForegroundManager::TargetingInfo_std::_Uhash_compare_unsigned_int_std::hash_unsigned_int__std::equal_to_unsigned_int____std::allocator_std::pair_unsigned_int_const__ForegroundManager::TargetingInfo____0____::_1_::dtor$0 @ 0x18006E6DA (_std--_Hash_std--_Umap_traits_unsigned_int_ForegroundManager--TargetingInfo_std--_Uhash_compare_.c)
 *     _DragNDropProcessor::DragNDropProcessor_::_1_::dtor$18 @ 0x18015C41B (_DragNDropProcessor--DragNDropProcessor_--_1_--dtor$18.c)
 *     _std::_Hash_std::_Umap_traits_unsigned_long_ResizeProcessor::PointerCache_std::_Uhash_compare_unsigned_long_std::hash_unsigned_long__std::equal_to_unsigned_long____std::allocator_std::pair_unsigned_long_const__ResizeProcessor::PointerCache____0___::_Hash_std::_Umap_traits_unsigned_long_ResizeProcessor::PointerCache_std::_Uhash_compare_unsigned_long_std::hash_unsigned_long__std::equal_to_unsigned_long____std::allocator_std::pair_unsigned_long_const__ResizeProcessor::PointerCache____0____::_1_::dtor$0 @ 0x18016334D (_std--_Hash_std--_Umap_traits_unsigned_long_ResizeProcessor--PointerCache_std--_Uha_ea_18016334D.c)
 * Callees:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBKUPointerCache@DragNDropProcessor@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBKUPointerCache@DragNDropProcessor@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBKUPointerCache@DragNDropProcessor@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800A0930 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBKUPointerCache@DragNDropProcessor@@@std.c)
 */

void __fastcall std::list<std::pair<unsigned int const,ForegroundManager::TargetingInfo>>::~list<std::pair<unsigned int const,ForegroundManager::TargetingInfo>>(
        void **a1)
{
  std::_List_node<std::pair<unsigned long const,DragNDropProcessor::PointerCache>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned long const,DragNDropProcessor::PointerCache>,void *>>>(
    (__int64)a1,
    (_QWORD **)*a1);
  std::_Deallocate<16,0>(*a1, 0x30uLL);
}
