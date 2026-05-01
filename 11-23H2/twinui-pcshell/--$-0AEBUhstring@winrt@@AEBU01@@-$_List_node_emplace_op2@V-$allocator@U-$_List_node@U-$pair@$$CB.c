/*
 * XREFs of ??$?0AEBUhstring@winrt@@AEBU01@@?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_List_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@std@@@1@AEBUhstring@winrt@@1@Z @ 0x180708D5C
 * Callers:
 *     ??$emplace@AEBUhstring@winrt@@AEBU12@@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@U12@V?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@U12@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUhstring@winrt@@U12@@std@@@std@@@std@@@std@@_N@1@AEBUhstring@winrt@@0@Z @ 0x18070B8AC (--$emplace@AEBUhstring@winrt@@AEBU12@@-$_Hash@V-$_Umap_traits@Uhstring@winrt@@U12@V-$_Uhash_comp.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C4204 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z @ 0x1800DBAC0 (-duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<winrt::hstring const,winrt::hstring>,void *>>>::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<winrt::hstring const,winrt::hstring>,void *>>>(
        _QWORD *a1,
        __int64 a2,
        winrt::impl **a3,
        winrt::impl **a4)
{
  _QWORD *v7; // rax
  char *v8; // rbx
  struct winrt::impl::hstring_header *v9; // rdx
  unsigned int v10; // r8d
  struct winrt::impl::hstring_header *v11; // rdx
  unsigned int v12; // r8d

  *a1 = a2;
  a1[1] = 0LL;
  a1[1] = 0LL;
  v7 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x20uLL);
  a1[1] = v7;
  v8 = (char *)(v7 + 2);
  v7[2] = winrt::impl::duplicate_hstring(*a3, v9, v10);
  *((_QWORD *)v8 + 1) = winrt::impl::duplicate_hstring(*a4, v11, v12);
  return a1;
}
