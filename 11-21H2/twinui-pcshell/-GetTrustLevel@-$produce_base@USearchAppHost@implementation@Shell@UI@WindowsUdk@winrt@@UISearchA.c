/*
 * XREFs of ?GetTrustLevel@?$produce_base@USearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@UISearchAppHost3@3456@X@impl@winrt@@UEAAHPEAW4TrustLevel@Foundation@Windows@3@@Z @ 0x18019EF20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::produce_base<winrt::WindowsUdk::UI::Shell::implementation::SearchAppHost,winrt::WindowsUdk::UI::Shell::ISearchAppHost3,void>::GetTrustLevel(
        __int64 a1)
{
  return winrt::impl::root_implements<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,unsigned short const *,std::chrono::duration<__int64,std::ratio<1,1000>>>::promise_type,winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Foundation::IAsyncInfo>::NonDelegatingGetTrustLevel((a1 - 32) & -(__int64)(a1 != 0));
}
