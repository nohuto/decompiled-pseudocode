/*
 * XREFs of ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18002B078
 * Callers:
 *     _std::_Hash_std::_Umap_traits_unsigned_long_std::unique_ptr_TSSession_std::default_delete_TSSession____std::_Uhash_compare_unsigned_long_std::hash_unsigned_long__std::equal_to_unsigned_long____std::allocator_std::pair_unsigned_long_const__std::unique_ptr_TSSession_std::default_delete_TSSession________0___::emplace_unsigned_long_&_std::unique_ptr_TSSession_std::default_delete_TSSession______::_1_::dtor$0 @ 0x180045DE0 (_std--_Hash_std--_Umap_traits_unsigned_long_std--unique_ptr_TSSession_std--default_delete_TSSess.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180002AC8 (--3@YAXPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180008290 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1TSSession@@QEAA@XZ @ 0x18002B530 (--1TSSession@@QEAA@XZ.c)
 */

void __fastcall std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<unsigned long const,std::unique_ptr<TSSession>>,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<unsigned long const,std::unique_ptr<TSSession>>,void *>>>(
        __int64 a1)
{
  __int64 v2; // rcx
  void *v3; // rbx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
  {
    v3 = *(void **)(v2 + 24);
    if ( v3 )
    {
      TSSession::~TSSession(*(TSSession **)(v2 + 24));
      operator delete(v3);
      v2 = *(_QWORD *)(a1 + 8);
    }
    if ( v2 )
      std::_Deallocate<16,0>((char *)v2, 0x20uLL);
  }
}
