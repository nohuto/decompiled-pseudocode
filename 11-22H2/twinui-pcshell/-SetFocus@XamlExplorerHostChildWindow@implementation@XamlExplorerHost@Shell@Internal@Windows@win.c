/*
 * XREFs of ?SetFocus@XamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAAX_N@Z @ 0x1804F7D98
 * Callers:
 *     ?SetFocus2@?$produce@UXamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostChildWindow@34567@@impl@winrt@@UEAAH_N@Z @ 0x1804F7CE0 (-SetFocus2@-$produce@UXamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal.c)
 *     ?SetFocus@?$produce@UXamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostChildWindow@34567@@impl@winrt@@UEAAHXZ @ 0x1804F7D40 (-SetFocus@-$produce@UXamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x1800D5B1C (--8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$call@AEAV_lambda_3207e8c3a392af88c709c9f0a8afe0f7_@@@?$factory_cache_entry@UXamlSourceFocusNavigationRequest@Hosting@Xaml@UI@Windows@winrt@@UIXamlSourceFocusNavigationRequestFactory@23456@@impl@winrt@@QEAA?A_PAEAV_lambda_3207e8c3a392af88c709c9f0a8afe0f7_@@@Z @ 0x1804F6F14 (--$call@AEAV_lambda_3207e8c3a392af88c709c9f0a8afe0f7_@@@-$factory_cache_entry@UXamlSourceFocusNa.c)
 *     ?CreateInstance@?$consume_Windows_UI_Xaml_Hosting_IXamlSourceFocusNavigationRequestFactory@UIXamlSourceFocusNavigationRequestFactory@Hosting@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBW4XamlSourceFocusNavigationReason@Hosting@Xaml@UI@Windows@3@@Z @ 0x1804F7784 (-CreateInstance@-$consume_Windows_UI_Xaml_Hosting_IXamlSourceFocusNavigationRequestFactory@UIXam.c)
 *     ?HasFocus@?$consume_Windows_UI_Xaml_Hosting_IDesktopWindowXamlSource@UIDesktopWindowXamlSource@Hosting@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1804F7828 (-HasFocus@-$consume_Windows_UI_Xaml_Hosting_IDesktopWindowXamlSource@UIDesktopWindowXamlSource@H.c)
 *     ?NavigateFocus@?$consume_Windows_UI_Xaml_Hosting_IDesktopWindowXamlSource@UIDesktopWindowXamlSource@Hosting@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUXamlSourceFocusNavigationRequest@Hosting@Xaml@UI@Windows@3@@Z @ 0x1804F79FC (-NavigateFocus@-$consume_Windows_UI_Xaml_Hosting_IDesktopWindowXamlSource@UIDesktopWindowXamlSou.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow::SetFocus(
        winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow *this,
        char a2)
{
  __int64 *v4; // rbx
  void (__fastcall ***v5)(_QWORD, __int64 *, __int64 *); // rcx
  _QWORD v6[2]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  unsigned int v8; // [rsp+60h] [rbp+30h] BYREF
  __int64 v9; // [rsp+70h] [rbp+40h] BYREF
  __int64 v10; // [rsp+78h] [rbp+48h] BYREF

  v9 = 0LL;
  v4 = (__int64 *)((char *)this + 32);
  if ( winrt::Windows::Foundation::operator==((void (__fastcall ****)(_QWORD, __int64 *, __int64 *))this + 4, &v9) )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x93,
      (int)"pcshell\\twinui\\xamlexplorerhost\\lib\\XamlExplorerHostChildWindow.cpp",
      (const char *)0x8007139FLL,
      v6[0]);
  if ( !winrt::impl::consume_Windows_UI_Xaml_Hosting_IDesktopWindowXamlSource<winrt::Windows::UI::Xaml::Hosting::IDesktopWindowXamlSource>::HasFocus(v4) )
  {
    SetFocus(*((HWND *)this + 8));
    if ( a2 )
    {
      v8 = 3;
      v6[0] = &v8;
      v6[1] = &qword_180991748;
      _InterlockedIncrement64(&qword_180991748);
      if ( winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Xaml::Hosting::XamlSourceFocusNavigationRequest,winrt::Windows::UI::Xaml::Hosting::IXamlSourceFocusNavigationRequestFactory> )
      {
        winrt::impl::consume_Windows_UI_Xaml_Hosting_IXamlSourceFocusNavigationRequestFactory<winrt::Windows::UI::Xaml::Hosting::IXamlSourceFocusNavigationRequestFactory>::CreateInstance(
          &winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Xaml::Hosting::XamlSourceFocusNavigationRequest,winrt::Windows::UI::Xaml::Hosting::IXamlSourceFocusNavigationRequestFactory>,
          &v9,
          &v8);
        _InterlockedDecrement64(&qword_180991748);
      }
      else
      {
        _InterlockedDecrement64(&qword_180991748);
        winrt::impl::factory_cache_entry<winrt::Windows::UI::Xaml::Hosting::XamlSourceFocusNavigationRequest,winrt::Windows::UI::Xaml::Hosting::IXamlSourceFocusNavigationRequestFactory>::call<_lambda_3207e8c3a392af88c709c9f0a8afe0f7_ &>(
          v5,
          (__int64)&v9,
          v6);
      }
      winrt::impl::consume_Windows_UI_Xaml_Hosting_IDesktopWindowXamlSource<winrt::Windows::UI::Xaml::Hosting::IDesktopWindowXamlSource>::NavigateFocus(
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
