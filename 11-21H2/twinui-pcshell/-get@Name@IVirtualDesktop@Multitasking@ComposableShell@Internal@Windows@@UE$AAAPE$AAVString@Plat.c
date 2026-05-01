/*
 * XREFs of ?get@Name@IVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@UE$AAAPE$AAVString@Platform@@XZ @ 0x180447694
 * Callers:
 *     ?CreateVirtualDesktopContextMenuItems@XamlAllUpViewController@@AE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PE$AAU?$IVector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@6@@Z @ 0x1804422AC (-CreateVirtualDesktopContextMenuItems@XamlAllUpViewController@@AE$AAAXPE$AAUISwitchItem@Multitas.c)
 * Callees:
 *     ?__abi_winrt_ptrto_string_ctor@@YAPEAXPE$ADVString@Platform@@@Z @ 0x18014B884 (-__abi_winrt_ptrto_string_ctor@@YAPEAXPE$ADVString@Platform@@@Z.c)
 *     WindowsDeleteString_0 @ 0x180189BBB (WindowsDeleteString_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x18041F378 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
HSTRING __fastcall Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop::Name::get(__int64 a1)
{
  int v1; // eax
  HSTRING v2; // rbx
  HSTRING string; // [rsp+30h] [rbp+8h] BYREF

  string = 0LL;
  v1 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a1 + 64LL))(a1, &string);
  if ( v1 < 0 )
  {
    __abi_WinRTraiseException(v1);
    __debugbreak();
  }
  v2 = __abi_winrt_ptrto_string_ctor(string);
  WindowsDeleteString_0(string);
  return v2;
}
