/*
 * XREFs of ?Reset@Win32AppStateManager@@UEAAXXZ @ 0x180195DF0
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@QEAUHWND__@@UExeData@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHWND__@@UExeData@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@QEAUHWND__@@UExeData@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@QEAUHWND__@@UExeData@@@std@@PEAX@1@@Z @ 0x180195D54 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@QEAUHWND__@@UExeData@@@std@@PEAX@std@@@std@@@-.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VUwpAppPackageInfo@@@2@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VUwpAppPackageInfo@@@2@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VUwpAppPackageInfo@@@2@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VUwpAppPackageInfo@@@2@@std@@PEAX@1@@Z @ 0x180195EC0 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBV-$basic_string@GU-$char_trai_ea_180195EC0.c)
 */

void __fastcall Win32AppStateManager::Reset(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v1; // rsi
  _QWORD *Ptr; // rbx
  _QWORD *v4; // rbx

  v1 = this + 12;
  AcquireSRWLockExclusive(this + 12);
  Ptr = v1[1].Ptr;
  std::_Tree_val<std::_Tree_simple_types<std::pair<HWND__ * const,ExeData>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<HWND__ * const,ExeData>,void *>>>(
    (__int64)&v1[1],
    (__int64)&v1[1],
    Ptr[1]);
  Ptr[1] = Ptr;
  *Ptr = Ptr;
  Ptr[2] = Ptr;
  v1[2].Ptr = 0LL;
  if ( v1 )
    ReleaseSRWLockExclusive(v1);
  AcquireSRWLockExclusive(this + 7);
  v4 = this[8].Ptr;
  std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,std::shared_ptr<UwpAppPackageInfo>>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<std::wstring const,std::shared_ptr<UwpAppPackageInfo>>,void *>>>(
    &this[8],
    &this[8],
    v4[1]);
  v4[1] = v4;
  *v4 = v4;
  v4[2] = v4;
  this[9].Ptr = 0LL;
  if ( this != (RTL_SRWLOCK *)-56LL )
    ReleaseSRWLockExclusive(this + 7);
}
