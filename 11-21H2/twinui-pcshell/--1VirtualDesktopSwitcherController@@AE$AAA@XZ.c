/*
 * XREFs of ??1VirtualDesktopSwitcherController@@AE$AAA@XZ @ 0x180612844
 * Callers:
 *     ?__abi_Release@?QObject@Platform@@VirtualDesktopSwitcherController@@UE$AAAKXZ @ 0x180612FD0 (-__abi_Release@-QObject@Platform@@VirtualDesktopSwitcherController@@UE$AAAKXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ??1?$unique_winrt_event_token_cx@VVirtualDesktopBarElementViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@@wil@@QEAA@XZ @ 0x180011088 (--1-$unique_winrt_event_token_cx@VVirtualDesktopBarElementViewModel@Switcher@Experiences@Composa.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall VirtualDesktopSwitcherController::~VirtualDesktopSwitcherController(__int64 *a1)
{
  __int64 v2; // rcx

  wil::unique_winrt_event_token_cx<WindowsInternal::ComposableShell::Experiences::Switcher::VirtualDesktopBarElementViewModel>::~unique_winrt_event_token_cx<WindowsInternal::ComposableShell::Experiences::Switcher::VirtualDesktopBarElementViewModel>((__int64)(a1 + 23));
  v2 = a1[22];
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(a1 + 21);
  XamlBaseViewController::~XamlBaseViewController(a1 + 1);
}
