/*
 * XREFs of wil::details::ScopeExitFn__lambda_85c2999b5b2db8f0992a2defe3530b0e___::_ScopeExitFn__lambda_85c2999b5b2db8f0992a2defe3530b0e___ @ 0x18060FEF0
 * Callers:
 *     _TaskViewFrame::DismissAnimated_::_1_::dtor$7 @ 0x1802133EB (_TaskViewFrame--DismissAnimated_--_1_--dtor$7.c)
 * Callees:
 *     ?Invoke@AnimationCompletedEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAXXZ @ 0x180042940 (-Invoke@AnimationCompletedEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::details::ScopeExitFn__lambda_85c2999b5b2db8f0992a2defe3530b0e___::_ScopeExitFn__lambda_85c2999b5b2db8f0992a2defe3530b0e___(
        _QWORD *a1)
{
  __int64 result; // rax

  if ( *((_BYTE *)a1 + 8) )
  {
    *((_BYTE *)a1 + 8) = 0;
    result = WindowsInternal::ComposableShell::Experiences::Switcher::AnimationCompletedEventHandler::Invoke((_QWORD **)*a1);
  }
  if ( *a1 )
    return (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 16LL))(*a1);
  return result;
}
