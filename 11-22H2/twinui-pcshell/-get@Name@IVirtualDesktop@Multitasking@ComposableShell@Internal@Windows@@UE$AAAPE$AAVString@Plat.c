/*
 * XREFs of ?get@Name@IVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@UE$AAAPE$AAVString@Platform@@XZ @ 0x180785C68
 * Callers:
 *     ?CreateAndAppendTaskGroupVirtualDesktopContextMenuItems@XamlAllUpViewController@@AE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PE$AAU?$IVector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@6@@Z @ 0x18077DEA4 (-CreateAndAppendTaskGroupVirtualDesktopContextMenuItems@XamlAllUpViewController@@AE$AAAXPE$AAUIS.c)
 *     ?CreateVirtualDesktopContextMenuItems@XamlAllUpViewController@@AE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PE$AAU?$IVector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@6@@Z @ 0x18077E5FC (-CreateVirtualDesktopContextMenuItems@XamlAllUpViewController@@AE$AAAXPE$AAUISwitchItem@Multitas.c)
 * Callees:
 *     ?__abi_winrt_ptrto_string_ctor@@YAPEAXPE$ADVString@Platform@@@Z @ 0x18018AFC4 (-__abi_winrt_ptrto_string_ctor@@YAPEAXPE$ADVString@Platform@@@Z.c)
 *     WindowsDeleteString_0 @ 0x1801C7BDB (WindowsDeleteString_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1804FDE00 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop::Name::get(__int64 a1)
{
  int v1; // eax
  __int64 v2; // rdx
  HSTRING *v3; // r8
  __int64 v4; // rbx
  HSTRING string; // [rsp+30h] [rbp+8h] BYREF

  string = 0LL;
  v1 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a1 + 64LL))(a1, &string);
  if ( v1 < 0 )
  {
    __abi_WinRTraiseException(v1);
    __debugbreak();
  }
  v4 = __abi_winrt_ptrto_string_ctor((Platform::Details *)string, v2, v3);
  WindowsDeleteString_0(string);
  return v4;
}
