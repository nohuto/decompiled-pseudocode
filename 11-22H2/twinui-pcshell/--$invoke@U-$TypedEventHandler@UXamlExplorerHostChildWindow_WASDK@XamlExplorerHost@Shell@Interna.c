/*
 * XREFs of ??$invoke@U?$TypedEventHandler@UXamlExplorerHostChildWindow_WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIInspectable@Foundation@56@@Foundation@Windows@winrt@@UXamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@34@UDesktopWindowXamlSourceTakeFocusRequestedEventArgs@Hosting@Xaml@UI@Microsoft@4@@impl@winrt@@YA_NAEBU?$TypedEventHandler@UXamlExplorerHostChildWindow_WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIInspectable@Foundation@56@@Foundation@Windows@1@AEBUXamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@41@AEBUDesktopWindowXamlSourceTakeFocusRequestedEventArgs@Hosting@Xaml@UI@Microsoft@1@@Z @ 0x1804F86FC
 * Callers:
 *     ??$?RUXamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UDesktopWindowXamlSourceTakeFocusRequestedEventArgs@Hosting@Xaml@UI@Microsoft@6@@?$event@U?$TypedEventHandler@UXamlExplorerHostChildWindow_WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIInspectable@Foundation@56@@Foundation@Windows@winrt@@@winrt@@QEAAXAEBUXamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@1@AEBUDesktopWindowXamlSourceTakeFocusRequestedEventArgs@Hosting@Xaml@UI@Microsoft@1@@Z @ 0x1804F860C (--$-RUXamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@w.c)
 * Callees:
 *     ??R?$TypedEventHandler@UXamlExplorerHostChildWindow_WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIInspectable@Foundation@56@@Foundation@Windows@winrt@@QEBA@AEBUXamlExplorerHostChildWindow_WASDK@XamlExplorerHost@Shell@Internal@23@AEBUIInspectable@123@@Z @ 0x1804F8918 (--R-$TypedEventHandler@UXamlExplorerHostChildWindow_WASDK@XamlExplorerHost@Shell@Internal@Window.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall winrt::impl::invoke<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::XamlExplorerHost::XamlExplorerHostChildWindow_WASDK,winrt::Windows::Foundation::IInspectable>,winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow_WASDK,winrt::Microsoft::UI::Xaml::Hosting::DesktopWindowXamlSourceTakeFocusRequestedEventArgs>(
        __int64 a1,
        __int64 a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = a2 + 16;
  try
  {
    winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::XamlExplorerHost::XamlExplorerHostChildWindow_WASDK,winrt::Windows::Foundation::IInspectable>::operator()();
  }
  catch ( ... )
  {
    v3 = *winrt::to_hresult(&v6);
    ___load_runtime_function_P6AHHHPEAX__EP6AHHH0__E_impl_winrt__YAXPEBGPEBDAEAP6AHHHPEAX__EP6AHHH2__E_Z(
      v5,
      v4,
      &`winrt::impl::invoke<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::XamlExplorerHost::XamlExplorerHostChildWindow_WASDK,winrt::Windows::Foundation::IInspectable>,winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow_WASDK,winrt::Microsoft::UI::Xaml::Hosting::DesktopWindowXamlSourceTakeFocusRequestedEventArgs>'::`4'::handler);
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))`winrt::impl::invoke<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::XamlExplorerHost::XamlExplorerHostChildWindow_WASDK,winrt::Windows::Foundation::IInspectable>,winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow_WASDK,winrt::Microsoft::UI::Xaml::Hosting::DesktopWindowXamlSourceTakeFocusRequestedEventArgs>'::`4'::handler)(
      v3,
      0LL,
      0LL);
    return v3 != -2147417848 && v3 != -2147023174 && v3 != -1996357631;
  }
  return 1;
}
