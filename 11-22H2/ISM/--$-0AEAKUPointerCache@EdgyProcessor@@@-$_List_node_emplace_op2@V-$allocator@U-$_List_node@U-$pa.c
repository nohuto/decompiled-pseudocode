/*
 * XREFs of ??$?0AEAKUPointerCache@EdgyProcessor@@@?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CBKUPointerCache@EdgyProcessor@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_List_node@U?$pair@$$CBKUPointerCache@EdgyProcessor@@@std@@PEAX@std@@@1@AEAK$$QEAUPointerCache@EdgyProcessor@@@Z @ 0x180174364
 * Callers:
 *     ??$emplace@AEAKUPointerCache@EdgyProcessor@@@?$_Hash@V?$_Umap_traits@KUPointerCache@EdgyProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUPointerCache@EdgyProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerCache@EdgyProcessor@@@std@@@std@@@std@@@std@@_N@1@AEAK$$QEAUPointerCache@EdgyProcessor@@@Z @ 0x180174C38 (--$emplace@AEAKUPointerCache@EdgyProcessor@@@-$_Hash@V-$_Umap_traits@KUPointerCache@EdgyProcesso.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001EAA0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0CI@@std@@YA_K_K@Z @ 0x180039C40 (--$_Get_size_of_n@$0CI@@std@@YA_K_K@Z.c)
 */

_QWORD *__fastcall std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<unsigned long const,EdgyProcessor::PointerCache>,void *>>>::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<unsigned long const,EdgyProcessor::PointerCache>,void *>>>(
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
