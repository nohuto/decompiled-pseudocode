/*
 * XREFs of ??0?$_Hash@V?$_Uset_traits@KV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@K@2@$0A@@std@@@std@@IEAA@AEBV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@1@AEBV?$allocator@K@1@@Z @ 0x1800DDC10
 * Callers:
 *     ??0?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@QEAA@XZ @ 0x1800DDD38 (--0-$unordered_set@KU-$hash@K@std@@U-$equal_to@K@2@V-$allocator@K@2@@std@@QEAA@XZ.c)
 * Callees:
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@PEAUIHeatSystemContextClient@@@std@@@std@@U_Iterator_base0@2@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@PEAUIHeatSystemContextClient@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x18008C758 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_const_iterator@V-$_List_v_ea_18008C758.c)
 *     ?_Alloc_sentinel_and_proxy@?$list@U?$pair@$$CBKW4ContextualProcessorState@@@std@@V?$allocator@U?$pair@$$CBKW4ContextualProcessorState@@@std@@@2@@std@@AEAAXXZ @ 0x1800E1E0C (-_Alloc_sentinel_and_proxy@-$list@U-$pair@$$CBKW4ContextualProcessorState@@@std@@V-$allocator@U-.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::_Hash<std::_Uset_traits<unsigned long,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<unsigned long>,0>>::_Hash<std::_Uset_traits<unsigned long,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<unsigned long>,0>>(
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
  std::_Hash_vec<std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<IHeatSystemContextClient *>>,std::_Iterator_base0>>>::_Assign_grow(
    a1 + 24,
    0x10uLL,
    *v3);
  return a1;
}
