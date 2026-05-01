/*
 * XREFs of ??$?0AEBUguid@winrt@@AEA_K@?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CBUguid@winrt@@_K@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_List_node@U?$pair@$$CBUguid@winrt@@_K@std@@PEAX@std@@@1@AEBUguid@winrt@@AEA_K@Z @ 0x180032B74
 * Callers:
 *     ??$emplace@AEBUguid@winrt@@AEA_K@?$_Hash@V?$_Umap_traits@Uguid@winrt@@_KV?$_Uhash_compare@Uguid@winrt@@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUguid@winrt@@_K@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUguid@winrt@@_K@std@@@std@@@std@@@std@@_N@1@AEBUguid@winrt@@AEA_K@Z @ 0x180032A1C (--$emplace@AEBUguid@winrt@@AEA_K@-$_Hash@V-$_Umap_traits@Uguid@winrt@@_KV-$_Uhash_compare@Uguid@.c)
 * Callees:
 *     ??$_Get_size_of_n@$0CI@@std@@YA_K_K@Z @ 0x1800C28A0 (--$_Get_size_of_n@$0CI@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C4204 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<winrt::guid const,unsigned __int64>,void *>>>::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<winrt::guid const,unsigned __int64>,void *>>>(
        _QWORD *a1,
        __int64 a2,
        _OWORD *a3,
        _QWORD *a4)
{
  __int64 size_of; // rax
  __int64 v8; // rax

  *a1 = a2;
  a1[1] = 0LL;
  a1[1] = 0LL;
  size_of = std::_Get_size_of_n<40>(1LL);
  v8 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  a1[1] = v8;
  *(_OWORD *)(v8 + 16) = *a3;
  *(_QWORD *)(v8 + 32) = *a4;
  return a1;
}
