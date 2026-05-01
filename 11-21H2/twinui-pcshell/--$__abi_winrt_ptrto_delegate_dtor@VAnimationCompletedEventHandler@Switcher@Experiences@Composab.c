/*
 * XREFs of ??$__abi_winrt_ptrto_delegate_dtor@VAnimationCompletedEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@@YAXPE$ADVAnimationCompletedEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x18042CA58
 * Callers:
 *     _TaskViewFrame::DismissAnimated_::_1_::dtor$5 @ 0x1802133D9 (_TaskViewFrame--DismissAnimated_--_1_--dtor$5.c)
 *     _MonitorFrame::DismissAnimated_::_1_::dtor$5 @ 0x18043386B (_MonitorFrame--DismissAnimated_--_1_--dtor$5.c)
 *     _MonitorFrame::DismissAnimated_::_1_::dtor$6 @ 0x180433877 (_MonitorFrame--DismissAnimated_--_1_--dtor$6.c)
 *     _XamlSnapAssistViewHost::AnimateDismissView_::_1_::dtor$5 @ 0x180601433 (_XamlSnapAssistViewHost--AnimateDismissView_--_1_--dtor$5.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::AnimationCompletedEventHandler>(
        __int64 a1)
{
  __int64 result; // rax

  if ( a1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  return result;
}
