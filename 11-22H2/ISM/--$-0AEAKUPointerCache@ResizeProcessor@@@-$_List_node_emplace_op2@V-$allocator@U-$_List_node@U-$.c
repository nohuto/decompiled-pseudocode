/*
 * XREFs of ??$?0AEAKUPointerCache@ResizeProcessor@@@?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CBKUPointerCache@ResizeProcessor@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_List_node@U?$pair@$$CBKUPointerCache@ResizeProcessor@@@std@@PEAX@std@@@1@AEAK$$QEAUPointerCache@ResizeProcessor@@@Z @ 0x180170B48
 * Callers:
 *     ??$emplace@AEAKUPointerCache@ResizeProcessor@@@?$_Hash@V?$_Umap_traits@KUPointerCache@ResizeProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUPointerCache@ResizeProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerCache@ResizeProcessor@@@std@@@std@@@std@@@std@@_N@1@AEAK$$QEAUPointerCache@ResizeProcessor@@@Z @ 0x180171328 (--$emplace@AEAKUPointerCache@ResizeProcessor@@@-$_Hash@V-$_Umap_traits@KUPointerCache@ResizeProc.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1800577AC (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<unsigned long const,ResizeProcessor::PointerCache>,void *>>>::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<unsigned long const,ResizeProcessor::PointerCache>,void *>>>(
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
  *(_OWORD *)(v7 + 24) = *(_OWORD *)a4;
  *((_QWORD *)v7 + 5) = *(_QWORD *)(a4 + 16);
  return a1;
}
