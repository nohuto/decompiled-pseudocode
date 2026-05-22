/*
 * XREFs of ??1?$list@U?$pair@$$CB_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@@std@@V?$allocator@U?$pair@$$CB_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@@std@@@2@@std@@QEAA@XZ @ 0x1801235E8
 * Callers:
 *     _InputSiteHierarchyManager::InputSiteHierarchyManager_::_1_::dtor$11 @ 0x180056B17 (_InputSiteHierarchyManager--InputSiteHierarchyManager_--_1_--dtor$11.c)
 * Callees:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CB_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CB_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CB_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180123394 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CB_KUInputSiteHierarchyEntry@InputSiteHie.c)
 */

void __fastcall std::list<std::pair<unsigned __int64 const,InputSiteHierarchyManager::InputSiteHierarchyEntry>>::~list<std::pair<unsigned __int64 const,InputSiteHierarchyManager::InputSiteHierarchyEntry>>(
        void **a1)
{
  std::_List_node<std::pair<unsigned __int64 const,InputSiteHierarchyManager::InputSiteHierarchyEntry>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned __int64 const,InputSiteHierarchyManager::InputSiteHierarchyEntry>,void *>>>(
    (__int64)a1,
    (_QWORD **)*a1);
  std::_Deallocate<16,0>(*a1, 0x40uLL);
}
