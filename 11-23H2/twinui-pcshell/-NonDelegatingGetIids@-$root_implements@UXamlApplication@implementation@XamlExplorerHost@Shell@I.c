/*
 * XREFs of ?NonDelegatingGetIids@?$root_implements@UXamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@U134567@UIXamlMetadataProvider@Markup@Xaml@UI@67@Ucomposing@7@UIApplicationOverrides@Xaml@UI@67@UIApplicationOverrides2@Xaml@UI@67@@impl@winrt@@IEAAHPEAIPEAPEAUguid@3@@Z @ 0x1804F5AC4
 * Callers:
 *     ?GetIids@?$produce_base@UXamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIApplicationOverrides2@Xaml@UI@67@X@impl@winrt@@UEAAHPEAIPEAPEAUguid@3@@Z @ 0x1804F5810 (-GetIids@-$produce_base@UXamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@.c)
 *     ?GetIids@?$produce_base@UXamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIApplicationOverrides@Xaml@UI@67@X@impl@winrt@@UEAAHPEAIPEAPEAUguid@3@@Z @ 0x1804F5830 (-GetIids@-$produce_base@UXamlApplication@implementation@XamlExplorerHost@Shell@Inte_ea_1804F5830.c)
 *     ?GetIids@?$produce_base@UXamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlApplication_WASDK@345678@X@impl@winrt@@UEAAHPEAIPEAPEAUguid@3@@Z @ 0x1804F5850 (-GetIids@-$produce_base@UXamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Inter.c)
 *     ?GetIids@?$produce_base@UXamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlMetadataProvider@Markup@Xaml@UI@67@X@impl@winrt@@UEAAHPEAIPEAPEAUguid@3@@Z @ 0x1804F5870 (-GetIids@-$produce_base@UXamlApplication@implementation@XamlExplorerHost@Shell@Inte_ea_1804F5870.c)
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     __Platform_CoTaskMemAlloc @ 0x1801C7A89 (__Platform_CoTaskMemAlloc.c)
 *     memmove_0 @ 0x1801C9357 (memmove_0.c)
 *     ?clear@?$com_array@E@winrt@@QEAAXXZ @ 0x180274E34 (-clear@-$com_array@E@winrt@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?get_interfaces@winrt@@YA?AU?$com_array@Uguid@winrt@@@1@AEBUIInspectable@Foundation@Windows@1@@Z @ 0x1804F6C24 (-get_interfaces@winrt@@YA-AU-$com_array@Uguid@winrt@@@1@AEBUIInspectable@Foundation@Windows@1@@Z.c)
 */

__int64 __fastcall winrt::impl::root_implements<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlApplication,winrt::Windows::Internal::Shell::XamlExplorerHost::XamlApplication,winrt::Windows::UI::Xaml::Markup::IXamlMetadataProvider,winrt::composing,winrt::Windows::UI::Xaml::IApplicationOverrides,winrt::Windows::UI::Xaml::IApplicationOverrides2>::NonDelegatingGetIids(
        _QWORD **a1,
        _DWORD *a2,
        char **a3)
{
  unsigned int v6; // edx
  char *v7; // rax
  char *v8; // rdi
  size_t v10; // rbx
  void *v11; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v12; // [rsp+28h] [rbp-40h]
  unsigned int v13; // [rsp+30h] [rbp-38h] BYREF
  void *Src; // [rsp+38h] [rbp-30h]

  ((void (__fastcall *)(_QWORD **, unsigned int *))(*a1)[4])(a1, &v13);
  if ( !v13 )
    return (*(__int64 (__fastcall **)(_QWORD *, _DWORD *, char **))(*a1[1] + 24LL))(a1[1], a2, a3);
  winrt::get_interfaces(&v11, a1 + 1);
  v6 = v13 + v12;
  *a2 = v13 + v12;
  v7 = (char *)_Platform_CoTaskMemAlloc(16LL * v6);
  v8 = v7;
  *a3 = v7;
  if ( v7 )
  {
    v10 = 16LL * v13;
    memmove_0(v7, Src, v10);
    *a3 = &v8[v10];
    memmove_0(&v8[v10], v11, 16LL * v12);
    winrt::com_array<unsigned char>::clear((__int64)&v11);
    return 0LL;
  }
  else
  {
    winrt::com_array<unsigned char>::clear((__int64)&v11);
    return 2147942414LL;
  }
}
