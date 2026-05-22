/*
 * XREFs of ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CBIUContactData@PointerInputMediator@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18010B674
 * Callers:
 *     ??$emplace@AEAIUContactData@PointerInputMediator@@@?$_Hash@V?$_Umap_traits@IUContactData@PointerInputMediator@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUContactData@PointerInputMediator@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUContactData@PointerInputMediator@@@std@@@std@@@std@@@std@@_N@1@AEAI$$QEAUContactData@PointerInputMediator@@@Z @ 0x18010AFB0 (--$emplace@AEAIUContactData@PointerInputMediator@@@-$_Hash@V-$_Umap_traits@IUContactData@Pointer.c)
 *     _std::_Hash_std::_Umap_traits_unsigned_int_PointerInputMediator::ContactData_std::_Uhash_compare_unsigned_int_std::hash_unsigned_int__std::equal_to_unsigned_int____std::allocator_std::pair_unsigned_int_const__PointerInputMediator::ContactData____0___::emplace_unsigned_int_&_PointerInputMediator::ContactData__::_1_::dtor$0 @ 0x18010B119 (_std--_Hash_std--_Umap_traits_unsigned_int_PointerInputMediator--ContactData_std--_Uhash_compare.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A954 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<unsigned int const,PointerInputMediator::ContactData>,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<unsigned int const,PointerInputMediator::ContactData>,void *>>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rcx
  __int64 v6; // rcx
  void *v7; // rcx

  v5 = *(_QWORD *)(a1 + 8);
  if ( v5 )
  {
    v6 = *(_QWORD *)(v5 + 32);
    if ( (unsigned __int64)(v6 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      NtCloseCompositionInputSink(v6, a2, a3, a4);
  }
  v7 = *(void **)(a1 + 8);
  if ( v7 )
    std::_Deallocate<16,0>(v7, 0x30uLL);
}
