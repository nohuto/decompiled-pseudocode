/*
 * XREFs of ?SetMonitorManager@CVirtualDesktopManager@@UEAAJPEAUIImmersiveMonitorManager@@@Z @ 0x180548690
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$com_ptr_t@UIImmersiveMonitorManager@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIImmersiveMonitorManager@@@Z @ 0x18017A710 (--4-$com_ptr_t@UIImmersiveMonitorManager@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIImmer.c)
 */

__int64 __fastcall CVirtualDesktopManager::SetMonitorManager(
        CVirtualDesktopManager *this,
        struct IImmersiveMonitorManager *a2)
{
  wil::com_ptr_t<IImmersiveMonitorManager,wil::err_exception_policy>::operator=((__int64 *)this + 20, (__int64)a2);
  return 0LL;
}
