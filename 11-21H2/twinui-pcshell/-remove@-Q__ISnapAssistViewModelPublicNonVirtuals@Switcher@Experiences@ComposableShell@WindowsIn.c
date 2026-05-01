/*
 * XREFs of ?remove@?Q__ISnapAssistViewModelPublicNonVirtuals@Switcher@Experiences@ComposableShell@WindowsInternal@@RegionInvoked@SnapAssistViewModel@2345@UE$AAAXVEventRegistrationToken@Foundation@Windows@@@Z @ 0x180612440
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x18041F378 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 */

__int64 __fastcall _remove__Q__ISnapAssistViewModelPublicNonVirtuals_Switcher_Experiences_ComposableShell_WindowsInternal__RegionInvoked_SnapAssistViewModel_2345_UE_AAAXVEventRegistrationToken_Foundation_Windows___Z(
        __int64 a1)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 88LL))(a1);
  if ( (int)result < 0 )
  {
    __abi_WinRTraiseException(result);
    __debugbreak();
  }
  return result;
}
