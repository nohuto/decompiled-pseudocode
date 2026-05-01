/*
 * XREFs of ?NonDelegatingGetIids@?$root_implements@UActivationChangedEventArgs@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@U134567@@impl@winrt@@IEAAHPEAIPEAPEAUguid@3@@Z @ 0x1801FA0E8
 * Callers:
 *     ?GetIids@?$produce_base@UWASDKInitializationWrapper@@UIInspectable@Foundation@Windows@winrt@@X@impl@winrt@@UEAAHPEAIPEAPEAUguid@3@@Z @ 0x1801F9E50 (-GetIids@-$produce_base@UWASDKInitializationWrapper@@UIInspectable@Foundation@Windows@winrt@@X@i.c)
 *     ?GetIids@?$produce_base@UXamlExplorerHostChildWindow@factory_implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostChildWindowFactory@34567@X@impl@winrt@@UEAAHPEAIPEAPEAUguid@3@@Z @ 0x1801FA640 (-GetIids@-$produce_base@UXamlExplorerHostChildWindow@factory_implementation@XamlExplorerHost@She.c)
 *     ?GetIids@?$produce_base@UXamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIClosable@Foundation@67@X@impl@winrt@@UEAAHPEAIPEAPEAUguid@3@@Z @ 0x1804F8DE0 (-GetIids@-$produce_base@UXamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell.c)
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     __Platform_CoTaskMemAlloc @ 0x1801C7A89 (__Platform_CoTaskMemAlloc.c)
 *     memmove_0 @ 0x1801C9357 (memmove_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall winrt::impl::root_implements<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::ActivationChangedEventArgs,winrt::Windows::Internal::Shell::XamlExplorerHost::ActivationChangedEventArgs>::NonDelegatingGetIids(
        __int64 a1,
        unsigned int *a2,
        _QWORD *a3)
{
  unsigned int v5; // eax
  void *v6; // rax
  unsigned int v8; // [rsp+20h] [rbp-28h] BYREF
  void *Src; // [rsp+28h] [rbp-20h]

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
