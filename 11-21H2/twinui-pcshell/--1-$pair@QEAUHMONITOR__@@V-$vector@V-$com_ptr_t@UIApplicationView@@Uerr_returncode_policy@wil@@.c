/*
 * XREFs of ??1?$pair@QEAUHMONITOR__@@V?$vector@V?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@QEAA@XZ @ 0x1805447A0
 * Callers:
 *     _CVirtualDesktopManager::GetViewsPerMonitor_::_1_::dtor$9 @ 0x180545FDA (_CVirtualDesktopManager--GetViewsPerMonitor_--_1_--dtor$9.c)
 * Callees:
 *     <none>
 */

void __fastcall std::pair<HMONITOR__ * const,std::vector<wil::com_ptr_t<IApplicationView,wil::err_returncode_policy>>>::~pair<HMONITOR__ * const,std::vector<wil::com_ptr_t<IApplicationView,wil::err_returncode_policy>>>(
        __int64 a1)
{
  std::vector<wil::com_ptr_t<IWinRTApplicationView,wil::err_exception_policy>>::_Tidy(a1 + 8);
}
