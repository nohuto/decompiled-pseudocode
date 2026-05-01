/*
 * XREFs of ??$?0AEA_KAEBUguid@winrt@@@?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CB_KUguid@winrt@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_List_node@U?$pair@$$CB_KUguid@winrt@@@std@@PEAX@std@@@1@AEA_KAEBUguid@winrt@@@Z @ 0x180634CD8
 * Callers:
 *     ??$emplace@AEA_KAEBUguid@winrt@@@?$_Hash@V?$_Umap_traits@_KUguid@winrt@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUguid@winrt@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUguid@winrt@@@std@@@std@@@std@@@std@@_N@1@AEA_KAEBUguid@winrt@@@Z @ 0x180635BD0 (--$emplace@AEA_KAEBUguid@winrt@@@-$_Hash@V-$_Umap_traits@_KUguid@winrt@@V-$_Uhash_compare@_KU-$h.c)
 * Callees:
 *     ??$_Get_size_of_n@$0CI@@std@@YA_K_K@Z @ 0x1800C28A0 (--$_Get_size_of_n@$0CI@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C4204 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<unsigned __int64 const,winrt::guid>,void *>>>::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<unsigned __int64 const,winrt::guid>,void *>>>(
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
