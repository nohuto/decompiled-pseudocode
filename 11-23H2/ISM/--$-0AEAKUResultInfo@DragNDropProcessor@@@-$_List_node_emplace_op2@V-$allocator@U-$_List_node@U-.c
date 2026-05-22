/*
 * XREFs of ??$?0AEAKUResultInfo@DragNDropProcessor@@@?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CBKUResultInfo@DragNDropProcessor@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_List_node@U?$pair@$$CBKUResultInfo@DragNDropProcessor@@@std@@PEAX@std@@@1@AEAK$$QEAUResultInfo@DragNDropProcessor@@@Z @ 0x18015A3A0
 * Callers:
 *     ??$emplace@AEAKUResultInfo@DragNDropProcessor@@@?$_Hash@V?$_Umap_traits@KUResultInfo@DragNDropProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUResultInfo@DragNDropProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUResultInfo@DragNDropProcessor@@@std@@@std@@@std@@@std@@_N@1@AEAK$$QEAUResultInfo@DragNDropProcessor@@@Z @ 0x18015BCF8 (--$emplace@AEAKUResultInfo@DragNDropProcessor@@@-$_Hash@V-$_Umap_traits@KUResultInfo@DragNDropPr.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180056A1C (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<unsigned long const,DragNDropProcessor::ResultInfo>,void *>>>::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<unsigned long const,DragNDropProcessor::ResultInfo>,void *>>>(
        _QWORD *a1,
        __int64 a2,
        _DWORD *a3,
        __int64 *a4)
{
  _DWORD *v7; // rax
  __int64 v8; // rcx

  *a1 = a2;
  a1[1] = 0LL;
  a1[1] = 0LL;
  v7 = operator new(0x38uLL);
  a1[1] = v7;
  v7[4] = *a3;
  v8 = *a4;
  *a4 = 0LL;
  *((_QWORD *)v7 + 3) = v8;
  v7[8] = *((_DWORD *)a4 + 2);
  *((_QWORD *)v7 + 5) = a4[2];
  *((_QWORD *)v7 + 6) = a4[3];
  return a1;
}
