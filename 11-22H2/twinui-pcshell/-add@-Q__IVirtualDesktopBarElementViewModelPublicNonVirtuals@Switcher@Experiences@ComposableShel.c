/*
 * XREFs of ?add@?Q__IVirtualDesktopBarElementViewModelPublicNonVirtuals@Switcher@Experiences@ComposableShell@WindowsInternal@@VirtualDesktopInvoked@VirtualDesktopBarElementViewModel@2345@UE$AAA?AVEventRegistrationToken@Foundation@Windows@@PE$AAVVirtualDesktopInvokedEventHandler@2345@@Z @ 0x1800725F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1804FDE00 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 */

_QWORD *__fastcall _add__Q__IVirtualDesktopBarElementViewModelPublicNonVirtuals_Switcher_Experiences_ComposableShell_WindowsInternal__VirtualDesktopInvoked_VirtualDesktopBarElementViewModel_2345_UE_AAA_AVEventRegistrationToken_Foundation_Windows__PE_AAVVirtualDesktopInvokedEventHandler_2345__Z(
        __int64 a1,
        _QWORD *a2,
        __int64 a3)
{
  int v4; // eax

  *a2 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD *))(*(_QWORD *)a1 + 320LL))(a1, a3, a2);
  if ( v4 < 0 )
  {
    __abi_WinRTraiseException(v4);
    JUMPOUT(0x180072636LL);
  }
  return a2;
}
