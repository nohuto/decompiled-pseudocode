/*
 * XREFs of _winrt::impl::produce_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_bool__LockScreenWidgetPackageHelperBase___::promise_type_winrt::Windows::Foundation::IAsyncOperation_bool___::put_Completed_::_1_::catch$1 @ 0x18024B13E
 * Callers:
 *     <none>
 * Callees:
 *     ?to_hresult@winrt@@YA?AUhresult@1@XZ @ 0x180390514 (-to_hresult@winrt@@YA-AUhresult@1@XZ.c)
 */

__int64 __fastcall winrt::impl::produce_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_bool__LockScreenWidgetPackageHelperBase___::promise_type_winrt::Windows::Foundation::IAsyncOperation_bool___::put_Completed_::_1_::catch_1(
        __int64 a1,
        __int64 a2)
{
  *(_DWORD *)(a2 + 48) = *(_DWORD *)winrt::to_hresult(a2 + 48);
  return 0LL;
}
