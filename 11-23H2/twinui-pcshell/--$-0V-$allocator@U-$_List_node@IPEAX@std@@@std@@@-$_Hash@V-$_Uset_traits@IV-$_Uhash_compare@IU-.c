/*
 * XREFs of ??$?0V?$allocator@U?$_List_node@IPEAX@std@@@std@@@?$_Hash@V?$_Uset_traits@IV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@I@2@$0A@@std@@@std@@IEAA@AEBV01@AEBV?$allocator@U?$_List_node@IPEAX@std@@@1@@Z @ 0x180726930
 * Callers:
 *     ??$?0AEBU?$pair@$$CBUhstring@winrt@@V?$unordered_set@IU?$hash@I@std@@U?$equal_to@I@2@V?$allocator@I@2@@std@@@std@@@?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CBUhstring@winrt@@V?$unordered_set@IU?$hash@I@std@@U?$equal_to@I@2@V?$allocator@I@2@@std@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_List_node@U?$pair@$$CBUhstring@winrt@@V?$unordered_set@IU?$hash@I@std@@U?$equal_to@I@2@V?$allocator@I@2@@std@@@std@@PEAX@std@@@1@AEBU?$pair@$$CBUhstring@winrt@@V?$unordered_set@IU?$hash@I@std@@U?$equal_to@I@2@V?$allocator@I@2@@std@@@1@@Z @ 0x180726684 (--$-0AEBU-$pair@$$CBUhstring@winrt@@V-$unordered_set@IU-$hash@I@std@@U-$equal_to@I@2@V-$allocato.c)
 * Callees:
 *     ??$_Get_size_of_n@$0BI@@std@@YA_K_K@Z @ 0x1800C14DC (--$_Get_size_of_n@$0BI@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C4204 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@_K@std@@@std@@U_Iterator_base0@2@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@_K@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x1802D3CF4 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_const_iterator@V-$_List_v_ea_1802D3CF4.c)
 *     ??$emplace@AEBI@?$_Hash@V?$_Uset_traits@IV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@I@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@I@std@@@std@@@std@@_N@1@AEBI@Z @ 0x18050B238 (--$emplace@AEBI@-$_Hash@V-$_Uset_traits@IV-$_Uhash_compare@IU-$hash@I@std@@U-$equal_to@I@2@@std@.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall std::_Hash<std::_Uset_traits<unsigned int,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<unsigned int>,0>>::_Hash<std::_Uset_traits<unsigned int,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<unsigned int>,0>>(
        _QWORD *a1,
        __int64 a2)
{
  size_t size_of; // rax
  _QWORD *v5; // rax
  unsigned __int8 *v6; // rdi
  unsigned __int8 *i; // rbx
  _BYTE v9[24]; // [rsp+20h] [rbp-18h] BYREF

  *(_DWORD *)a1 = *(_DWORD *)a2;
  a1[1] = 0LL;
  a1[2] = 0LL;
  size_of = std::_Get_size_of_n<24>(1uLL);
  v5 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  *v5 = v5;
  v5[1] = v5;
  a1[1] = v5;
  a1[3] = 0LL;
  a1[4] = 0LL;
  a1[5] = 0LL;
  a1[6] = *(_QWORD *)(a2 + 48);
  a1[7] = *(_QWORD *)(a2 + 56);
  std::_Hash_vec<std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<unsigned __int64>>,std::_Iterator_base0>>>::_Assign_grow(
    (__int64)(a1 + 3),
    (__int64)(*(_QWORD *)(a2 + 32) - *(_QWORD *)(a2 + 24)) >> 3,
    a1[1]);
  v6 = *(unsigned __int8 **)(a2 + 8);
  for ( i = *(unsigned __int8 **)v6; i != v6; i = *(unsigned __int8 **)i )
    std::_Hash<std::_Uset_traits<unsigned int,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<unsigned int>,0>>::emplace<unsigned int const &>(
      a1,
      (__int64)v9,
      i + 16);
  return a1;
}
