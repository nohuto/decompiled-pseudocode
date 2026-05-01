/*
 * XREFs of ??0?$com_ptr_t@UIUnknown@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIUnknown@@@Z @ 0x18006B878
 * Callers:
 *     ?ReconcileSessionIdleTaskCompletion@UwpWindowWrapperBase@@AEAAXXZ @ 0x1800A07B4 (-ReconcileSessionIdleTaskCompletion@UwpWindowWrapperBase@@AEAAXXZ.c)
 *     ?v_SetDesiredNavigationLevel@UwpWindowWrapper@@EEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1801751D0 (-v_SetDesiredNavigationLevel@UwpWindowWrapper@@EEAAXW4NavigationLevel@ViewManagerInterop@Shell@I.c)
 *     _lambda_28173a8c926c87e1969fb34dfb279c06_::_lambda_28173a8c926c87e1969fb34dfb279c06_ @ 0x1801F75D0 (_lambda_28173a8c926c87e1969fb34dfb279c06_--_lambda_28173a8c926c87e1969fb34dfb279c06_.c)
 *     ?QueuePendingActivation@WindowEventDispatcher@@AEAAXPEAUIWindowWrapperInternal@@PEAUIPropertySet@Collections@Foundation@Windows@@_N@Z @ 0x1804C7810 (-QueuePendingActivation@WindowEventDispatcher@@AEAAXPEAUIWindowWrapperInternal@@PEAUIPropertySet.c)
 *     ?QueuePendingActivation@UwpWindowEventDispatcher@@AEAAXPEAUIUwpWindowWrapperInternal@@PEAUIPropertySet@Collections@Foundation@Windows@@_N@Z @ 0x1804D1B70 (-QueuePendingActivation@UwpWindowEventDispatcher@@AEAAXPEAUIUwpWindowWrapperInternal@@PEAUIPrope.c)
 *     ?v_SetDesiredNavigationLevel@WindowWrapper@@EEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1804DECB0 (-v_SetDesiredNavigationLevel@WindowWrapper@@EEAAXW4NavigationLevel@ViewManagerInterop@Shell@Inte.c)
 *     _lambda_2ca22ad6510bc8d2f46bb56efd928e1d_::operator() @ 0x1804E5F70 (_lambda_2ca22ad6510bc8d2f46bb56efd928e1d_--operator().c)
 *     ?NotifyGlobalComponentsForWindowStateChange@WindowWrapperBase@@AEAAXPEAUHWND__@@W4WindowChange@1@@Z @ 0x1804EACB0 (-NotifyGlobalComponentsForWindowStateChange@WindowWrapperBase@@AEAAXPEAUHWND__@@W4WindowChange@1.c)
 *     ?ReconcileSessionIdleTaskCompletion@WindowWrapperBase@@AEAAXXZ @ 0x1804EB388 (-ReconcileSessionIdleTaskCompletion@WindowWrapperBase@@AEAAXXZ.c)
 *     ?RequestCloseAsync@WindowWrapperBase@@UEAAJPEAPEAU?$IAsyncOperation@W4AppRequestHandledResult@ViewManagerInterop@Shell@Internal@Windows@@@Foundation@Windows@@@Z @ 0x1804EB7B0 (-RequestCloseAsync@WindowWrapperBase@@UEAAJPEAPEAU-$IAsyncOperation@W4AppRequestHandledResult@Vi.c)
 *     _lambda_647596ef7550220ffa525a1b7cd9dfa2_::operator() @ 0x1804F05B0 (_lambda_647596ef7550220ffa525a1b7cd9dfa2_--operator().c)
 *     ?RequestCloseAsync@UwpWindowWrapperBase@@UEAAJPEAPEAU?$IAsyncOperation@W4AppRequestHandledResult@ViewManagerInterop@Shell@Internal@Windows@@@Foundation@Windows@@@Z @ 0x1804F1570 (-RequestCloseAsync@UwpWindowWrapperBase@@UEAAJPEAPEAU-$IAsyncOperation@W4AppRequestHandledResult.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall wil::com_ptr_t<IUnknown,wil::err_exception_policy>::com_ptr_t<IUnknown,wil::err_exception_policy>(
        _QWORD *a1,
        __int64 a2)
{
  *a1 = a2;
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  return a1;
}
