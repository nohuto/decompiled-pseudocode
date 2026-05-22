/*
 * XREFs of ??1?$list@U?$pair@$$CB_KV?$shared_ptr@VSystemCursorShape2@@@std@@@std@@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@VSystemCursorShape2@@@std@@@std@@@2@@std@@QEAA@XZ @ 0x1800E695C
 * Callers:
 *     _SpatialRimDeviceCollection::SpatialRimDeviceCollection_::_1_::dtor$17 @ 0x18007FE4D (_SpatialRimDeviceCollection--SpatialRimDeviceCollection_--_1_--dtor$17.c)
 *     _GestureServices::GestureServices_::_1_::dtor$25 @ 0x180080B9F (_GestureServices--GestureServices_--_1_--dtor$25.c)
 *     _std::_Hash_std::_Umap_traits_unsigned___int64_std::shared_ptr_GestureHandler__std::_Uhash_compare_unsigned___int64_std::hash_unsigned___int64__std::equal_to_unsigned___int64____std::allocator_std::pair_unsigned___int64_const__std::shared_ptr_GestureHandler______0___::_Hash_std::_Umap_traits_unsigned___int64_std::shared_ptr_GestureHandler__std::_Uhash_compare_unsigned___int64_std::hash_unsigned___int64__std::equal_to_unsigned___int64____std::allocator_std::pair_unsigned___int64_const__std::shared_ptr_GestureHandler______0____::_1_::dtor$0 @ 0x18008380F (_std--_Hash_std--_Umap_traits_unsigned___int64_std--shared_ptr_GestureHandler__std--_Uhash_compa.c)
 *     _std::_Hash_std::_Umap_traits_unsigned___int64_std::shared_ptr_SystemCursorShape2__std::_Uhash_compare_unsigned___int64_std::hash_unsigned___int64__std::equal_to_unsigned___int64____std::allocator_std::pair_unsigned___int64_const__std::shared_ptr_SystemCursorShape2______0___::_Hash_std::_Umap_traits_unsigned___int64_std::shared_ptr_SystemCursorShape2__std::_Uhash_compare_unsigned___int64_std::hash_unsigned___int64__std::equal_to_unsigned___int64____std::allocator_std::pair_unsigned___int64_const__std::shared_ptr_SystemCursorShape2______0____::_1_::dtor$0 @ 0x180112AA1 (_std--_Hash_std--_Umap_traits_unsigned___int64_std--shared_ptr_SystemCursorShape2___ea_180112AA1.c)
 *     _SystemCursorService2::SystemCursorService2_::_1_::dtor$16 @ 0x180112CF6 (_SystemCursorService2--SystemCursorService2_--_1_--dtor$16.c)
 *     _SystemCursorShape2::SystemCursorShape2_::_1_::dtor$9 @ 0x180112E22 (_SystemCursorShape2--SystemCursorShape2_--_1_--dtor$9.c)
 * Callees:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBIV?$shared_ptr@VCustomCursorApplication2@@@std@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBIV?$shared_ptr@VCustomCursorApplication2@@@std@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBIV?$shared_ptr@VCustomCursorApplication2@@@std@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800E5E78 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBIV-$shared_ptr@VCustomCursorApplication.c)
 */

void __fastcall std::list<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursorShape2>>>::~list<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursorShape2>>>(
        void **a1)
{
  std::_List_node<std::pair<unsigned int const,std::shared_ptr<CustomCursorApplication2>>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned int const,std::shared_ptr<CustomCursorApplication2>>,void *>>>(
    (__int64)a1,
    (_QWORD **)*a1);
  std::_Deallocate<16,0>(*a1, 0x28uLL);
}
