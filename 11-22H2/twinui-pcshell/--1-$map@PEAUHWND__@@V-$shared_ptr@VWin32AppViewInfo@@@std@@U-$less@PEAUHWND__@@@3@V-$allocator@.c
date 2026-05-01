/*
 * XREFs of ??1?$map@PEAUHWND__@@V?$shared_ptr@VWin32AppViewInfo@@@std@@U?$less@PEAUHWND__@@@3@V?$allocator@U?$pair@QEAUHWND__@@V?$shared_ptr@VWin32AppViewInfo@@@std@@@std@@@3@@std@@QEAA@XZ @ 0x18050C15C
 * Callers:
 *     _TouchKeyboardExperienceManager::TouchKeyboardExperienceManager_::_1_::dtor$1 @ 0x1802B6B25 (_TouchKeyboardExperienceManager--TouchKeyboardExperienceManager_--_1_--dtor$1.c)
 *     _std::_Ref_count_obj2_Win32ProcessInfo_::_Ref_count_obj2_Win32ProcessInfo__unsigned_int_&_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_&__::_1_::dtor$1 @ 0x180623B5E (_std--_Ref_count_obj2_Win32ProcessInfo_--_Ref_count_obj2_Win32ProcessInfo__unsigned_ea_180623B5E.c)
 * Callees:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@QEAUHWND__@@V?$shared_ptr@VWin32AppViewInfo@@@std@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHWND__@@V?$shared_ptr@VWin32AppViewInfo@@@std@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@QEAUHWND__@@V?$shared_ptr@VWin32AppViewInfo@@@std@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@QEAUHWND__@@V?$shared_ptr@VWin32AppViewInfo@@@std@@@std@@PEAX@1@@Z @ 0x18050AAD0 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@QEAUHWND__@@V-$shared_ptr@VWin32AppViewInfo@@@.c)
 */

void __fastcall std::map<HWND__ *,std::shared_ptr<Win32AppViewInfo>>::~map<HWND__ *,std::shared_ptr<Win32AppViewInfo>>(
        void **a1)
{
  std::_Tree_val<std::_Tree_simple_types<std::pair<HWND__ * const,std::shared_ptr<Win32AppViewInfo>>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<HWND__ * const,std::shared_ptr<Win32AppViewInfo>>,void *>>>(
    (__int64)a1,
    (__int64)a1,
    *((__int64 **)*a1 + 1));
  std::_Deallocate<16,0>(*a1, 0x38uLL);
}
