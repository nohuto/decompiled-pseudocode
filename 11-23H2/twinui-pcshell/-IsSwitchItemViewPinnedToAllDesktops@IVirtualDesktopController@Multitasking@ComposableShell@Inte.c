/*
 * XREFs of ?IsSwitchItemViewPinnedToAllDesktops@IVirtualDesktopController@Multitasking@ComposableShell@Internal@Windows@@UE$AAA_NPE$AAUISwitchItem@2345@@Z @ 0x1807817E4
 * Callers:
 *     ?CreateVirtualDesktopContextMenuItems@XamlAllUpViewController@@AE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PE$AAU?$IVector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@6@@Z @ 0x18077E5FC (-CreateVirtualDesktopContextMenuItems@XamlAllUpViewController@@AE$AAAXPE$AAUISwitchItem@Multitas.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1804FDE00 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 */

char __fastcall Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopController::IsSwitchItemViewPinnedToAllDesktops(
        __int64 a1,
        __int64 a2)
{
  int v2; // eax
  char v4; // [rsp+30h] [rbp+8h] BYREF

  v2 = (*(__int64 (__fastcall **)(__int64, __int64, char *))(*(_QWORD *)a1 + 112LL))(a1, a2, &v4);
  if ( v2 < 0 )
  {
    __abi_WinRTraiseException(v2);
    __debugbreak();
  }
  return v4;
}
