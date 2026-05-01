/*
 * XREFs of ?Close@XamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAAXXZ @ 0x180421C38
 * Callers:
 *     ?Close@?$produce@UXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIClosable@Foundation@67@@impl@winrt@@UEAAHXZ @ 0x180421BE0 (-Close@-$produce@UXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@.c)
 * Callees:
 *     ?Close@?$consume_Windows_Foundation_IClosable@UDesktopWindowXamlSource@Hosting@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBAXXZ @ 0x180039B9C (-Close@-$consume_Windows_Foundation_IClosable@UDesktopWindowXamlSource@Hosting@Xaml@UI@Windows@w.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x1800F6DA0 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 */

void __fastcall winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow::Close(
        winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow *this)
{
  winrt::Windows::Foundation::IUnknown *v1; // rbx
  MSG Msg; // [rsp+30h] [rbp-38h] BYREF
  __int64 v3; // [rsp+70h] [rbp+8h] BYREF

  v1 = (winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow *)((char *)this + 40);
  if ( *((_QWORD *)this + 5) )
  {
    winrt::impl::consume_Windows_Foundation_IClosable<winrt::Windows::UI::Xaml::Hosting::DesktopWindowXamlSource>::Close((__int64 *)this + 5);
    v3 = 0LL;
    winrt::Windows::Foundation::IUnknown::operator=(v1, (winrt::Windows::Foundation::IUnknown *)&v3);
    if ( v3 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v3);
    memset(&Msg, 0, sizeof(Msg));
    while ( PeekMessageW(&Msg, 0LL, 0, 0, 1u) )
      DispatchMessageW(&Msg);
  }
}
