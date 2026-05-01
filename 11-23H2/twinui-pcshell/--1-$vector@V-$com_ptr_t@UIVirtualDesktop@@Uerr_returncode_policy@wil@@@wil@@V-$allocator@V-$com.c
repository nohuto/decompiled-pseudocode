/*
 * XREFs of ??1?$vector@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA@XZ @ 0x18038BC28
 * Callers:
 *     _CVirtualDesktopManager::GetCurrentDesktopCollection_::_1_::dtor$0 @ 0x1802BEC5E (_CVirtualDesktopManager--GetCurrentDesktopCollection_--_1_--dtor$0.c)
 *     _CVirtualDesktopManager::UpdateViewVisibility_::_1_::dtor$0 @ 0x1802BEDBD (_CVirtualDesktopManager--UpdateViewVisibility_--_1_--dtor$0.c)
 *     ?SwitchDesktopInternalPrivate@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@W4VirtualDesktopSwitchType@@@Z @ 0x1806060A4 (-SwitchDesktopInternalPrivate@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@W4VirtualDesktop.c)
 *     _CVirtualDesktopManager::SwitchDesktopInternalPrivate_::_1_::dtor$4 @ 0x18060687F (_CVirtualDesktopManager--SwitchDesktopInternalPrivate_--_1_--dtor$4.c)
 *     _UwpAppPackageInfo::GetActiveViews_::_1_::dtor$0 @ 0x18062321D (_UwpAppPackageInfo--GetActiveViews_--_1_--dtor$0.c)
 *     _UwpAppStateManager::TerminateApp_::_1_::dtor$0 @ 0x18062361E (_UwpAppStateManager--TerminateApp_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall std::vector<wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>>::~vector<wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>>(
        _QWORD *a1)
{
  return std::vector<wil::com_ptr_t<IWinRTApplicationView,wil::err_exception_policy>>::_Tidy(a1);
}
