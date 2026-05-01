/*
 * XREFs of ??0?$com_ptr_t@UIImmersiveMonitor@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIImmersiveMonitor@@@Z @ 0x1801B9F9C
 * Callers:
 *     ?CreateFilteredItemCollection@TaskViewFrame@@AEAAXAEBUSwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@winrt@@@Z @ 0x1800795A8 (-CreateFilteredItemCollection@TaskViewFrame@@AEAAXAEBUSwitchItemDataView@Multitasking@Composable.c)
 *     ?RegisterForEvents@TaskViewFrame@@AEAAXXZ @ 0x18007D65C (-RegisterForEvents@TaskViewFrame@@AEAAXXZ.c)
 *     _lambda_5b1893e84c025059ea9350e935de1321_::_lambda_5b1893e84c025059ea9350e935de1321_ @ 0x18028CFA0 (_lambda_5b1893e84c025059ea9350e935de1321_--_lambda_5b1893e84c025059ea9350e935de1321_.c)
 *     _lambda_f11de0bc23a1be581f21c48152b34889_::_lambda_f11de0bc23a1be581f21c48152b34889_ @ 0x18028CFE8 (_lambda_f11de0bc23a1be581f21c48152b34889_--_lambda_f11de0bc23a1be581f21c48152b34889_.c)
 *     Microsoft::WRL::Details::Make_CMultitaskingViewTaskCallback__lambda_43c960c255a41f4cca7711b37d19ef2b_____lambda_43c960c255a41f4cca7711b37d19ef2b__const_&_ @ 0x18054A154 (Microsoft--WRL--Details--Make_CMultitaskingViewTaskCallback__lambda_43c960c255a41f4cca7711b37d19.c)
 *     ?ShowVirtualDesktopSwitcher@CVirtualDesktopSwitcherService@@UEAAJPEAUHMONITOR__@@W4VIRTUAL_DESKTOP_SWITCHER_INVOKE_DETAILS@@@Z @ 0x18054A6D0 (-ShowVirtualDesktopSwitcher@CVirtualDesktopSwitcherService@@UEAAJPEAUHMONITOR__@@W4VIRTUAL_DESKT.c)
 *     ??$_Emplace@AEBV?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@?$list@V?$com_ptr_t@UIImmersiveMonitor@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIImmersiveMonitor@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAPEAU?$_List_node@V?$com_ptr_t@UIImmersiveMonitor@@Uerr_exception_policy@wil@@@wil@@PEAX@1@QEAU21@AEBV?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Z @ 0x1805A6F6C (--$_Emplace@AEBV-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@-$list@V-$com_ptr_t@UIImmersiveMon.c)
 *     ?GetImmersiveMonitorForNavigate@TaskViewHost@@AEAA?AV?$com_ptr_t@UIImmersiveMonitor@@Uerr_exception_policy@wil@@@wil@@PEAUIImmersiveMonitor@@I@Z @ 0x180767A78 (-GetImmersiveMonitorForNavigate@TaskViewHost@@AEAA-AV-$com_ptr_t@UIImmersiveMonitor@@Uerr_except.c)
 *     ?Monitor@TaskViewFrame@@UEAA?AV?$com_ptr_t@UIImmersiveMonitor@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x180787390 (-Monitor@TaskViewFrame@@UEAA-AV-$com_ptr_t@UIImmersiveMonitor@@Uerr_exception_policy@wil@@@wil@@.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
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
