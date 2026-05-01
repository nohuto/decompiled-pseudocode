/*
 * XREFs of ?CreateInstance2@?$produce@UXamlExplorerHostWindow@factory_implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostWindowFactory@34567@@impl@winrt@@UEAAHIURect@Foundation@Windows@3@IPEAPEAX@Z @ 0x1804F98E0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??$make@UXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@AEAIAEBURect@Foundation@67@AEAI@winrt@@YA?A_PAEAIAEBURect@Foundation@Windows@0@0@Z @ 0x1804F96A4 (--$make@UXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Wind_ea_1804F96A4.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::XamlExplorerHost::factory_implementation::XamlExplorerHostWindow,winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostWindowFactory>::CreateInstance2(
        __int64 a1,
        int a2,
        const struct winrt::Windows::Foundation::Rect *a3,
        int a4,
        _QWORD *a5)
{
  __int64 result; // rax
  __int64 v6; // [rsp+20h] [rbp-28h] BYREF
  int v7; // [rsp+28h] [rbp-20h] BYREF
  int v8; // [rsp+30h] [rbp-18h] BYREF

  try
  {
    *a5 = 0LL;
    v8 = a4;
    v7 = a2;
    winrt::make<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow,unsigned int &,winrt::Windows::Foundation::Rect const &,unsigned int &>(
      &v6,
      &v7,
      a3,
      &v8);
    *a5 = v6;
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v7);
  }
  return result;
}
