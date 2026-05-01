/*
 * XREFs of ?GetAppIdForWindow@?$produce@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@UIWindowTabExtension@3UI@456@@impl@winrt@@UEAAH_KPEAPEAX@Z @ 0x18006C0D0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetAppIdForWindow@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAA?AUhstring@6@_K@Z @ 0x18006C120 (-GetAppIdForWindow@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAA-AUhstring@6@_.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::implementation::WindowTabHost,winrt::Windows::Internal::UI::Shell::IWindowTabExtension>::GetAppIdForWindow(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 *AppIdForWindow; // rax
  __int64 v5; // rcx
  __int64 result; // rax
  char v7; // [rsp+30h] [rbp+8h] BYREF

  *a3 = 0LL;
  try
  {
    AppIdForWindow = (__int64 *)winrt::Windows::Internal::Shell::implementation::WindowTabHost::GetAppIdForWindow();
    v5 = *AppIdForWindow;
    *AppIdForWindow = 0LL;
    *a3 = v5;
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v7);
    result = 0LL;
  }
  catch ( ... )
  {
    return *(unsigned int *)winrt::to_hresult(&v7);
  }
  return result;
}
