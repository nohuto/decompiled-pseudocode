/*
 * XREFs of ??0?$_Hash@V?$_Umap_traits@KW4ContextualProcessorState@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKW4ContextualProcessorState@@@std@@@3@$0A@@std@@@std@@IEAA@AEBV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@1@AEBV?$allocator@U?$pair@$$CBKW4ContextualProcessorState@@@std@@@1@@Z @ 0x1800F7870
 * Callers:
 *     ??0?$unordered_map@KW4ContextualProcessorDecision@@U?$hash@K@std@@U?$equal_to@K@3@V?$allocator@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@@3@@std@@QEAA@XZ @ 0x1800F79A0 (--0-$unordered_map@KW4ContextualProcessorDecision@@U-$hash@K@std@@U-$equal_to@K@3@V-$allocator@U.c)
 * Callees:
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUMessageInfo@ResizeProcessor@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUMessageInfo@ResizeProcessor@@@std@@@std@@@std@@@2@@Z @ 0x1800D282C (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_ea_1800D282C.c)
 *     ?_Alloc_sentinel_and_proxy@?$list@U?$pair@$$CBKW4ContextualProcessorState@@@std@@V?$allocator@U?$pair@$$CBKW4ContextualProcessorState@@@std@@@2@@std@@AEAAXXZ @ 0x1800FB584 (-_Alloc_sentinel_and_proxy@-$list@U-$pair@$$CBKW4ContextualProcessorState@@@std@@V-$allocator@U-.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned long,enum ContextualProcessorState,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,enum ContextualProcessorState>>,0>>::_Hash<std::_Umap_traits<unsigned long,enum ContextualProcessorState,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,enum ContextualProcessorState>>,0>>(
        __int64 a1,
        _DWORD *a2)
{
  unsigned __int64 *v3; // rbx

  *(_DWORD *)a1 = *a2;
  v3 = (unsigned __int64 *)(a1 + 8);
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  std::list<std::pair<unsigned long const,enum ContextualProcessorState>>::_Alloc_sentinel_and_proxy(a1 + 8);
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 7LL;
  *(_QWORD *)(a1 + 56) = 8LL;
  *(_DWORD *)a1 = 1065353216;
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,ResizeProcessor::MessageInfo>>>>>>::_Assign_grow(
    a1 + 24,
    0x10uLL,
    *v3);
  return a1;
}
