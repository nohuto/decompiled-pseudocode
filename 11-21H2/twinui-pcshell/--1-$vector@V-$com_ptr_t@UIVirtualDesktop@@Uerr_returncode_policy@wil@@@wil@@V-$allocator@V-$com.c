/*
 * XREFs of ??1?$vector@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA@XZ @ 0x1802D5260
 * Callers:
 *     _CVirtualDesktopManager::UpdateViewVisibility_::_1_::dtor$0 @ 0x180215640 (_CVirtualDesktopManager--UpdateViewVisibility_--_1_--dtor$0.c)
 *     _CVirtualDesktopManager::GetCurrentDesktopCollection_::_1_::dtor$0 @ 0x180215652 (_CVirtualDesktopManager--GetCurrentDesktopCollection_--_1_--dtor$0.c)
 *     ?SwitchDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUHMONITOR__@@PEAUIVirtualDesktop@@@Z @ 0x18054ACB0 (-SwitchDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUHMONITOR__@@PEAUIVirtualDesktop@@@Z.c)
 *     _CVirtualDesktopManager::SwitchDesktopInternal_::_1_::dtor$4 @ 0x18054B3AC (_CVirtualDesktopManager--SwitchDesktopInternal_--_1_--dtor$4.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall std::vector<wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>>::~vector<wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>>(
        _QWORD *a1)
{
  return std::vector<wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>>::_Tidy(a1);
}
