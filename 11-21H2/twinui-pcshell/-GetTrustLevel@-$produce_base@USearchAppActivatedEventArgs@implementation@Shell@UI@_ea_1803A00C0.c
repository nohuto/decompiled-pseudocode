/*
 * XREFs of ?GetTrustLevel@?$produce_base@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@UILaunchActivatedEventArgs2@Activation@ApplicationModel@Windows@6@X@impl@winrt@@UEAAHPEAW4TrustLevel@Foundation@Windows@3@@Z @ 0x1803A00C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::produce_base<winrt::WindowsUdk::UI::Shell::implementation::SearchAppActivatedEventArgs,winrt::Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs2,void>::GetTrustLevel(
        __int64 a1,
        _DWORD *a2)
{
  return winrt::impl::root_implements<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,unsigned short const *,std::chrono::duration<__int64,std::ratio<1,1000>>>::promise_type,winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Foundation::IAsyncInfo>::NonDelegatingGetTrustLevel(
           (a1 - 56) & -(__int64)(a1 != 0),
           a2);
}
