/*
 * XREFs of ??$?0AEB_KAEBUtagRECT@@@?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CB_KUtagRECT@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_List_node@U?$pair@$$CB_KUtagRECT@@@std@@PEAX@std@@@1@AEB_KAEBUtagRECT@@@Z @ 0x1801A1CEC
 * Callers:
 *     ??$emplace@AEB_KAEBUtagRECT@@@?$_Hash@V?$_Umap_traits@_KUtagRECT@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUtagRECT@@@std@@@3@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUtagRECT@@@std@@@std@@@std@@@std@@_N@1@AEB_KAEBUtagRECT@@@Z @ 0x1801A2824 (--$emplace@AEB_KAEBUtagRECT@@@-$_Hash@V-$_Umap_traits@_KUtagRECT@@V-$_Uhash_compare@_KU-$hash@_K.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001DBCC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0CI@@std@@YA_K_K@Z @ 0x18003DD20 (--$_Get_size_of_n@$0CI@@std@@YA_K_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<unsigned __int64 const,tagRECT>,void *>>>::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<unsigned __int64 const,tagRECT>,void *>>>(
        _QWORD *a1,
        __int64 a2,
        _QWORD *a3,
        _OWORD *a4)
{
  size_t size_of; // rax
  char *v8; // rax

  *a1 = a2;
  a1[1] = 0LL;
  a1[1] = 0LL;
  size_of = std::_Get_size_of_n<40>(1uLL);
  v8 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  a1[1] = v8;
  *((_QWORD *)v8 + 2) = *a3;
  *(_OWORD *)(v8 + 24) = *a4;
  return a1;
}
