/*
 * XREFs of ??$?0AEBU_GUID@@@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U_GUID@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@U_GUID@@PEAX@std@@@1@PEAU?$_Tree_node@U_GUID@@PEAX@1@AEBU_GUID@@@Z @ 0x1801A63E8
 * Callers:
 *     ??$_Emplace@AEBU_GUID@@@?$_Tree@V?$_Tset_traits@U_GUID@@UGUIDComparer@PenInterface@@V?$allocator@U_GUID@@@std@@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U_GUID@@PEAX@std@@_N@1@AEBU_GUID@@@Z @ 0x1801A6508 (--$_Emplace@AEBU_GUID@@@-$_Tree@V-$_Tset_traits@U_GUID@@UGUIDComparer@PenInterface@@V-$allocator.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180056A1C (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::_Tree_temp_node<std::allocator<std::_Tree_node<_GUID,void *>>>::_Tree_temp_node<std::allocator<std::_Tree_node<_GUID,void *>>>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        _OWORD *a4)
{
  char *v7; // rax
  __int64 i; // rcx

  *a1 = a2;
  a1[1] = 0LL;
  a1[1] = 0LL;
  v7 = (char *)operator new(0x30uLL);
  a1[1] = v7;
  *(_OWORD *)(v7 + 28) = *a4;
  *(_QWORD *)a1[1] = a3;
  *(_QWORD *)(a1[1] + 8LL) = a3;
  *(_QWORD *)(a1[1] + 16LL) = a3;
  for ( i = 0LL; i < 2; ++i )
    *(_BYTE *)(i + a1[1] + 24) = 0;
  return a1;
}
