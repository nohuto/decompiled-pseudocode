/*
 * XREFs of _winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Foundation::IInspectable_winrt::Windows::Foundation::Point___lambda_305eb55dd6b2946437d4ab607f1cb0bd___::Invoke_::_1_::catch$3 @ 0x18068B3FB
 * Callers:
 *     <none>
 * Callees:
 *     ?to_hresult@winrt@@YA?AUhresult@1@XZ @ 0x180390514 (-to_hresult@winrt@@YA-AUhresult@1@XZ.c)
 */

__int64 __fastcall winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Foundation::IInspectable_winrt::Windows::Foundation::Point___lambda_305eb55dd6b2946437d4ab607f1cb0bd___::Invoke_::_1_::catch_3(
        __int64 a1,
        __int64 a2)
{
  *(_DWORD *)(a2 + 64) = *winrt::to_hresult((_DWORD *)(a2 + 64));
  return 0LL;
}
