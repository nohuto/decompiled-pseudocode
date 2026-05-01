/*
 * XREFs of ?Invoke@AnimationCompletedEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAXXZ @ 0x180071BF0
 * Callers:
 *     ?__abi_WindowsInternal_ComposableShell_Experiences_Switcher_AnimationCompletedEventHandler___abi_IDelegate____abi_Invoke@?Q__abi_IDelegate@AnimationCompletedEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@23456@UE$AAAJXZ @ 0x180071BC0 (-__abi_WindowsInternal_ComposableShell_Experiences_Switcher_AnimationCompletedEventHandler___abi.c)
 *     wil::details::ScopeExitFn__lambda_85c2999b5b2db8f0992a2defe3530b0e___::_ScopeExitFn__lambda_85c2999b5b2db8f0992a2defe3530b0e___ @ 0x180786490 (wil--details--ScopeExitFn__lambda_85c2999b5b2db8f0992a2defe3530b0e___--_ScopeExitFn__lambda_85c2.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1804FDE00 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 */

__int64 __fastcall WindowsInternal::ComposableShell::Experiences::Switcher::AnimationCompletedEventHandler::Invoke(
        _QWORD **a1)
{
  __int64 result; // rax

  if ( *a1 == &WindowsInternal::ComposableShell::Experiences::Switcher::AnimationCompletedEventHandler::`vftable'{for `__abi_IUnknown'} )
    return (*(__int64 (__fastcall **)(_QWORD *))(*a1[37] + 8LL))(a1[37]);
  result = ((__int64 (*)(void))(*a1)[3])();
  if ( (int)result < 0 )
  {
    __abi_WinRTraiseException(result);
    __debugbreak();
  }
  return result;
}
