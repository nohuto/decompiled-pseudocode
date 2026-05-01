/*
 * XREFs of ??$?0AEAV?$com_ptr_t@UIWeakReference@@Uerr_failfast_policy@wil@@@wil@@AEAPEAUHHOOK__@@@?$_Ref_count_obj2@VVirtualDesktopSwitcherHookData@@@std@@QEAA@AEAV?$com_ptr_t@UIWeakReference@@Uerr_failfast_policy@wil@@@wil@@AEAPEAUHHOOK__@@@Z @ 0x18076FB94
 * Callers:
 *     ??0VirtualDesktopSwitcherHook@@QEAA@V?$com_ptr_t@UIWeakReference@@Uerr_failfast_policy@wil@@@wil@@@Z @ 0x1807716DC (--0VirtualDesktopSwitcherHook@@QEAA@V-$com_ptr_t@UIWeakReference@@Uerr_failfast_policy@wil@@@wil.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAppStateManager@AppLimits@FamilySafety@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180098014 (--1-$com_ptr_t@UIAppStateManager@AppLimits@FamilySafety@Internal@Windows@@Uerr_exception_policy@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::_Ref_count_obj2<VirtualDesktopSwitcherHookData>::_Ref_count_obj2<VirtualDesktopSwitcherHookData>(
        __int64 a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 v4; // rsi
  __int64 v5; // rbx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  *(_DWORD *)(a1 + 8) = 1;
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &std::_Ref_count_obj2<VirtualDesktopSwitcherHookData>::`vftable';
  v4 = *a3;
  v5 = *a2;
  v7 = v5;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  *(_QWORD *)(a1 + 16) = v5;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  *(_QWORD *)(a1 + 24) = v4;
  wil::com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>(&v7);
  return a1;
}
