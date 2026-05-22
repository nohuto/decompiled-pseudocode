/*
 * XREFs of ??1InputSiteHierarchyManager@@UEAA@XZ @ 0x18013E338
 * Callers:
 *     ??_EInputSiteHierarchyManager@@UEAAPEAXI@Z @ 0x18013E430 (--_EInputSiteHierarchyManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A124 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CB_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CB_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CB_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18013DE0C (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CB_KUInputSiteHierarchyEntry@InputSiteHie.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CB_KV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CB_KV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CB_KV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18013DEA0 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CB_KV-$vector@V-$ComPtr@VInputSite@@@WRL@.c)
 */

void __fastcall InputSiteHierarchyManager::~InputSiteHierarchyManager(void **this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  std::_Deallocate<16,0>(this[13], ((_BYTE *)this[14] - (_BYTE *)this[13]) & 0xFFFFFFFFFFFFFFF8uLL);
  this[13] = 0LL;
  this[14] = 0LL;
  this[15] = 0LL;
  std::_List_node<std::pair<unsigned __int64 const,std::vector<Microsoft::WRL::ComPtr<InputSite>>>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned __int64 const,std::vector<Microsoft::WRL::ComPtr<InputSite>>>,void *>>>(
    v2,
    (_QWORD **)this[11]);
  std::_Deallocate<16,0>(this[11], 0x30uLL);
  std::_Deallocate<16,0>(this[5], ((_BYTE *)this[6] - (_BYTE *)this[5]) & 0xFFFFFFFFFFFFFFF8uLL);
  this[5] = 0LL;
  this[6] = 0LL;
  this[7] = 0LL;
  std::_List_node<std::pair<unsigned __int64 const,InputSiteHierarchyManager::InputSiteHierarchyEntry>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned __int64 const,InputSiteHierarchyManager::InputSiteHierarchyEntry>,void *>>>(
    v3,
    (_QWORD **)this[3]);
  std::_Deallocate<16,0>(this[3], 0x40uLL);
  *((_DWORD *)this + 3) = -1073741823;
}
