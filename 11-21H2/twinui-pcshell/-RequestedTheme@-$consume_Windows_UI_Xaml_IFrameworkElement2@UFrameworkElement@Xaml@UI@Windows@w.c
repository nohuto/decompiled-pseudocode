/*
 * XREFs of ?RequestedTheme@?$consume_Windows_UI_Xaml_IFrameworkElement2@UFrameworkElement@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBAXAEBW4ElementTheme@Xaml@UI@Windows@3@@Z @ 0x180014488
 * Callers:
 *     ?ApplyTheme@@YAXPE$AAVUIElement@Xaml@UI@Windows@@@Z @ 0x180014164 (-ApplyTheme@@YAXPE$AAVUIElement@Xaml@UI@Windows@@@Z.c)
 *     ?Initialize@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAA_NIPEAUHWND__@@_N1AEBUIInspectable@Foundation@67@@Z @ 0x1805B8EB4 (-Initialize@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAA_N.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::impl::consume_Windows_UI_Xaml_IFrameworkElement2<winrt::Windows::UI::Xaml::FrameworkElement>::RequestedTheme(
        __int64 *a1,
        unsigned int *a2)
{
  __int64 v3; // rcx
  int v4; // eax
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v3 = *a1;
  if ( v3 )
  {
    v5 = 0LL;
    (**(void (__fastcall ***)(__int64, void *, __int64 *))v3)(
      v3,
      &winrt::impl::guid_v<winrt::Windows::UI::Xaml::IFrameworkElement2>,
      &v5);
    v3 = v5;
  }
  v6 = v3;
  v4 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 56LL))(v3, *a2);
  if ( v4 < 0 )
    winrt::throw_hresult((unsigned int)v4);
  winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v6);
}
