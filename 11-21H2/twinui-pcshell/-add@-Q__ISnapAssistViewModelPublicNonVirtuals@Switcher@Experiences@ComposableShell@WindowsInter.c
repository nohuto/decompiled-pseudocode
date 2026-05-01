/*
 * XREFs of ?add@?Q__ISnapAssistViewModelPublicNonVirtuals@Switcher@Experiences@ComposableShell@WindowsInternal@@RegionInvoked@SnapAssistViewModel@2345@UE$AAA?AVEventRegistrationToken@Foundation@Windows@@PE$AAV?$TypedEventHandler@PE$AAVObject@Platform@@PE$AAVSnapAssistRegionViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@@9Windows@@@Z @ 0x180612370
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x18041F378 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 */

_QWORD *__fastcall _add__Q__ISnapAssistViewModelPublicNonVirtuals_Switcher_Experiences_ComposableShell_WindowsInternal__RegionInvoked_SnapAssistViewModel_2345_UE_AAA_AVEventRegistrationToken_Foundation_Windows__PE_AAV__TypedEventHandler_PE_AAVObject_Platform__PE_AAVSnapAssistRegionViewModel_Switcher_Experiences_ComposableShell_WindowsInternal___9Windows___Z(
        __int64 a1,
        _QWORD *a2,
        __int64 a3)
{
  int v4; // eax

  *a2 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD *))(*(_QWORD *)a1 + 80LL))(a1, a3, a2);
  if ( v4 < 0 )
  {
    __abi_WinRTraiseException(v4);
    __debugbreak();
  }
  return a2;
}
