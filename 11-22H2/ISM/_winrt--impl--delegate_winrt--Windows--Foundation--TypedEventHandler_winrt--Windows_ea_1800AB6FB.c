/*
 * XREFs of _winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowWatcher_winrt::Windows::Foundation::IInspectable___lambda_1fc43c971fd1247187255afbf1b5936c___::Invoke_::_1_::catch$6 @ 0x1800AB6FB
 * Callers:
 *     <none>
 * Callees:
 *     ?to_hresult@winrt@@YA?AUhresult@1@XZ @ 0x1800AD058 (-to_hresult@winrt@@YA-AUhresult@1@XZ.c)
 */

__int64 __fastcall winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowWatcher_winrt::Windows::Foundation::IInspectable___lambda_1fc43c971fd1247187255afbf1b5936c___::Invoke_::_1_::catch_6(
        __int64 a1,
        __int64 a2)
{
  *(_DWORD *)(a2 + 48) = *(_DWORD *)winrt::to_hresult(a2 + 48);
  return 0LL;
}
