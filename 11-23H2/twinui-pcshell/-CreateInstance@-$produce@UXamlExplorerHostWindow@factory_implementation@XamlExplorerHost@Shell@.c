/*
 * XREFs of ?CreateInstance@?$produce@UXamlExplorerHostWindow@factory_implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostWindowFactory@34567@@impl@winrt@@UEAAHIURect@Foundation@Windows@3@PEAPEAX@Z @ 0x1804F9980
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?CreateInstance@XamlExplorerHostWindow@factory_implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA@IAEBURect@Foundation@67@@Z @ 0x1804F99FC (-CreateInstance@XamlExplorerHostWindow@factory_implementation@XamlExplorerHost@Shell@Internal@Wi.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::XamlExplorerHost::factory_implementation::XamlExplorerHostWindow,winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostWindowFactory>::CreateInstance(
        winrt::Windows::Internal::Shell::XamlExplorerHost::factory_implementation::XamlExplorerHostWindow *a1,
        unsigned int a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 *Instance; // rax
  __int64 v6; // rcx
  __int64 result; // rax
  unsigned int v8[2]; // [rsp+20h] [rbp-18h] BYREF

  *a4 = 0LL;
  try
  {
    Instance = (__int64 *)winrt::Windows::Internal::Shell::XamlExplorerHost::factory_implementation::XamlExplorerHostWindow::CreateInstance(
                            a1,
                            (unsigned int)v8,
                            (const struct winrt::Windows::Foundation::Rect *)a2);
    v6 = *Instance;
    *Instance = 0LL;
    *a4 = v6;
    if ( *(_QWORD *)v8 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)v8);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(v8);
  }
  return result;
}
