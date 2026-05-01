/*
 * XREFs of ??1?$tuple@UScalarKeyFrameAnimation@Composition@UI@Windows@winrt@@UCompositor@2345@@std@@QEAA@XZ @ 0x180607E6C
 * Callers:
 *     _VirtualDesktopSwitcherHost::StartDismissAnimation_::_1_::dtor$4 @ 0x18060BDFE (_VirtualDesktopSwitcherHost--StartDismissAnimation_--_1_--dtor$4.c)
 *     _VirtualDesktopSwitcherHost::StartInvokeAnimation_::_1_::dtor$3 @ 0x18060C0A4 (_VirtualDesktopSwitcherHost--StartInvokeAnimation_--_1_--dtor$3.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 */

void __fastcall std::tuple<winrt::Windows::UI::Composition::ScalarKeyFrameAnimation,winrt::Windows::UI::Composition::Compositor>::~tuple<winrt::Windows::UI::Composition::ScalarKeyFrameAnimation,winrt::Windows::UI::Composition::Compositor>(
        winrt::Windows::Foundation::IUnknown *this)
{
  winrt::Windows::Foundation::IUnknown *v2; // rcx

  v2 = (winrt::Windows::Foundation::IUnknown *)((char *)this + 8);
  if ( *(_QWORD *)v2 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref(v2);
  if ( *(_QWORD *)this )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref(this);
}
