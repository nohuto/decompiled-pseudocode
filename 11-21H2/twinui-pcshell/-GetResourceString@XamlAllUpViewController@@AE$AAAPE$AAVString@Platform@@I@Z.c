/*
 * XREFs of ?GetResourceString@XamlAllUpViewController@@AE$AAAPE$AAVString@Platform@@I@Z @ 0x180443820
 * Callers:
 *     ?CreateAndAppendSwitcherContextMenuItem@XamlAllUpViewController@@AE$AAAXIPE$AAU?$IVector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@@Z @ 0x18044200C (-CreateAndAppendSwitcherContextMenuItem@XamlAllUpViewController@@AE$AAAXIPE$AAU-$IVector@PE$AAUI.c)
 *     ?CreateVirtualDesktopContextMenuItems@XamlAllUpViewController@@AE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PE$AAU?$IVector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@6@@Z @ 0x1804422AC (-CreateVirtualDesktopContextMenuItems@XamlAllUpViewController@@AE$AAAXPE$AAUISwitchItem@Multitas.c)
 * Callees:
 *     ?__abi_winrt_ptrto_string_ctor@@YAPEAXPE$ADVString@Platform@@@Z @ 0x18014B884 (-__abi_winrt_ptrto_string_ctor@@YAPEAXPE$ADVString@Platform@@@Z.c)
 *     ??0String@Platform@@QE$AAA@PEB_W@Z @ 0x180172108 (--0String@Platform@@QE$AAA@PEB_W@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     WindowsDeleteString_0 @ 0x180189BBB (WindowsDeleteString_0.c)
 */

// Hidden C++ exception states: #wind=3
HSTRING __fastcall XamlAllUpViewController::GetResourceString(__int64 a1, UINT a2)
{
  HSTRING v2; // rcx
  HSTRING v3; // rbx
  HSTRING v5; // [rsp+20h] [rbp-238h]
  WCHAR Buffer[264]; // [rsp+30h] [rbp-228h] BYREF

  LoadStringW(&_ImageBase, a2, Buffer, 260);
  v5 = Platform::String::String(v2, Buffer);
  v3 = __abi_winrt_ptrto_string_ctor(v5);
  WindowsDeleteString_0(v5);
  return v3;
}
