/*
 * XREFs of ?Close@?$produce@UXamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIClosable@Foundation@67@@impl@winrt@@UEAAHXZ @ 0x1804FB2B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Close@?$consume_Windows_Foundation_IClosable@UDesktopWindowXamlSource@Hosting@Xaml@UI@Microsoft@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800818D8 (-Close@-$consume_Windows_Foundation_IClosable@UDesktopWindowXamlSource@Hosting@Xaml@UI@Microsoft.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x180172F30 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow_WASDK,winrt::Windows::Foundation::IClosable>::Close(
        __int64 a1)
{
  __int64 v1; // rbx
  __int64 result; // rax
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = a1 + 32;
  if ( !a1 )
    v1 = 48LL;
  try
  {
    if ( *(_QWORD *)v1 )
    {
      winrt::impl::consume_Windows_Foundation_IClosable<winrt::Microsoft::UI::Xaml::Hosting::DesktopWindowXamlSource>::Close((__int64 *)v1);
      v3 = 0LL;
      winrt::Windows::Foundation::IUnknown::operator=(
        (winrt::Windows::Foundation::IUnknown *)v1,
        (winrt::Windows::Foundation::IUnknown *)&v3);
      if ( v3 )
        winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v3);
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v3);
  }
  return result;
}
