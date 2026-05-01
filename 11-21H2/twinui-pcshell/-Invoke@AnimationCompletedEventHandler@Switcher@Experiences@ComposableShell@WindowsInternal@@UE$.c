/*
 * XREFs of ?Invoke@AnimationCompletedEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAXXZ @ 0x180042940
 * Callers:
 *     ?__abi_WindowsInternal_ComposableShell_Experiences_Switcher_AnimationCompletedEventHandler___abi_IDelegate____abi_Invoke@?Q__abi_IDelegate@AnimationCompletedEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@23456@UE$AAAJXZ @ 0x180042910 (-__abi_WindowsInternal_ComposableShell_Experiences_Switcher_AnimationCompletedEventHandler___abi.c)
 *     __lambda_0b0ea29adb38baec39914485464e8775_::operator()_::_1_::catch$7 @ 0x18042F4F3 (__lambda_0b0ea29adb38baec39914485464e8775_--operator()_--_1_--catch$7.c)
 *     wil::details::ScopeExitFn__lambda_85c2999b5b2db8f0992a2defe3530b0e___::_ScopeExitFn__lambda_85c2999b5b2db8f0992a2defe3530b0e___ @ 0x18060FEF0 (wil--details--ScopeExitFn__lambda_85c2999b5b2db8f0992a2defe3530b0e___--_ScopeExitFn__lambda_85c2.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x18041F378 (-__abi_WinRTraiseException@@YAXJ@Z.c)
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
