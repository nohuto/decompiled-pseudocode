/*
 * XREFs of ?put_WindowTitle@?$produce@UXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostWindow@34567@@impl@winrt@@UEAAHPEAX@Z @ 0x1800716C0
 * Callers:
 *     <none>
 * Callees:
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x1800B6CE4 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow,winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostWindow>::put_WindowTitle(
        __int64 a1,
        __int64 a2)
{
  const WCHAR *v2; // rax
  __int64 v3; // r8
  __int64 v4; // rcx
  __int64 result; // rax
  __int64 v6; // [rsp+20h] [rbp-18h] BYREF

  v6 = a2;
  v2 = winrt::hstring::c_str((winrt::hstring *)&v6);
  v4 = v3 + 32;
  if ( !v3 )
    v4 = 40LL;
  SetWindowTextW(*(HWND *)v4, v2);
  result = 0LL;
  while ( 2 )
  {
    try
    {
    }
    catch ( ... )
    {
      LODWORD(v6) = *(_DWORD *)winrt::to_hresult(&v6);
      result = (unsigned int)v6;
      continue;
    }
    break;
  }
  return result;
}
