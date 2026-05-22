/*
 * XREFs of ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CB_KV?$shared_ptr@VSystemCursor2@@@std@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1800BEA38
 * Callers:
 *     ??$_Try_emplace@AEBK$$V@?$_Hash@V?$_Umap_traits@KV?$shared_ptr@ULegacyDeviceInfo@@@std@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@2@V?$allocator@U?$pair@$$CBKV?$shared_ptr@ULegacyDeviceInfo@@@std@@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBKV?$shared_ptr@ULegacyDeviceInfo@@@std@@@std@@PEAX@std@@_N@1@AEBK@Z @ 0x1800BE268 (--$_Try_emplace@AEBK$$V@-$_Hash@V-$_Umap_traits@KV-$shared_ptr@ULegacyDeviceInfo@@@std@@V-$_Uhas.c)
 *     _std::_Hash_std::_Umap_traits_unsigned_long_std::shared_ptr_LegacyDeviceInfo__std::_Uhash_compare_unsigned_long_std::hash_unsigned_long__std::equal_to_unsigned_long____std::allocator_std::pair_unsigned_long_const__std::shared_ptr_LegacyDeviceInfo______0___::_Try_emplace_unsigned_long_const_&__::_1_::dtor$0 @ 0x1800BE3F7 (_std--_Hash_std--_Umap_traits_unsigned_long_std--shared_ptr_LegacyDeviceInfo__std--_ea_1800BE3F7.c)
 *     ??$_Try_emplace@AEBI$$V@?$_Hash@V?$_Umap_traits@IV?$shared_ptr@VCustomCursorApplication2@@@std@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@2@V?$allocator@U?$pair@$$CBIV?$shared_ptr@VCustomCursorApplication2@@@std@@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBIV?$shared_ptr@VCustomCursorApplication2@@@std@@@std@@PEAX@std@@_N@1@AEBI@Z @ 0x1800E7D4C (--$_Try_emplace@AEBI$$V@-$_Hash@V-$_Umap_traits@IV-$shared_ptr@VCustomCursorApplication2@@@std@@.c)
 *     _std::_Hash_std::_Umap_traits_unsigned_int_std::shared_ptr_SystemCursorShapeBitmap2__std::_Uhash_compare_unsigned_int_std::hash_unsigned_int__std::equal_to_unsigned_int____std::allocator_std::pair_unsigned_int_const__std::shared_ptr_SystemCursorShapeBitmap2______0___::_Try_emplace_unsigned_int_const_&__::_1_::dtor$0 @ 0x1800E7EDB (_std--_Hash_std--_Umap_traits_unsigned_int_std--shared_ptr_SystemCursorShapeBitmap2_ea_1800E7EDB.c)
 *     ??$_Try_emplace@AEB_K$$V@?$_Hash@V?$_Umap_traits@_KV?$shared_ptr@VSystemCursor2@@@std@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@VSystemCursor2@@@std@@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CB_KV?$shared_ptr@VSystemCursor2@@@std@@@std@@PEAX@std@@_N@1@AEB_K@Z @ 0x1800EAF2C (--$_Try_emplace@AEB_K$$V@-$_Hash@V-$_Umap_traits@_KV-$shared_ptr@VSystemCursor2@@@std@@V-$_Uhash.c)
 *     _std::_Hash_std::_Umap_traits_unsigned___int64_std::shared_ptr_SystemCursorShape2__std::_Uhash_compare_unsigned___int64_std::hash_unsigned___int64__std::equal_to_unsigned___int64____std::allocator_std::pair_unsigned___int64_const__std::shared_ptr_SystemCursorShape2______0___::_Try_emplace_unsigned___int64_const_&__::_1_::dtor$0 @ 0x1800EB0BC (_std--_Hash_std--_Umap_traits_unsigned___int64_std--shared_ptr_SystemCursorShape2___ea_1800EB0BC.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000E6AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800417B0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursor2>>,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursor2>>,void *>>>(
        __int64 a1)
{
  std::_Ref_count_base **v2; // rcx

  v2 = *(std::_Ref_count_base ***)(a1 + 8);
  if ( v2 )
  {
    if ( v2[4] )
    {
      std::_Ref_count_base::_Decref(v2[4]);
      v2 = *(std::_Ref_count_base ***)(a1 + 8);
    }
    if ( v2 )
      std::_Deallocate<16,0>(v2, 0x28uLL);
  }
}
