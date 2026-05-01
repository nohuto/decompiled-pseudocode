/*
 * XREFs of ??$?0U?$pair@$$CBUhstring@winrt@@_N@std@@@?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CBUhstring@winrt@@_N@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_List_node@U?$pair@$$CBUhstring@winrt@@_N@std@@PEAX@std@@@1@$$QEAU?$pair@$$CBUhstring@winrt@@_N@1@@Z @ 0x1806EDD3C
 * Callers:
 *     ??$emplace@U?$pair@$$CBUhstring@winrt@@_N@std@@@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@_NV?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@_N@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUhstring@winrt@@_N@std@@@std@@@std@@@std@@_N@1@$$QEAU?$pair@$$CBUhstring@winrt@@_N@1@@Z @ 0x1806F0038 (--$emplace@U-$pair@$$CBUhstring@winrt@@_N@std@@@-$_Hash@V-$_Umap_traits@Uhstring@winrt@@_NV-$_Uh.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C4204 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z @ 0x1800DBAC0 (-duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<winrt::hstring const,bool>,void *>>>::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<winrt::hstring const,bool>,void *>>>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  _QWORD *v5; // rbx
  struct winrt::impl::hstring_header *v6; // rdx
  unsigned int v7; // r8d

  *a1 = a2;
  a1[1] = 0LL;
  a1[1] = 0LL;
  v5 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x20uLL);
  a1[1] = v5;
  v5[2] = winrt::impl::duplicate_hstring(*(winrt::impl **)a3, v6, v7);
  *((_BYTE *)v5 + 24) = *(_BYTE *)(a3 + 8);
  return a1;
}
