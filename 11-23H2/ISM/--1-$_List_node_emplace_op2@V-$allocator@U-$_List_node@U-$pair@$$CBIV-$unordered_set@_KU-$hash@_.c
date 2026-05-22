/*
 * XREFs of ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CBIV?$unordered_set@_KU?$hash@_K@std@@U?$equal_to@_K@2@V?$allocator@_K@2@@std@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1800A0F64
 * Callers:
 *     _std::_Hash_std::_Umap_traits_unsigned_int_std::unordered_set_unsigned___int64_std::hash_unsigned___int64__std::equal_to_unsigned___int64__std::allocator_unsigned___int64____std::_Uhash_compare_unsigned_int_std::hash_unsigned_int__std::equal_to_unsigned_int____std::allocator_std::pair_unsigned_int_const__std::unordered_set_unsigned___int64_std::hash_unsigned___int64__std::equal_to_unsigned___int64__std::allocator_unsigned___int64________0___::_Try_emplace_unsigned_int_const_&__::_1_::dtor$0 @ 0x18006D146 (_std--_Hash_std--_Umap_traits_unsigned_int_std--unordered_set_unsigned___int64_std--hash_unsigne.c)
 *     ??$_Try_emplace@PEAUIInputTarget@@$$V@?$_Hash@V?$_Umap_traits@PEAUIInputTarget@@V?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@V?$_Uhash_compare@PEAUIInputTarget@@U?$hash@PEAUIInputTarget@@@std@@U?$equal_to@PEAUIInputTarget@@@3@@3@V?$allocator@U?$pair@QEAUIInputTarget@@V?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@QEAUIInputTarget@@V?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@@std@@PEAX@std@@_N@1@$$QEAPEAUIInputTarget@@@Z @ 0x1801BEFFC (--$_Try_emplace@PEAUIInputTarget@@$$V@-$_Hash@V-$_Umap_traits@PEAUIInputTarget@@V-$unordered_set.c)
 *     _std::_Hash_std::_Umap_traits_IInputTarget___std::unordered_set_unsigned_long_std::hash_unsigned_long__std::equal_to_unsigned_long__std::allocator_unsigned_long____std::_Uhash_compare_IInputTarget___std::hash_IInputTarget____std::equal_to_IInputTarget______std::allocator_std::pair_IInputTarget___const_std::unordered_set_unsigned_long_std::hash_unsigned_long__std::equal_to_unsigned_long__std::allocator_unsigned_long________0___::_Try_emplace_IInputTarget____::_1_::dtor$0 @ 0x1801BF18D (_std--_Hash_std--_Umap_traits_IInputTarget___std--unordered_set_unsigned_long_std--_ea_1801BF18D.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A124 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBKW4ContextualProcessorState@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBKW4ContextualProcessorState@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBKW4ContextualProcessorState@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180098338 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBKW4ContextualProcessorState@@@std@@PEAX.c)
 */

void __fastcall std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<unsigned int const,std::unordered_set<unsigned __int64>>,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<unsigned int const,std::unordered_set<unsigned __int64>>,void *>>>(
        __int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // rcx
  void *v4; // rcx

  v1 = *(_QWORD *)(a1 + 8);
  if ( v1 )
  {
    std::_Deallocate<16,0>(*(void **)(v1 + 48), (*(_QWORD *)(v1 + 56) - *(_QWORD *)(v1 + 48)) & 0xFFFFFFFFFFFFFFF8uLL);
    *(_QWORD *)(v1 + 48) = 0LL;
    *(_QWORD *)(v1 + 56) = 0LL;
    *(_QWORD *)(v1 + 64) = 0LL;
    std::_List_node<std::pair<unsigned long const,enum ContextualProcessorState>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned long const,enum ContextualProcessorState>,void *>>>(
      v3,
      *(_QWORD ***)(v1 + 32));
    std::_Deallocate<16,0>(*(void **)(v1 + 32), 0x18uLL);
  }
  v4 = *(void **)(a1 + 8);
  if ( v4 )
    std::_Deallocate<16,0>(v4, 0x58uLL);
}
