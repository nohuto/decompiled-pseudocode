/*
 * XREFs of ??$invoke@U?$TypedEventHandler@UXamlExplorerHostChildWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIInspectable@Foundation@56@@Foundation@Windows@winrt@@UXamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@34@UDesktopWindowXamlSourceTakeFocusRequestedEventArgs@Hosting@Xaml@UI@34@@impl@winrt@@YA_NAEBU?$TypedEventHandler@UXamlExplorerHostChildWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIInspectable@Foundation@56@@Foundation@Windows@1@AEBUXamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@41@AEBUDesktopWindowXamlSourceTakeFocusRequestedEventArgs@Hosting@Xaml@UI@41@@Z @ 0x180422ACC
 * Callers:
 *     ??$?RUXamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UDesktopWindowXamlSourceTakeFocusRequestedEventArgs@Hosting@Xaml@UI@56@@?$event@U?$TypedEventHandler@UXamlExplorerHostChildWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIInspectable@Foundation@56@@Foundation@Windows@winrt@@@winrt@@QEAAXAEBUXamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@1@AEBUDesktopWindowXamlSourceTakeFocusRequestedEventArgs@Hosting@Xaml@UI@71@@Z @ 0x18042252C (--$-RUXamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@.c)
 * Callees:
 *     ??R?$TypedEventHandler@UXamlExplorerHostChildWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIInspectable@Foundation@56@@Foundation@Windows@winrt@@QEBAXAEBUXamlExplorerHostChildWindow@XamlExplorerHost@Shell@Internal@23@AEBUIInspectable@123@@Z @ 0x180422B9C (--R-$TypedEventHandler@UXamlExplorerHostChildWindow@XamlExplorerHost@Shell@Internal@Windows@winr.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall winrt::impl::invoke<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::XamlExplorerHost::XamlExplorerHostChildWindow,winrt::Windows::Foundation::IInspectable>,winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow,winrt::Windows::UI::Xaml::Hosting::DesktopWindowXamlSourceTakeFocusRequestedEventArgs>(
        __int64 a1,
        __int64 a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rcx
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2 + 16;
  try
  {
    winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::XamlExplorerHost::XamlExplorerHostChildWindow,winrt::Windows::Foundation::IInspectable>::operator()();
  }
  catch ( ... )
  {
    v3 = *winrt::to_hresult(&v5);
    ___load_runtime_function_P6AHHHPEAX__EP6AHHH0__E_impl_winrt__YAXPEBDAEAP6AHHHPEAX__EP6AHHH1__E_Z(
      v4,
      &`winrt::impl::invoke<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::XamlExplorerHost::XamlExplorerHostChildWindow,winrt::Windows::Foundation::IInspectable>,winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow,winrt::Windows::UI::Xaml::Hosting::DesktopWindowXamlSourceTakeFocusRequestedEventArgs>'::`4'::handler);
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))`winrt::impl::invoke<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::XamlExplorerHost::XamlExplorerHostChildWindow,winrt::Windows::Foundation::IInspectable>,winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow,winrt::Windows::UI::Xaml::Hosting::DesktopWindowXamlSourceTakeFocusRequestedEventArgs>'::`4'::handler)(
      v3,
      0LL,
      0LL);
    return v3 != -2147417848 && v3 != -2147023174 && v3 != -1996357631;
  }
  return 1;
}
