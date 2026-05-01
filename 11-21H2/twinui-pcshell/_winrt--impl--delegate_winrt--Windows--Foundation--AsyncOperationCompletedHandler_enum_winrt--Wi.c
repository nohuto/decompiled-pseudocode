/*
 * XREFs of _winrt::impl::delegate_winrt::Windows::Foundation::AsyncOperationCompletedHandler_enum_winrt::Windows::Web::Http::HttpStatusCode___lambda_23bc9049807001c581f3d238f4c7b21c___::Invoke_::_1_::catch$0 @ 0x18049A89C
 * Callers:
 *     <none>
 * Callees:
 *     ?to_hresult@winrt@@YA?AUhresult@1@XZ @ 0x1802DA298 (-to_hresult@winrt@@YA-AUhresult@1@XZ.c)
 */

__int64 __fastcall winrt::impl::delegate_winrt::Windows::Foundation::AsyncOperationCompletedHandler_enum_winrt::Windows::Web::Http::HttpStatusCode___lambda_23bc9049807001c581f3d238f4c7b21c___::Invoke_::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  *(_DWORD *)(a2 + 64) = *winrt::to_hresult((_DWORD *)(a2 + 64));
  return 0LL;
}
