/*
 * XREFs of ??$convert_from_abi@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@@wil@@YA?AUISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@PEAUIUnknown@@@Z @ 0x1805FE2D0
 * Callers:
 *     ?ViewVirtualDesktopChanged@TaskViewHost@@UEAAJPEAUIApplicationView@@@Z @ 0x1805FEC10 (-ViewVirtualDesktopChanged@TaskViewHost@@UEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall wil::convert_from_abi<winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItem>(
        _QWORD *a1,
        __int64 (__fastcall ***a2)(_QWORD, void *, _QWORD *))
{
  signed int v3; // eax

  *a1 = 0LL;
  v3 = (**a2)(a2, &winrt::impl::guid_v<winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItem>, a1);
  if ( v3 < 0 )
    winrt::throw_hresult(v3);
  return a1;
}
