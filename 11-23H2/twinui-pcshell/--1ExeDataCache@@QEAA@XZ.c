/*
 * XREFs of ??1ExeDataCache@@QEAA@XZ @ 0x180624F98
 * Callers:
 *     _Win32AppStateManager::Win32AppStateManager_::_1_::dtor$3 @ 0x1802B8897 (_Win32AppStateManager--Win32AppStateManager_--_1_--dtor$3.c)
 * Callees:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@QEAUHWND__@@UExeData@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHWND__@@UExeData@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@QEAUHWND__@@UExeData@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@QEAUHWND__@@UExeData@@@std@@PEAX@1@@Z @ 0x180195D54 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@QEAUHWND__@@UExeData@@@std@@PEAX@std@@@std@@@-.c)
 */

void __fastcall ExeDataCache::~ExeDataCache(ExeDataCache *this)
{
  void **v1; // rbx

  v1 = (void **)((char *)this + 8);
  std::_Tree_val<std::_Tree_simple_types<std::pair<HWND__ * const,ExeData>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<HWND__ * const,ExeData>,void *>>>(
    (__int64)this + 8,
    (__int64)this + 8,
    *(_QWORD *)(*((_QWORD *)this + 1) + 8LL));
  std::_Deallocate<16,0>(*v1, 0x70uLL);
}
