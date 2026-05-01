/*
 * XREFs of _winrt::impl::delegate_winrt::Windows::UI::Xaml::RoutedEventHandler__lambda_8f2745ff2db035f450e66ee91228e43a___::Invoke_::_1_::catch$1 @ 0x1805B974E
 * Callers:
 *     <none>
 * Callees:
 *     ?to_hresult@winrt@@YA?AUhresult@1@XZ @ 0x1802DA298 (-to_hresult@winrt@@YA-AUhresult@1@XZ.c)
 */

__int64 __fastcall winrt::impl::delegate_winrt::Windows::UI::Xaml::RoutedEventHandler__lambda_8f2745ff2db035f450e66ee91228e43a___::Invoke_::_1_::catch_1(
        __int64 a1,
        __int64 a2)
{
  *(_DWORD *)(a2 + 48) = *winrt::to_hresult((_DWORD *)(a2 + 48));
  return 0LL;
}
