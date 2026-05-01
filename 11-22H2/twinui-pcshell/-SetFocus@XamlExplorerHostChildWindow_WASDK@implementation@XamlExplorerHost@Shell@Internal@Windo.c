/*
 * XREFs of ?SetFocus@XamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAAX_N@Z @ 0x18004F11C
 * Callers:
 *     ?SetFocus2@?$produce@UXamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostChildWindow_WASDK@34567@@impl@winrt@@UEAAH_N@Z @ 0x18004F0F0 (-SetFocus2@-$produce@UXamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@In.c)
 *     ?SetFocus@?$produce@UXamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostChildWindow_WASDK@34567@@impl@winrt@@UEAAHXZ @ 0x1804F9070 (-SetFocus@-$produce@UXamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Int.c)
 * Callees:
 *     ??$call@AEAV_lambda_cdfc71d4e5fb339911b9247de9cec5c2_@@@?$factory_cache_entry@UXamlSourceFocusNavigationRequest@Hosting@Xaml@UI@Microsoft@winrt@@UIXamlSourceFocusNavigationRequestFactory@23456@@impl@winrt@@QEAA?A_PAEAV_lambda_cdfc71d4e5fb339911b9247de9cec5c2_@@@Z @ 0x18004EF6C (--$call@AEAV_lambda_cdfc71d4e5fb339911b9247de9cec5c2_@@@-$factory_cache_entry@UXamlSourceFocusNa.c)
 *     ?NavigateFocus@?$consume_Microsoft_UI_Xaml_Hosting_IDesktopWindowXamlSource@UIDesktopWindowXamlSource@Hosting@Xaml@UI@Microsoft@winrt@@@impl@winrt@@QEBA@AEBUXamlSourceFocusNavigationRequest@Hosting@Xaml@UI@Microsoft@3@@Z @ 0x18004F21C (-NavigateFocus@-$consume_Microsoft_UI_Xaml_Hosting_IDesktopWindowXamlSource@UIDesktopWindowXamlS.c)
 *     ?HasFocus@?$consume_Microsoft_UI_Xaml_Hosting_IDesktopWindowXamlSource@UIDesktopWindowXamlSource@Hosting@Xaml@UI@Microsoft@winrt@@@impl@winrt@@QEBA@XZ @ 0x18004F304 (-HasFocus@-$consume_Microsoft_UI_Xaml_Hosting_IDesktopWindowXamlSource@UIDesktopWindowXamlSource.c)
 *     ?CreateInstance@?$consume_Microsoft_UI_Xaml_Hosting_IXamlSourceFocusNavigationRequestFactory@UIXamlSourceFocusNavigationRequestFactory@Hosting@Xaml@UI@Microsoft@winrt@@@impl@winrt@@QEBA@AEBW4XamlSourceFocusNavigationReason@Hosting@Xaml@UI@Microsoft@3@@Z @ 0x18004F364 (-CreateInstance@-$consume_Microsoft_UI_Xaml_Hosting_IXamlSourceFocusNavigationRequestFactory@UIX.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x1800D5B1C (--8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow_WASDK::SetFocus(
        HWND *this,
        char a2)
{
  char *v4; // rbx
  void (__fastcall ***v5)(_QWORD, __int64 *, __int64 *); // rcx
  _QWORD v6[2]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  int v8; // [rsp+50h] [rbp+20h] BYREF
  __int64 v9; // [rsp+60h] [rbp+30h] BYREF
  __int64 v10; // [rsp+68h] [rbp+38h] BYREF

  v9 = 0LL;
  v4 = (char *)(this + 5);
  if ( (unsigned __int8)winrt::Windows::Foundation::operator==(this + 5, &v9) )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x95,
      (unsigned int)"pcshell\\twinui\\xamlexplorerhost\\lib\\XamlExplorerHostChildWindow_WASDK.cpp",
      (const char *)0x8007139FLL,
      v6[0]);
  if ( !(unsigned __int8)winrt::impl::consume_Microsoft_UI_Xaml_Hosting_IDesktopWindowXamlSource<winrt::Microsoft::UI::Xaml::Hosting::IDesktopWindowXamlSource>::HasFocus(v4) )
  {
    SetFocus(this[8]);
    if ( a2 )
    {
      v8 = 3;
      v6[0] = &v8;
      v6[1] = &qword_18098E7E8;
      _InterlockedIncrement64(&qword_18098E7E8);
      if ( winrt::impl::factory_cache_entry_v<winrt::Microsoft::UI::Xaml::Hosting::XamlSourceFocusNavigationRequest,winrt::Microsoft::UI::Xaml::Hosting::IXamlSourceFocusNavigationRequestFactory> )
      {
        winrt::impl::consume_Microsoft_UI_Xaml_Hosting_IXamlSourceFocusNavigationRequestFactory<winrt::Microsoft::UI::Xaml::Hosting::IXamlSourceFocusNavigationRequestFactory>::CreateInstance(
          &winrt::impl::factory_cache_entry_v<winrt::Microsoft::UI::Xaml::Hosting::XamlSourceFocusNavigationRequest,winrt::Microsoft::UI::Xaml::Hosting::IXamlSourceFocusNavigationRequestFactory>,
          &v9,
          &v8);
        _InterlockedDecrement64(&qword_18098E7E8);
      }
      else
      {
        _InterlockedDecrement64(&qword_18098E7E8);
        winrt::impl::factory_cache_entry<winrt::Microsoft::UI::Xaml::Hosting::XamlSourceFocusNavigationRequest,winrt::Microsoft::UI::Xaml::Hosting::IXamlSourceFocusNavigationRequestFactory>::call<_lambda_cdfc71d4e5fb339911b9247de9cec5c2_ &>(
          v5,
          (__int64)&v9,
          v6);
      }
      winrt::impl::consume_Microsoft_UI_Xaml_Hosting_IDesktopWindowXamlSource<winrt::Microsoft::UI::Xaml::Hosting::IDesktopWindowXamlSource>::NavigateFocus(
        v4,
        &v10,
        &v9);
      if ( v10 )
        winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v10);
      if ( v9 )
        winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v9);
    }
  }
}
