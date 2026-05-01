/*
 * XREFs of _winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Foundation::IInspectable_winrt::Microsoft::UI::Xaml::ResourceManagerRequestedEventArgs___lambda_4c3f00df1550c08ca3a36d5763d73df3___::Invoke_::_1_::catch$0 @ 0x1802C0348
 * Callers:
 *     <none>
 * Callees:
 *     ?to_hresult@winrt@@YA?AUhresult@1@XZ @ 0x180390514 (-to_hresult@winrt@@YA-AUhresult@1@XZ.c)
 */

__int64 __fastcall winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Foundation::IInspectable_winrt::Microsoft::UI::Xaml::ResourceManagerRequestedEventArgs___lambda_4c3f00df1550c08ca3a36d5763d73df3___::Invoke_::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  *(_DWORD *)(a2 + 32) = *(_DWORD *)winrt::to_hresult(a2 + 32);
  return 0LL;
}
