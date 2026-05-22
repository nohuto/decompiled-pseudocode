/*
 * XREFs of ??$?0AEAIV?$shared_ptr@VGestureHandler@@@std@@@?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CBIV?$shared_ptr@VGestureHandler@@@std@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_List_node@U?$pair@$$CBIV?$shared_ptr@VGestureHandler@@@std@@@std@@PEAX@std@@@1@AEAI$$QEAV?$shared_ptr@VGestureHandler@@@1@@Z @ 0x180152630
 * Callers:
 *     ??$emplace@AEAIV?$shared_ptr@VGestureHandler@@@std@@@?$_Hash@V?$_Umap_traits@IV?$shared_ptr@VGestureHandler@@@std@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@2@V?$allocator@U?$pair@$$CBIV?$shared_ptr@VGestureHandler@@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIV?$shared_ptr@VGestureHandler@@@std@@@std@@@std@@@std@@@std@@_N@1@AEAI$$QEAV?$shared_ptr@VGestureHandler@@@1@@Z @ 0x180152AA0 (--$emplace@AEAIV-$shared_ptr@VGestureHandler@@@std@@@-$_Hash@V-$_Umap_traits@IV-$shared_ptr@VGes.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001DBCC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0CI@@std@@YA_K_K@Z @ 0x18003DD20 (--$_Get_size_of_n@$0CI@@std@@YA_K_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<unsigned int const,std::shared_ptr<GestureHandler>>,void *>>>::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<unsigned int const,std::shared_ptr<GestureHandler>>,void *>>>(
        _QWORD *a1,
        __int64 a2,
        _DWORD *a3,
        _QWORD *a4)
{
  size_t size_of; // rax
  _DWORD *v8; // rax

  *a1 = a2;
  a1[1] = 0LL;
  a1[1] = 0LL;
  size_of = std::_Get_size_of_n<40>(1uLL);
  v8 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  a1[1] = v8;
  v8[4] = *a3;
  *((_QWORD *)v8 + 3) = 0LL;
  *((_QWORD *)v8 + 4) = 0LL;
  *((_QWORD *)v8 + 3) = *a4;
  *((_QWORD *)v8 + 4) = a4[1];
  *a4 = 0LL;
  a4[1] = 0LL;
  return a1;
}
