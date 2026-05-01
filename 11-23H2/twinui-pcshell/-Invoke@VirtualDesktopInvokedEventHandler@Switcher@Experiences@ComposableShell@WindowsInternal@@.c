/*
 * XREFs of ?Invoke@VirtualDesktopInvokedEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAXPE$AAUIVirtualDesktop@Multitasking@4Internal@Windows@@0@Z @ 0x1807869A0
 * Callers:
 *     ?__abi_WindowsInternal_ComposableShell_Experiences_Switcher_VirtualDesktopInvokedEventHandler___abi_IDelegate____abi_Invoke@?Q__abi_IDelegate@VirtualDesktopInvokedEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@23456@UE$AAAJPE$AAUIVirtualDesktop@Multitasking@5Internal@Windows@@0@Z @ 0x180787BE0 (-__abi_WindowsInternal_ComposableShell_Experiences_Switcher_VirtualDesktopInvokedEventHandler___.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1804FDE00 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 */

__int64 __fastcall WindowsInternal::ComposableShell::Experiences::Switcher::VirtualDesktopInvokedEventHandler::Invoke(
        _QWORD **a1)
{
  __int64 result; // rax

  if ( *a1 == &WindowsInternal::ComposableShell::Experiences::Switcher::VirtualDesktopInvokedEventHandler::`vftable'{for `__abi_IUnknown'} )
    return (*(__int64 (__fastcall **)(_QWORD *))(*a1[37] + 8LL))(a1[37]);
  result = ((__int64 (__fastcall *)(_QWORD **))(*a1)[3])(a1);
  if ( (int)result < 0 )
  {
    __abi_WinRTraiseException(result);
    JUMPOUT(0x1807869F6LL);
  }
  return result;
}
