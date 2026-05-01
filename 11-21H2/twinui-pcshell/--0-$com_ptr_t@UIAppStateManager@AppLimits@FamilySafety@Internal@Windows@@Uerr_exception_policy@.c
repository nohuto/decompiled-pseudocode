/*
 * XREFs of ??0?$com_ptr_t@UIAppStateManager@AppLimits@FamilySafety@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIAppStateManager@AppLimits@FamilySafety@Internal@Windows@@@Z @ 0x1805673C0
 * Callers:
 *     ?TerminateApp@Win32AppStateManager@@UEAAXPEBGW4TerminationType@AppLimits@FamilySafety@Internal@Windows@@@Z @ 0x1805688B0 (-TerminateApp@Win32AppStateManager@@UEAAXPEBGW4TerminationType@AppLimits@FamilySafety@Internal@W.c)
 *     ?UpdateAppView@Win32AppStateManager@@UEAAXPEAUIApplicationView@@W4ViewState@AppLimits@FamilySafety@Internal@Windows@@PEAUIAppStateChangeNotification@4567@_N@Z @ 0x180568E70 (-UpdateAppView@Win32AppStateManager@@UEAAXPEAUIApplicationView@@W4ViewState@AppLimits@FamilySafe.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall wil::com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>::com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>(
        _QWORD *a1,
        __int64 a2)
{
  *a1 = a2;
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  return a1;
}
