/*
 * XREFs of ??$?0AEBUpiecewise_construct_t@std@@V?$tuple@AEBUhstring@winrt@@@1@V?$tuple@$$V@1@@?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CBUhstring@winrt@@V?$unordered_set@IU?$hash@I@std@@U?$equal_to@I@2@V?$allocator@I@2@@std@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_List_node@U?$pair@$$CBUhstring@winrt@@V?$unordered_set@IU?$hash@I@std@@U?$equal_to@I@2@V?$allocator@I@2@@std@@@std@@PEAX@std@@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBUhstring@winrt@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x180726710
 * Callers:
 *     ??$_Try_emplace@AEBUhstring@winrt@@$$V@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@V?$unordered_set@IU?$hash@I@std@@U?$equal_to@I@2@V?$allocator@I@2@@std@@V?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@4@V?$allocator@U?$pair@$$CBUhstring@winrt@@V?$unordered_set@IU?$hash@I@std@@U?$equal_to@I@2@V?$allocator@I@2@@std@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBUhstring@winrt@@V?$unordered_set@IU?$hash@I@std@@U?$equal_to@I@2@V?$allocator@I@2@@std@@@std@@PEAX@std@@_N@1@AEBUhstring@winrt@@@Z @ 0x180726C90 (--$_Try_emplace@AEBUhstring@winrt@@$$V@-$_Hash@V-$_Umap_traits@Uhstring@winrt@@V-$unordered_set@.c)
 * Callees:
 *     ?duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z @ 0x1800DBAC0 (-duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     ??0?$unordered_set@IU?$hash@I@std@@U?$equal_to@I@2@V?$allocator@I@2@@std@@QEAA@XZ @ 0x18050BE20 (--0-$unordered_set@IU-$hash@I@std@@U-$equal_to@I@2@V-$allocator@I@2@@std@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<winrt::hstring const,std::unordered_set<unsigned int>>,void *>>>::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<winrt::hstring const,std::unordered_set<unsigned int>>,void *>>>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        winrt::impl ***a4)
{
  _QWORD *v6; // rax
  char *v7; // rbx
  struct winrt::impl::hstring_header *v8; // rdx
  unsigned int v9; // r8d

  *a1 = a2;
  a1[1] = 0LL;
  a1[1] = 0LL;
  v6 = operator new(0x58uLL);
  a1[1] = v6;
  v7 = (char *)(v6 + 2);
  v6[2] = winrt::impl::duplicate_hstring(**a4, v8, v9);
  std::unordered_set<unsigned int>::unordered_set<unsigned int>((__int64)(v7 + 8));
  return a1;
}
