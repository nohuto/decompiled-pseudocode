/*
 * XREFs of ??0?$com_ptr_t@UIImmersiveMonitor@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIImmersiveMonitor@@@Z @ 0x18000FCC8
 * Callers:
 *     ?CreateFilteredItemCollection@TaskViewFrame@@AEAAXAEBUSwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@winrt@@@Z @ 0x18000FD70 (-CreateFilteredItemCollection@TaskViewFrame@@AEAAXAEBUSwitchItemDataView@Multitasking@Composable.c)
 *     Microsoft::WRL::Details::Make_CMultitaskingViewTaskCallback__lambda_e68365d89e6ffd9292af92cce9779ecf_____lambda_e68365d89e6ffd9292af92cce9779ecf__const_&_ @ 0x180494644 (Microsoft--WRL--Details--Make_CMultitaskingViewTaskCallback__lambda_e68365d89e6ffd9292af92cce977.c)
 *     ?ShowVirtualDesktopSwitcher@CVirtualDesktopSwitcherService@@UEAAJPEAUHMONITOR__@@W4VIRTUAL_DESKTOP_SWITCHER_INVOKE_DETAILS@@@Z @ 0x180494B90 (-ShowVirtualDesktopSwitcher@CVirtualDesktopSwitcherService@@UEAAJPEAUHMONITOR__@@W4VIRTUAL_DESKT.c)
 *     ??$_Emplace@AEBV?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@?$list@V?$com_ptr_t@UIImmersiveMonitor@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIImmersiveMonitor@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAPEAU?$_List_node@V?$com_ptr_t@UIImmersiveMonitor@@Uerr_exception_policy@wil@@@wil@@PEAX@1@QEAU21@AEBV?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Z @ 0x1804EF07C (--$_Emplace@AEBV-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@-$list@V-$com_ptr_t@UIImmersiveMon.c)
 *     ?GetImmersiveMonitorForNavigate@TaskViewHost@@AEAA?AV?$com_ptr_t@UIImmersiveMonitor@@Uerr_exception_policy@wil@@@wil@@PEAUIImmersiveMonitor@@I@Z @ 0x1805FE6AC (-GetImmersiveMonitorForNavigate@TaskViewHost@@AEAA-AV-$com_ptr_t@UIImmersiveMonitor@@Uerr_except.c)
 *     ?Monitor@TaskViewFrame@@UEAA?AV?$com_ptr_t@UIImmersiveMonitor@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x180610010 (-Monitor@TaskViewFrame@@UEAA-AV-$com_ptr_t@UIImmersiveMonitor@@Uerr_exception_policy@wil@@@wil@@.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall wil::com_ptr_t<IImmersiveMonitor,wil::err_exception_policy>::com_ptr_t<IImmersiveMonitor,wil::err_exception_policy>(
        _QWORD *a1,
        __int64 a2)
{
  *a1 = a2;
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  return a1;
}
