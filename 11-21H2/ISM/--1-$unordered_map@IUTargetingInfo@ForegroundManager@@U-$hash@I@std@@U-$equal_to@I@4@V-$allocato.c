/*
 * XREFs of ??1?$unordered_map@IUTargetingInfo@ForegroundManager@@U?$hash@I@std@@U?$equal_to@I@4@V?$allocator@U?$pair@$$CBIUTargetingInfo@ForegroundManager@@@std@@@4@@std@@QEAA@XZ @ 0x180089F28
 * Callers:
 *     _ForegroundManager::ForegroundManager_::_1_::dtor$2 @ 0x180056AAD (_ForegroundManager--ForegroundManager_--_1_--dtor$2.c)
 *     _DragNDropProcessor::DragNDropProcessor_::_1_::dtor$4 @ 0x18013D2A7 (_DragNDropProcessor--DragNDropProcessor_--_1_--dtor$4.c)
 *     _ResizeProcessor::ResizeProcessor_::_1_::dtor$2 @ 0x180144792 (_ResizeProcessor--ResizeProcessor_--_1_--dtor$2.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000E6AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBKUPointerCache@DragNDropProcessor@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBKUPointerCache@DragNDropProcessor@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBKUPointerCache@DragNDropProcessor@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800896C8 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBKUPointerCache@DragNDropProcessor@@@std.c)
 */

void __fastcall std::unordered_map<unsigned int,ForegroundManager::TargetingInfo>::~unordered_map<unsigned int,ForegroundManager::TargetingInfo>(
        __int64 a1)
{
  __int64 v2; // rcx

  std::_Deallocate<16,0>(*(void **)(a1 + 24), (*(_QWORD *)(a1 + 32) - *(_QWORD *)(a1 + 24)) & 0xFFFFFFFFFFFFFFF8uLL);
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  std::_List_node<std::pair<unsigned long const,DragNDropProcessor::PointerCache>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned long const,DragNDropProcessor::PointerCache>,void *>>>(
    v2,
    *(_QWORD ***)(a1 + 8));
  std::_Deallocate<16,0>(*(void **)(a1 + 8), 0x30uLL);
}
