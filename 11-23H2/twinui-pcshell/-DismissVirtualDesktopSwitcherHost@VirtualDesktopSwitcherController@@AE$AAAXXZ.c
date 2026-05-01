/*
 * XREFs of ?DismissVirtualDesktopSwitcherHost@VirtualDesktopSwitcherController@@AE$AAAXXZ @ 0x18078C58C
 * Callers:
 *     ?HostWindowActivationChanged@?QIXamlSwitcherWindowInteractionEvents@@VirtualDesktopSwitcherController@@UE$AAAX_N_K@Z @ 0x18078C63C (-HostWindowActivationChanged@-QIXamlSwitcherWindowInteractionEvents@@VirtualDesktop_ea_18078C63C.c)
 *     ?OnLightDismiss@?QIXamlSwitcherWindowInteractionEvents@@VirtualDesktopSwitcherController@@UE$AAAXXZ @ 0x18078C9FC (-OnLightDismiss@-QIXamlSwitcherWindowInteractionEvents@@VirtualDesktopSwitcherController@@UE$AAA.c)
 *     ?VirtualDesktopInvoked@?QIXamlMultitaskingViewController@@VirtualDesktopSwitcherController@@UE$AAAXPE$AAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@0@Z @ 0x18078CA08 (-VirtualDesktopInvoked@-QIXamlMultitaskingViewController@@VirtualDesktopSwitcherController@@UE$A.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$query@UIUwpWindowWrapperInternal@@@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEBA?AV01@XZ @ 0x1801F36B4 (--$query@UIUwpWindowWrapperInternal@@@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_pol.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall VirtualDesktopSwitcherController::DismissVirtualDesktopSwitcherHost(__int64 a1)
{
  __int64 v1; // [rsp+30h] [rbp+8h] BYREF

  wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::query<IUwpWindowWrapperInternal>(
    (__int64 *)(a1 + 168),
    &v1);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 40LL))(v1);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v1);
}
