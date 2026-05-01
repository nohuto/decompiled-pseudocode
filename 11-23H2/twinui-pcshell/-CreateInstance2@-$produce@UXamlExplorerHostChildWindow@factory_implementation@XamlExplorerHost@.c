/*
 * XREFs of ?CreateInstance2@?$produce@UXamlExplorerHostChildWindow@factory_implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostChildWindowFactory@34567@@impl@winrt@@UEAAH_K0PEAXPEAPEAX@Z @ 0x1804F75E0
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?CreateInstance2@XamlExplorerHostChildWindow@factory_implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA@_K0AEBUhstring@7@@Z @ 0x1804F7688 (-CreateInstance2@XamlExplorerHostChildWindow@factory_implementation@XamlExplorerHost@Shell@Inter.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::XamlExplorerHost::factory_implementation::XamlExplorerHostChildWindow,winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostChildWindowFactory>::CreateInstance2(
        winrt::Windows::Internal::Shell::XamlExplorerHost::factory_implementation::XamlExplorerHostChildWindow *a1,
        unsigned __int64 a2,
        const struct winrt::hstring *a3,
        __int64 a4,
        _QWORD *a5)
{
  __int64 *Instance2; // rax
  __int64 v6; // rcx
  __int64 result; // rax
  _QWORD v8[2]; // [rsp+30h] [rbp-28h] BYREF

  try
  {
    v8[1] = a4;
    *a5 = 0LL;
    Instance2 = (__int64 *)winrt::Windows::Internal::Shell::XamlExplorerHost::factory_implementation::XamlExplorerHostChildWindow::CreateInstance2(
                             a1,
                             (unsigned __int64)v8,
                             a2,
                             a3);
    v6 = *Instance2;
    *Instance2 = 0LL;
    *a5 = v6;
    if ( v8[0] )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)v8);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(v8);
  }
  return result;
}
