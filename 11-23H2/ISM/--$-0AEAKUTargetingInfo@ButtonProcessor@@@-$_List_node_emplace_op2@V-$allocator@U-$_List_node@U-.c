/*
 * XREFs of ??$?0AEAKUTargetingInfo@ButtonProcessor@@@?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CBKUTargetingInfo@ButtonProcessor@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_List_node@U?$pair@$$CBKUTargetingInfo@ButtonProcessor@@@std@@PEAX@std@@@1@AEAK$$QEAUTargetingInfo@ButtonProcessor@@@Z @ 0x1801D7D18
 * Callers:
 *     ??$emplace@AEAKUTargetingInfo@ButtonProcessor@@@?$_Hash@V?$_Umap_traits@KUTargetingInfo@ButtonProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUTargetingInfo@ButtonProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUTargetingInfo@ButtonProcessor@@@std@@@std@@@std@@@std@@_N@1@AEAK$$QEAUTargetingInfo@ButtonProcessor@@@Z @ 0x1801D7DB8 (--$emplace@AEAKUTargetingInfo@ButtonProcessor@@@-$_Hash@V-$_Umap_traits@KUTargetingInfo@ButtonPr.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001DBCC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0CI@@std@@YA_K_K@Z @ 0x18003DD20 (--$_Get_size_of_n@$0CI@@std@@YA_K_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<unsigned long const,ButtonProcessor::TargetingInfo>,void *>>>::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<unsigned long const,ButtonProcessor::TargetingInfo>,void *>>>(
        _QWORD *a1,
        __int64 a2,
        _DWORD *a3,
        _QWORD *a4)
{
  size_t size_of; // rax
  _DWORD *v8; // rax
  _QWORD *v9; // rcx

  *a1 = a2;
  a1[1] = 0LL;
  a1[1] = 0LL;
  size_of = std::_Get_size_of_n<40>(1uLL);
  v8 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  a1[1] = v8;
  v8[4] = *a3;
  *((_QWORD *)v8 + 3) = 0LL;
  if ( v8 + 6 != (_DWORD *)a4 )
  {
    *((_QWORD *)v8 + 3) = *a4;
    *a4 = 0LL;
  }
  v9 = a4 + 1;
  *((_QWORD *)v8 + 4) = 0LL;
  if ( v8 + 8 != (_DWORD *)(a4 + 1) )
  {
    *((_QWORD *)v8 + 4) = *v9;
    *v9 = 0LL;
  }
  return a1;
}
