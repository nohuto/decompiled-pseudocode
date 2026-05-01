/*
 * XREFs of ?Invoke@ItemInvokedEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAXPE$AAUISwitchItem@Multitasking@4Internal@Windows@@@Z @ 0x1807794F0
 * Callers:
 *     ?__abi_WindowsInternal_ComposableShell_Experiences_Switcher_ItemInvokedEventHandler___abi_IDelegate____abi_Invoke@?Q__abi_IDelegate@ItemInvokedEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@23456@UE$AAAJPE$AAUISwitchItem@Multitasking@5Internal@Windows@@@Z @ 0x18077B200 (-__abi_WindowsInternal_ComposableShell_Experiences_Switcher_ItemInvokedEventHandler___abi_IDeleg.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1804FDE00 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 */

__int64 __fastcall WindowsInternal::ComposableShell::Experiences::Switcher::ItemInvokedEventHandler::Invoke(
        _QWORD **a1)
{
  __int64 result; // rax

  if ( *a1 == &WindowsInternal::ComposableShell::Experiences::Switcher::ItemInvokedEventHandler::`vftable'{for `__abi_IUnknown'} )
    return (*(__int64 (__fastcall **)(_QWORD *))(*a1[37] + 8LL))(a1[37]);
  result = ((__int64 (__fastcall *)(_QWORD **))(*a1)[3])(a1);
  if ( (int)result < 0 )
  {
    __abi_WinRTraiseException(result);
    JUMPOUT(0x180779546LL);
  }
  return result;
}
