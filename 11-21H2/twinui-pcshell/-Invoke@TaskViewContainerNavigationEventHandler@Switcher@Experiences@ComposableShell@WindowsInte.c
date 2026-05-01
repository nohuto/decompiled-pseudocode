/*
 * XREFs of ?Invoke@TaskViewContainerNavigationEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAXI@Z @ 0x180435AA0
 * Callers:
 *     ?__abi_WindowsInternal_ComposableShell_Experiences_Switcher_TaskViewContainerNavigationEventHandler___abi_IDelegate____abi_Invoke@?Q__abi_IDelegate@TaskViewContainerNavigationEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@23456@UE$AAAJI@Z @ 0x18043CD10 (-__abi_WindowsInternal_ComposableShell_Experiences_Switcher_TaskViewContainerNavigationEventHand.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x18041F378 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 */

__int64 __fastcall WindowsInternal::ComposableShell::Experiences::Switcher::TaskViewContainerNavigationEventHandler::Invoke(
        _QWORD **a1)
{
  __int64 result; // rax

  if ( *a1 == &WindowsInternal::ComposableShell::Experiences::Switcher::TaskViewContainerNavigationEventHandler::`vftable'{for `__abi_IUnknown'} )
    return (*(__int64 (__fastcall **)(_QWORD *))(*a1[37] + 8LL))(a1[37]);
  result = ((__int64 (__fastcall *)(_QWORD **))(*a1)[3])(a1);
  if ( (int)result < 0 )
  {
    __abi_WinRTraiseException(result);
    JUMPOUT(0x180435AF6LL);
  }
  return result;
}
