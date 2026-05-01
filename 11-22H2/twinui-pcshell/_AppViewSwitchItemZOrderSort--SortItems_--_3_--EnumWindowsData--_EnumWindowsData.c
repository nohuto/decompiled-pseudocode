/*
 * XREFs of _AppViewSwitchItemZOrderSort::SortItems_::_3_::EnumWindowsData::_EnumWindowsData @ 0x180790458
 * Callers:
 *     _AppViewSwitchItemZOrderSort::SortItems_::_1_::dtor$12 @ 0x1802BC012 (_AppViewSwitchItemZOrderSort--SortItems_--_1_--dtor$12.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@QEAUHWND__@@V?$com_ptr_t@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHWND__@@V?$com_ptr_t@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@QEAUHWND__@@V?$com_ptr_t@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@QEAUHWND__@@V?$com_ptr_t@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@1@@Z @ 0x18006044C (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@QEAUHWND__@@V-$com_ptr_t@UISwitchItem@Multitas.c)
 */

void __fastcall AppViewSwitchItemZOrderSort::SortItems_::_3_::EnumWindowsData::_EnumWindowsData(__int64 *a1)
{
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(a1 + 2);
  std::_Tree_val<std::_Tree_simple_types<std::pair<HWND__ * const,wil::com_ptr_t<Windows::Internal::ComposableShell::Multitasking::ISwitchItem,wil::err_exception_policy>>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<HWND__ * const,wil::com_ptr_t<Windows::Internal::ComposableShell::Multitasking::ISwitchItem,wil::err_exception_policy>>,void *>>>(
    (__int64)a1,
    (__int64)a1,
    *(__int64 **)(*a1 + 8));
  std::_Deallocate<16,0>((void *)*a1, 0x30uLL);
}
