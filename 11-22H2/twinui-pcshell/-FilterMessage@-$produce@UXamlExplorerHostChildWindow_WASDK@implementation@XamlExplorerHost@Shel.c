/*
 * XREFs of ?FilterMessage@?$produce@UXamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostChildWindow_WASDK@34567@@impl@winrt@@UEAAH_KPEA_N@Z @ 0x1804F8C80
 * Callers:
 *     <none>
 * Callees:
 *     ?FilterMessage@XamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA_N_K@Z @ 0x1804F8CE0 (-FilterMessage@XamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow_WASDK,winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostChildWindow_WASDK>::FilterMessage(
        __int64 a1,
        unsigned __int64 a2,
        _BYTE *a3)
{
  winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow_WASDK *v3; // rcx
  __int64 result; // rax
  int v5; // [rsp+30h] [rbp+8h] BYREF

  v3 = (winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow_WASDK *)((a1 - 16) & -(__int64)(a1 != 0));
  try
  {
    *a3 = winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow_WASDK::FilterMessage(
            v3,
            a2);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v5);
  }
  return result;
}
