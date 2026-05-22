/*
 * XREFs of ??1?$list@U?$pair@$$CB_KV?$shared_ptr@VSystemCursorShape2@@@std@@@std@@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@VSystemCursorShape2@@@std@@@std@@@2@@std@@QEAA@XZ @ 0x1800D7A54
 * Callers:
 *     _SpatialRimDeviceCollection::SpatialRimDeviceCollection_::_1_::dtor$17 @ 0x18006C243 (_SpatialRimDeviceCollection--SpatialRimDeviceCollection_--_1_--dtor$17.c)
 *     _GestureServices::GestureServices_::_1_::dtor$25 @ 0x18006E534 (_GestureServices--GestureServices_--_1_--dtor$25.c)
 *     _std::_Hash_std::_Umap_traits_unsigned___int64_std::shared_ptr_GestureHandler__std::_Uhash_compare_unsigned___int64_std::hash_unsigned___int64__std::equal_to_unsigned___int64____std::allocator_std::pair_unsigned___int64_const__std::shared_ptr_GestureHandler______0___::_Hash_std::_Umap_traits_unsigned___int64_std::shared_ptr_GestureHandler__std::_Uhash_compare_unsigned___int64_std::hash_unsigned___int64__std::equal_to_unsigned___int64____std::allocator_std::pair_unsigned___int64_const__std::shared_ptr_GestureHandler______0____::_1_::dtor$0 @ 0x18006EC52 (_std--_Hash_std--_Umap_traits_unsigned___int64_std--shared_ptr_GestureHandler__std--_Uhash_compa.c)
 *     _std::_Hash_std::_Umap_traits_unsigned___int64_std::shared_ptr_SystemCursorShape2__std::_Uhash_compare_unsigned___int64_std::hash_unsigned___int64__std::equal_to_unsigned___int64____std::allocator_std::pair_unsigned___int64_const__std::shared_ptr_SystemCursorShape2______0___::_Hash_std::_Umap_traits_unsigned___int64_std::shared_ptr_SystemCursorShape2__std::_Uhash_compare_unsigned___int64_std::hash_unsigned___int64__std::equal_to_unsigned___int64____std::allocator_std::pair_unsigned___int64_const__std::shared_ptr_SystemCursorShape2______0____::_1_::dtor$0 @ 0x180103F61 (_std--_Hash_std--_Umap_traits_unsigned___int64_std--shared_ptr_SystemCursorShape2___ea_180103F61.c)
 *     _SystemCursorService2::SystemCursorService2_::_1_::dtor$16 @ 0x1801041B6 (_SystemCursorService2--SystemCursorService2_--_1_--dtor$16.c)
 *     _SystemCursorShape2::SystemCursorShape2_::_1_::dtor$9 @ 0x1801042E2 (_SystemCursorShape2--SystemCursorShape2_--_1_--dtor$9.c)
 * Callees:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBIV?$shared_ptr@VCustomCursorApplication2@@@std@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBIV?$shared_ptr@VCustomCursorApplication2@@@std@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBIV?$shared_ptr@VCustomCursorApplication2@@@std@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800D704C (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBIV-$shared_ptr@VCustomCursorApplication.c)
 */

void __fastcall std::list<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursorShape2>>>::~list<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursorShape2>>>(
        void **a1)
{
  std::_List_node<std::pair<unsigned int const,std::shared_ptr<CustomCursorApplication2>>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned int const,std::shared_ptr<CustomCursorApplication2>>,void *>>>(
    (__int64)a1,
    (_QWORD **)*a1);
  std::_Deallocate<16,0>(*a1, 0x28uLL);
}
