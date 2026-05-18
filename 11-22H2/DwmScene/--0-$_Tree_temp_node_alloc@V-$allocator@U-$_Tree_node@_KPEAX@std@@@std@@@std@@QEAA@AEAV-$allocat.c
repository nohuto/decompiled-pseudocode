/*
 * XREFs of ??0?$_Tree_temp_node_alloc@V?$allocator@U?$_Tree_node@_KPEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@_KPEAX@std@@@1@@Z @ 0x1800A097C
 * Callers:
 *     ??$_Emplace@AEB_K@?$_Tree@V?$_Tset_traits@_KU?$less@_K@std@@V?$allocator@_K@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@_KPEAX@std@@_N@1@AEB_K@Z @ 0x1800A062C (--$_Emplace@AEB_K@-$_Tree@V-$_Tset_traits@_KU-$less@_K@std@@V-$allocator@_K@2@$0A@@std@@@std@@IE.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001090C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0CI@@std@@YA_K_K@Z @ 0x180028FD4 (--$_Get_size_of_n@$0CI@@std@@YA_K_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::_Tree_temp_node_alloc<std::allocator<std::_Tree_node<unsigned __int64,void *>>>::_Tree_temp_node_alloc<std::allocator<std::_Tree_node<unsigned __int64,void *>>>(
        _QWORD *a1,
        __int64 a2)
{
  unsigned __int64 size_of; // rax

  *a1 = a2;
  a1[1] = 0LL;
  a1[1] = 0LL;
  size_of = std::_Get_size_of_n<40>(1uLL);
  a1[1] = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  return a1;
}
