/*
 * XREFs of ?NonDelegatingGetIids@?$root_implements@UXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@U134567@UIClosable@Foundation@67@UIXamlExplorerHostWindowLocal@@@impl@winrt@@IEAAHPEAIPEAPEAUguid@3@@Z @ 0x1804FA000
 * Callers:
 *     ?GetIids@?$produce_base@UXamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIClosable@Foundation@67@X@impl@winrt@@UEAAHPEAIPEAPEAUguid@3@@Z @ 0x1804F9AE0 (-GetIids@-$produce_base@UXamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Inte.c)
 *     ?GetIids@?$produce_base@UXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostWindow@34567@X@impl@winrt@@UEAAHPEAIPEAPEAUguid@3@@Z @ 0x1804F9B10 (-GetIids@-$produce_base@UXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@W.c)
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     __Platform_CoTaskMemAlloc @ 0x1801C7A89 (__Platform_CoTaskMemAlloc.c)
 *     memmove_0 @ 0x1801C9357 (memmove_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall winrt::impl::root_implements<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow,winrt::Windows::Internal::Shell::XamlExplorerHost::XamlExplorerHostWindow,winrt::Windows::Foundation::IClosable,IXamlExplorerHostWindowLocal>::NonDelegatingGetIids(
        __int64 a1,
        unsigned int *a2,
        _QWORD *a3)
{
  unsigned int v5; // eax
  void *v6; // rax
  unsigned int v8; // [rsp+20h] [rbp-28h] BYREF
  void *Src; // [rsp+28h] [rbp-20h]

  if ( !a1 )
    a1 = 24LL;
  (*(void (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)a1 + 32LL))(a1, &v8);
  v5 = v8;
  if ( v8 )
  {
    *a2 = v8;
    v6 = _Platform_CoTaskMemAlloc(16LL * v5);
    *a3 = v6;
    if ( !v6 )
      return 2147942414LL;
    memmove_0(v6, Src, 16LL * v8);
  }
  else
  {
    *a2 = 0;
    *a3 = 0LL;
  }
  return 0LL;
}
