/*
 * XREFs of ??1?$vector@V?$com_ptr_t@UIVirtualDesktop@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIVirtualDesktop@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAA@XZ @ 0x1804A1500
 * Callers:
 *     _SwitchItemFilteredCollection::SetVirtualDesktopCollectionFilter_::_1_::dtor$0 @ 0x1804AB612 (_SwitchItemFilteredCollection--SetVirtualDesktopCollectionFilter_--_1_--dtor$0.c)
 *     _CVirtualDesktopManager::GetViewsPerMonitor_::_1_::dtor$8 @ 0x180545FCE (_CVirtualDesktopManager--GetViewsPerMonitor_--_1_--dtor$8.c)
 *     _UwpAppPackageInfo::GetActiveViews_::_1_::dtor$0 @ 0x180565951 (_UwpAppPackageInfo--GetActiveViews_--_1_--dtor$0.c)
 *     _UwpAppStateManager::TerminateApp_::_1_::dtor$0 @ 0x180565D2B (_UwpAppStateManager--TerminateApp_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall std::vector<wil::com_ptr_t<IVirtualDesktop,wil::err_exception_policy>>::~vector<wil::com_ptr_t<IVirtualDesktop,wil::err_exception_policy>>(
        __int64 a1)
{
  std::vector<wil::com_ptr_t<IWinRTApplicationView,wil::err_exception_policy>>::_Tidy(a1);
}
