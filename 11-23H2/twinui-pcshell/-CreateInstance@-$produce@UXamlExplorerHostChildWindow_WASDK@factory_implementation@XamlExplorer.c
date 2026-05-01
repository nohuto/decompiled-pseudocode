/*
 * XREFs of ?CreateInstance@?$produce@UXamlExplorerHostChildWindow_WASDK@factory_implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostChildWindow_WASDKFactory@34567@@impl@winrt@@UEAAH_KPEAXPEAPEAX@Z @ 0x18004A2A0
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateInstance@XamlExplorerHostChildWindow_WASDK@factory_implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA@_KAEBUhstring@7@@Z @ 0x18004A30C (-CreateInstance@XamlExplorerHostChildWindow_WASDK@factory_implementation@XamlExplorerHost@Shell@.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::XamlExplorerHost::factory_implementation::XamlExplorerHostChildWindow_WASDK,winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostChildWindow_WASDKFactory>::CreateInstance(
        winrt::Windows::Internal::Shell::XamlExplorerHost::factory_implementation::XamlExplorerHostChildWindow_WASDK *a1,
        const struct winrt::hstring *a2,
        unsigned __int64 a3,
        _QWORD *a4)
{
  __int64 *Instance; // rax
  __int64 v6; // rcx
  unsigned __int64 v8[2]; // [rsp+20h] [rbp-28h] BYREF

  v8[1] = a3;
  *a4 = 0LL;
  Instance = (__int64 *)winrt::Windows::Internal::Shell::XamlExplorerHost::factory_implementation::XamlExplorerHostChildWindow_WASDK::CreateInstance(
                          a1,
                          (unsigned __int64)v8,
                          a2);
  v6 = *Instance;
  *Instance = 0LL;
  *a4 = v6;
  if ( v8[0] )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)v8);
  return 0LL;
}
