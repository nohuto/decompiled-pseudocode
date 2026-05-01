/*
 * XREFs of ?AddRef@?$produce_base@USearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@UISearchAppHost3@3456@X@impl@winrt@@UEAAIXZ @ 0x18019E5F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::produce_base<winrt::WindowsUdk::UI::Shell::implementation::SearchAppHost,winrt::WindowsUdk::UI::Shell::ISearchAppHost3,void>::AddRef(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  return winrt::impl::root_implements<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,FallbackFlyoutView *,winrt::Windows::Foundation::Rect const &,enum winrt::WindowsUdk::UI::Shell::TaskbarLocation const &,__int64,CorrelationVector const &>::promise_type,winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Foundation::IAsyncInfo>::AddRef(
           (a1 - 32) & -(__int64)(a1 != 0),
           a2,
           a3,
           a4);
}
