/*
 * XREFs of ?Close@?$consume_Windows_Foundation_IClosable@UDesktopWindowXamlSource@Hosting@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1804F741C
 * Callers:
 *     ?Close@XamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAAXXZ @ 0x1804F7528 (-Close@XamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@.c)
 *     ?Close@XamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAAXXZ @ 0x1804F9828 (-Close@XamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::impl::consume_Windows_Foundation_IClosable<winrt::Windows::UI::Xaml::Hosting::DesktopWindowXamlSource>::Close(
        __int64 *a1)
{
  __int64 v1; // rcx
  __int64 v2; // rbx
  signed int v3; // eax
  __int64 v4; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+28h] [rbp-20h] BYREF

  v1 = *a1;
  if ( v1 )
  {
    v5 = 0LL;
    (**(void (__fastcall ***)(__int64, _QWORD *, __int64 *))v1)(
      v1,
      winrt::impl::guid_v<winrt::Windows::Foundation::IClosable>,
      &v5);
    v1 = v5;
    v2 = v5;
  }
  else
  {
    v2 = 0LL;
  }
  v4 = v1;
  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 48LL))(v1);
  if ( v3 < 0 )
    winrt::throw_hresult(v3);
  if ( v2 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v4);
}
