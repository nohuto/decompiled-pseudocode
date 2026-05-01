/*
 * XREFs of ?DismissVirtualDesktopSwitcherHost@VirtualDesktopSwitcherController@@AE$AAAXXZ @ 0x1806128D4
 * Callers:
 *     ?ActivationChanged@?QIXamlSwitcherWindowInteractionEvents@@VirtualDesktopSwitcherController@@UE$AAAXPE$AAVObject@Platform@@PE$AAVWindowActivatedEventArgs@Core@UI@Windows@@@Z @ 0x1806128C8 (-ActivationChanged@-QIXamlSwitcherWindowInteractionEvents@@VirtualDesktopSwitcherController@@UE$.c)
 *     ?HostWindowActivationChanged@?QIXamlSwitcherWindowInteractionEvents@@VirtualDesktopSwitcherController@@UE$AAAX_N_K@Z @ 0x180612984 (-HostWindowActivationChanged@-QIXamlSwitcherWindowInteractionEvents@@VirtualDesktop_ea_180612984.c)
 *     ?OnLightDismiss@?QIXamlSwitcherWindowInteractionEvents@@VirtualDesktopSwitcherController@@UE$AAAXXZ @ 0x180612D3C (-OnLightDismiss@-QIXamlSwitcherWindowInteractionEvents@@VirtualDesktopSwitcherController@@UE$AAA.c)
 *     ?VirtualDesktopInvoked@?QIXamlMultitaskingViewController@@VirtualDesktopSwitcherController@@UE$AAAXPE$AAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@0@Z @ 0x180612D48 (-VirtualDesktopInvoked@-QIXamlMultitaskingViewController@@VirtualDesktopSwitcherController@@UE$A.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ??$query@UIUwpWindowWrapperInternal@@@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEBA?AV01@XZ @ 0x1801A8C8C (--$query@UIUwpWindowWrapperInternal@@@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_pol.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall VirtualDesktopSwitcherController::DismissVirtualDesktopSwitcherHost(__int64 a1)
{
  __int64 v1; // [rsp+30h] [rbp+8h] BYREF

  wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::query<IUwpWindowWrapperInternal>(
    (__int64 *)(a1 + 168),
    &v1);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 40LL))(v1);
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v1);
}
