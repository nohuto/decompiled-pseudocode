/*
 * XREFs of ??$from_cx@UListViewBase@Controls@Xaml@UI@Windows@winrt@@@@YA?AUListViewBase@Controls@Xaml@UI@Windows@winrt@@PE$AAVObject@Platform@@@Z @ 0x180606510
 * Callers:
 *     ?ViewLoaded@VirtualDesktopSwitcherHost@@UEAAJXZ @ 0x18060C2F0 (-ViewLoaded@VirtualDesktopSwitcherHost@@UEAAJXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall from_cx<winrt::Windows::UI::Xaml::Controls::ListViewBase>(
        _QWORD *a1,
        __int64 (__fastcall ***a2)(_QWORD, void *, _QWORD *))
{
  signed int v3; // eax

  *a1 = 0LL;
  if ( a2 )
  {
    v3 = (**a2)(a2, &winrt::impl::guid_v<winrt::Windows::UI::Xaml::Controls::IListViewBase>, a1);
    if ( v3 < 0 )
      winrt::throw_hresult(v3);
  }
  return a1;
}
