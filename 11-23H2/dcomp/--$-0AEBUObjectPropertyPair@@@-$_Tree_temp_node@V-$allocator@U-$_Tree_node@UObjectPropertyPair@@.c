/*
 * XREFs of ??$?0AEBUObjectPropertyPair@@@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@UObjectPropertyPair@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@UObjectPropertyPair@@PEAX@std@@@1@PEAU?$_Tree_node@UObjectPropertyPair@@PEAX@1@AEBUObjectPropertyPair@@@Z @ 0x1801697D8
 * Callers:
 *     ??$_Emplace@AEBUObjectPropertyPair@@@?$_Tree@V?$_Tset_traits@UObjectPropertyPair@@U?$less@UObjectPropertyPair@@@std@@V?$allocator@UObjectPropertyPair@@@3@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@UObjectPropertyPair@@PEAX@std@@_N@1@AEBUObjectPropertyPair@@@Z @ 0x180169D3C (--$_Emplace@AEBUObjectPropertyPair@@@-$_Tree@V-$_Tset_traits@UObjectPropertyPair@@U-$less@UObjec.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180046CF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0CI@@std@@YA_K_K@Z @ 0x180068B10 (--$_Get_size_of_n@$0CI@@std@@YA_K_K@Z.c)
 */

_QWORD *__fastcall std::_Tree_temp_node<std::allocator<std::_Tree_node<ObjectPropertyPair,void *>>>::_Tree_temp_node<std::allocator<std::_Tree_node<ObjectPropertyPair,void *>>>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  SIZE_T size_of; // rax
  __int64 v8; // rax
  __int64 v9; // rcx

  *a1 = a2;
  a1[1] = 0LL;
  size_of = std::_Get_size_of_n<40>(1uLL);
  v8 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  a1[1] = v8;
  v9 = 0LL;
  *(_QWORD *)(v8 + 28) = *a4;
  *(_QWORD *)a1[1] = a3;
  *(_QWORD *)(a1[1] + 8LL) = a3;
  *(_QWORD *)(a1[1] + 16LL) = a3;
  do
  {
    *(_BYTE *)(v9 + a1[1] + 24) = 0;
    ++v9;
  }
  while ( v9 < 2 );
  return a1;
}
