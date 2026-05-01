/*
 * XREFs of ??4?$com_ptr_t@UIImmersiveMonitorManager@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIImmersiveMonitorManager@@@Z @ 0x180137B24
 * Callers:
 *     ?Show@TaskViewHost@@UEAAJPEAUIImmersiveMonitorManager@@PEAUIImmersiveMonitor@@W4ALL_UP_VIEW_FLAGS@@@Z @ 0x18007A310 (-Show@TaskViewHost@@UEAAJPEAUIImmersiveMonitorManager@@PEAUIImmersiveMonitor@@W4ALL_UP_VIEW_FLAG.c)
 *     ?SetMonitorManager@CVirtualDesktopSwitcherService@@UEAAXPEAUIImmersiveMonitorManager@@@Z @ 0x180137A90 (-SetMonitorManager@CVirtualDesktopSwitcherService@@UEAAXPEAUIImmersiveMonitorManager@@@Z.c)
 *     ?SetMonitorManager@CVirtualDesktopManager@@UEAAJPEAUIImmersiveMonitorManager@@@Z @ 0x180137B90 (-SetMonitorManager@CVirtualDesktopManager@@UEAAJPEAUIImmersiveMonitorManager@@@Z.c)
 *     ?RuntimeClassInitialize@VirtualDesktopSwitcherHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z @ 0x180775CF8 (-RuntimeClassInitialize@VirtualDesktopSwitcherHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 *__fastcall wil::com_ptr_t<IImmersiveMonitorManager,wil::err_exception_policy>::operator=(
        __int64 *a1,
        __int64 a2)
{
  __int64 v3; // rdi

  v3 = *a1;
  *a1 = a2;
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  return a1;
}
