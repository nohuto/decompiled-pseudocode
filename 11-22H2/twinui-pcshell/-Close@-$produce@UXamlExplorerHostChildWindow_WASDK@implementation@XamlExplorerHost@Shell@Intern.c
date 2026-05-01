/*
 * XREFs of ?Close@?$produce@UXamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIClosable@Foundation@67@@impl@winrt@@UEAAHXZ @ 0x180081880
 * Callers:
 *     <none>
 * Callees:
 *     ?Close@?$consume_Windows_Foundation_IClosable@UDesktopWindowXamlSource@Hosting@Xaml@UI@Microsoft@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800818D8 (-Close@-$consume_Windows_Foundation_IClosable@UDesktopWindowXamlSource@Hosting@Xaml@UI@Microsoft.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x180172F30 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow_WASDK,winrt::Windows::Foundation::IClosable>::Close(
        __int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = a1 + 8;
  if ( !a1 )
    v1 = 40LL;
  if ( *(_QWORD *)v1 )
  {
    winrt::impl::consume_Windows_Foundation_IClosable<winrt::Microsoft::UI::Xaml::Hosting::DesktopWindowXamlSource>::Close(v1);
    v3 = 0LL;
    winrt::Windows::Foundation::IUnknown::operator=(v1, &v3);
    if ( v3 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v3);
  }
  return 0LL;
}
