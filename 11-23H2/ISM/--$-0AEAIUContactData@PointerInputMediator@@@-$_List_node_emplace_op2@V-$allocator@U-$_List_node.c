/*
 * XREFs of ??$?0AEAIUContactData@PointerInputMediator@@@?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CBIUContactData@PointerInputMediator@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_List_node@U?$pair@$$CBIUContactData@PointerInputMediator@@@std@@PEAX@std@@@1@AEAI$$QEAUContactData@PointerInputMediator@@@Z @ 0x1800FC1E0
 * Callers:
 *     ??$emplace@AEAIUContactData@PointerInputMediator@@@?$_Hash@V?$_Umap_traits@IUContactData@PointerInputMediator@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUContactData@PointerInputMediator@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUContactData@PointerInputMediator@@@std@@@std@@@std@@@std@@_N@1@AEAI$$QEAUContactData@PointerInputMediator@@@Z @ 0x1800FC520 (--$emplace@AEAIUContactData@PointerInputMediator@@@-$_Hash@V-$_Umap_traits@IUContactData@Pointer.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180056A1C (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<unsigned int const,PointerInputMediator::ContactData>,void *>>>::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<unsigned int const,PointerInputMediator::ContactData>,void *>>>(
        _QWORD *a1,
        __int64 a2,
        _DWORD *a3,
        __int64 a4)
{
  _DWORD *v7; // rax

  *a1 = a2;
  a1[1] = 0LL;
  a1[1] = 0LL;
  v7 = operator new(0x30uLL);
  a1[1] = v7;
  v7[4] = *a3;
  *((_QWORD *)v7 + 3) = *(_QWORD *)a4;
  *((_QWORD *)v7 + 4) = *(_QWORD *)(a4 + 8);
  *(_QWORD *)(a4 + 8) = 0LL;
  *((_BYTE *)v7 + 40) = *(_BYTE *)(a4 + 16);
  *((_BYTE *)v7 + 41) = *(_BYTE *)(a4 + 17);
  return a1;
}
