/*
 * XREFs of ?remove@?Q__IVirtualDesktopBarElementViewModelPublicNonVirtuals@Switcher@Experiences@ComposableShell@WindowsInternal@@VirtualDesktopInvoked@VirtualDesktopBarElementViewModel@2345@UE$AAAXVEventRegistrationToken@Foundation@Windows@@@Z @ 0x180073610
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1804FDE00 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 */

__int64 __fastcall _remove__Q__IVirtualDesktopBarElementViewModelPublicNonVirtuals_Switcher_Experiences_ComposableShell_WindowsInternal__VirtualDesktopInvoked_VirtualDesktopBarElementViewModel_2345_UE_AAAXVEventRegistrationToken_Foundation_Windows___Z(
        __int64 a1)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 328LL))(a1);
  if ( (int)result < 0 )
  {
    __abi_WinRTraiseException(result);
    JUMPOUT(0x18007363FLL);
  }
  return result;
}
