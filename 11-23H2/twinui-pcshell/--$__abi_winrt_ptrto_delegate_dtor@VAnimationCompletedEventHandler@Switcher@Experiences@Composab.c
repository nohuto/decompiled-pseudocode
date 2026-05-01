/*
 * XREFs of ??$__abi_winrt_ptrto_delegate_dtor@VAnimationCompletedEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@@YAXPE$ADVAnimationCompletedEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x1807694FC
 * Callers:
 *     _TaskViewFrame::DismissAnimated_::_1_::dtor$5 @ 0x1802C351E (_TaskViewFrame--DismissAnimated_--_1_--dtor$5.c)
 *     _XamlSnapAssistViewHost::AnimateDismissView_::_1_::dtor$5 @ 0x18076AE19 (_XamlSnapAssistViewHost--AnimateDismissView_--_1_--dtor$5.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::AnimationCompletedEventHandler>(
        __int64 a1)
{
  __int64 result; // rax

  if ( a1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  return result;
}
