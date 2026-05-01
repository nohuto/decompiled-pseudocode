/*
 * XREFs of ?attach@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXPEAUIUwpWindowWrapperInternal@@@Z @ 0x18009D078
 * Callers:
 *     ?UwpWindowVisibilityChanged@UwpWindowEventDispatcher@@UEAAJPEAUIWindowVisibilityChangedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x180037810 (-UwpWindowVisibilityChanged@UwpWindowEventDispatcher@@UEAAJPEAUIWindowVisibilityChangedEventArgs.c)
 *     ?UwpWindowActivating@UwpWindowEventDispatcher@@UEAAJPEAUIUwpWindowActivatingEventArgs@UwpWindowLifecycleManagement@Shell@Internal@Windows@@@Z @ 0x1800992D0 (-UwpWindowActivating@UwpWindowEventDispatcher@@UEAAJPEAUIUwpWindowActivatingEventArgs@UwpWindowL.c)
 *     ?UwpWindowConsolidateRequested@UwpWindowEventDispatcher@@UEAAJPEAUIConsolidateRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x18009AD70 (-UwpWindowConsolidateRequested@UwpWindowEventDispatcher@@UEAAJPEAUIConsolidateRequestedEventArgs.c)
 *     ?HandleForegroundWindow@UwpWindowEventDispatcher@@AEAAXPEAUHWND__@@@Z @ 0x18009B6C4 (-HandleForegroundWindow@UwpWindowEventDispatcher@@AEAAXPEAUHWND__@@@Z.c)
 *     ?UwpWindowActivationRequested@UwpWindowEventDispatcher@@AEAAJPEAUIUwpWindowContext@UwpWindowLifecycleManagement@Shell@Internal@Windows@@PEAUIActivationRequestedEventArgs@WindowManagement@ApplicationModel@56@@Z @ 0x18009D834 (-UwpWindowActivationRequested@UwpWindowEventDispatcher@@AEAAJPEAUIUwpWindowContext@UwpWindowLife.c)
 *     ?UwpWindowRemoved@UwpWindowEventDispatcher@@UEAAJAEBUUwpWindowContextRemovedEventArgs@UwpWindowLifecycleManagement@Shell@Internal@Windows@@@Z @ 0x18009E690 (-UwpWindowRemoved@UwpWindowEventDispatcher@@UEAAJAEBUUwpWindowContextRemovedEventArgs@UwpWindowL.c)
 *     ??4?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x18009E8A0 (--4-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@.c)
 *     ?UwpWindowAdded@UwpWindowEventDispatcher@@UEAAJUUwpWindowContextId@UwpWindowLifecycleManagement@Shell@Internal@Windows@@W4WindowCreatedType@@@Z @ 0x18016A870 (-UwpWindowAdded@UwpWindowEventDispatcher@@UEAAJUUwpWindowContextId@UwpWindowLifecycleManagement@.c)
 *     ??$?4VUwpWindowWrapper@@X@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@$$QEAV?$ComPtr@VUwpWindowWrapper@@@WRL@Microsoft@@@Z @ 0x18016AF28 (--$-4VUwpWindowWrapper@@X@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wi.c)
 *     ??4PendingActivationResumeData@UwpWindowEventDispatcher@@QEAAAEAU01@$$QEAU01@@Z @ 0x18017EC40 (--4PendingActivationResumeData@UwpWindowEventDispatcher@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     ?erase@?$vector@V?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@2@@Z @ 0x1801933F8 (-erase@-$vector@V-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@V-$all.c)
 *     ?SwitchAsync@UwpWindowEventDispatcher@@AEAAXIIW4ApplicationViewSwitchingOptions@ViewManagement@UI@Windows@@PEAUIAsyncCallback@@@Z @ 0x1804D2330 (-SwitchAsync@UwpWindowEventDispatcher@@AEAAXIIW4ApplicationViewSwitchingOptions@ViewManagement@U.c)
 *     ?TerminateActivityHost@UwpWindowEventDispatcher@@UEAAJIW4TerminateActivityHostOptions@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1804D2630 (-TerminateActivityHost@UwpWindowEventDispatcher@@UEAAJIW4TerminateActivityHostOptions@ViewManage.c)
 *     ?TryShowAsViewModeAsync@UwpWindowEventDispatcher@@AEAAXIIW4ApplicationViewMode@ViewManagement@UI@Windows@@W4ExperienceKind@WindowManagement@ApplicationModel@Internal@5@W4ViewSizePreference@345@2USize@Foundation@5@W4ViewGroupingPreference@7895@_KPEAUIAsyncCallback@@@Z @ 0x1804D2944 (-TryShowAsViewModeAsync@UwpWindowEventDispatcher@@AEAAXIIW4ApplicationViewMode@ViewManagement@UI.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::attach(__int64 *a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 result; // rax

  v2 = *a1;
  *a1 = a2;
  if ( v2 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  return result;
}
