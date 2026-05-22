/*
 * XREFs of ??1?$unordered_map@KUResultInfo@DragNDropProcessor@@U?$hash@K@std@@U?$equal_to@K@4@V?$allocator@U?$pair@$$CBKUResultInfo@DragNDropProcessor@@@std@@@4@@std@@QEAA@XZ @ 0x18016A968
 * Callers:
 *     _DragNDropProcessor::DragNDropProcessor_::_1_::dtor$6 @ 0x18016A6DB (_DragNDropProcessor--DragNDropProcessor_--_1_--dtor$6.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A954 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBKUResultInfo@DragNDropProcessor@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBKUResultInfo@DragNDropProcessor@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBKUResultInfo@DragNDropProcessor@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1801690AC (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBKUResultInfo@DragNDropProcessor@@@std@@.c)
 */

void __fastcall std::unordered_map<unsigned long,DragNDropProcessor::ResultInfo>::~unordered_map<unsigned long,DragNDropProcessor::ResultInfo>(
        __int64 a1)
{
  __int64 v2; // rcx

  std::_Deallocate<16,0>(*(void **)(a1 + 24), (*(_QWORD *)(a1 + 32) - *(_QWORD *)(a1 + 24)) & 0xFFFFFFFFFFFFFFF8uLL);
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  std::_List_node<std::pair<unsigned long const,DragNDropProcessor::ResultInfo>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned long const,DragNDropProcessor::ResultInfo>,void *>>>(
    v2,
    *(_QWORD ***)(a1 + 8));
  std::_Deallocate<16,0>(*(void **)(a1 + 8), 0x38uLL);
}
