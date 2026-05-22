/*
 * XREFs of ??$?0AEAKUPointerCache@DragNDropProcessor@@@?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CBKUPointerCache@DragNDropProcessor@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_List_node@U?$pair@$$CBKUPointerCache@DragNDropProcessor@@@std@@PEAX@std@@@1@AEAK$$QEAUPointerCache@DragNDropProcessor@@@Z @ 0x1801685AC
 * Callers:
 *     ??$emplace@AEAKUPointerCache@DragNDropProcessor@@@?$_Hash@V?$_Umap_traits@KUPointerCache@DragNDropProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUPointerCache@DragNDropProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerCache@DragNDropProcessor@@@std@@@std@@@std@@@std@@_N@1@AEAK$$QEAUPointerCache@DragNDropProcessor@@@Z @ 0x180169DE4 (--$emplace@AEAKUPointerCache@DragNDropProcessor@@@-$_Hash@V-$_Umap_traits@KUPointerCache@DragNDr.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1800577AC (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<unsigned long const,DragNDropProcessor::PointerCache>,void *>>>::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<unsigned long const,DragNDropProcessor::PointerCache>,void *>>>(
        _QWORD *a1,
        __int64 a2,
        _DWORD *a3,
        __int64 a4)
{
  char *v7; // rax

  *a1 = a2;
  a1[1] = 0LL;
  a1[1] = 0LL;
  v7 = (char *)operator new(0x30uLL);
  a1[1] = v7;
  *((_DWORD *)v7 + 4) = *a3;
  *(_OWORD *)(v7 + 20) = *(_OWORD *)a4;
  *(_QWORD *)(v7 + 36) = *(_QWORD *)(a4 + 16);
  return a1;
}
