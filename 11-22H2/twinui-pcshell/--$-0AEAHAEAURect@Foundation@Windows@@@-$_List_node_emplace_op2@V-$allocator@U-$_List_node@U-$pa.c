/*
 * XREFs of ??$?0AEAHAEAURect@Foundation@Windows@@@?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CBHURect@Foundation@Windows@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_List_node@U?$pair@$$CBHURect@Foundation@Windows@@@std@@PEAX@std@@@1@AEAHAEAURect@Foundation@Windows@@@Z @ 0x18065CC0C
 * Callers:
 *     ??$emplace@AEAHAEAURect@Foundation@Windows@@@?$_Hash@V?$_Umap_traits@HURect@Foundation@Windows@@V?$_Uhash_compare@HU?$hash@H@std@@U?$equal_to@H@2@@std@@V?$allocator@U?$pair@$$CBHURect@Foundation@Windows@@@std@@@5@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBHURect@Foundation@Windows@@@std@@@std@@@std@@@std@@_N@1@AEAHAEAURect@Foundation@Windows@@@Z @ 0x18065E90C (--$emplace@AEAHAEAURect@Foundation@Windows@@@-$_Hash@V-$_Umap_traits@HURect@Foundation@Windows@@.c)
 * Callees:
 *     ??$_Get_size_of_n@$0CI@@std@@YA_K_K@Z @ 0x1800C28A0 (--$_Get_size_of_n@$0CI@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C4204 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<int const,Windows::Foundation::Rect>,void *>>>::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<int const,Windows::Foundation::Rect>,void *>>>(
        _QWORD *a1,
        __int64 a2,
        _DWORD *a3,
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
  *((_DWORD *)v8 + 4) = *a3;
  *(_OWORD *)(v8 + 20) = *a4;
  return a1;
}
