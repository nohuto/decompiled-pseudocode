/*
 * XREFs of ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CBKUResultInfo@DragNDropProcessor@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18013D388
 * Callers:
 *     ??$emplace@AEAKUResultInfo@DragNDropProcessor@@@?$_Hash@V?$_Umap_traits@KUResultInfo@DragNDropProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUResultInfo@DragNDropProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUResultInfo@DragNDropProcessor@@@std@@@std@@@std@@@std@@_N@1@AEAK$$QEAUResultInfo@DragNDropProcessor@@@Z @ 0x18013CB08 (--$emplace@AEAKUResultInfo@DragNDropProcessor@@@-$_Hash@V-$_Umap_traits@KUResultInfo@DragNDropPr.c)
 *     _std::_Hash_std::_Umap_traits_unsigned_long_DragNDropProcessor::ResultInfo_std::_Uhash_compare_unsigned_long_std::hash_unsigned_long__std::equal_to_unsigned_long____std::allocator_std::pair_unsigned_long_const__DragNDropProcessor::ResultInfo____0___::emplace_unsigned_long_&_DragNDropProcessor::ResultInfo__::_1_::dtor$0 @ 0x18013CC71 (_std--_Hash_std--_Umap_traits_unsigned_long_DragNDropProcessor--ResultInfo_std--_Uhash_compare_u.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000E6AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x18004AF4C (--_V@YAXPEAX@Z.c)
 */

void __fastcall std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<unsigned long const,DragNDropProcessor::ResultInfo>,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<unsigned long const,DragNDropProcessor::ResultInfo>,void *>>>(
        __int64 a1)
{
  void **v2; // rcx

  v2 = *(void ***)(a1 + 8);
  if ( v2 )
  {
    if ( v2[3] )
    {
      operator delete[](v2[3]);
      v2 = *(void ***)(a1 + 8);
    }
    if ( v2 )
      std::_Deallocate<16,0>(v2, 0x38uLL);
  }
}
