/*
 * XREFs of _winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::ApplicationModel::PackageCatalog_winrt::Windows::ApplicationModel::PackageUninstallingEventArgs___lambda_b77cff33db7c166167279fbdb5843ce7___::Invoke_::_1_::catch$8 @ 0x1802C62B1
 * Callers:
 *     <none>
 * Callees:
 *     ?to_hresult@winrt@@YA?AUhresult@1@XZ @ 0x180390514 (-to_hresult@winrt@@YA-AUhresult@1@XZ.c)
 */

__int64 __fastcall winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::ApplicationModel::PackageCatalog_winrt::Windows::ApplicationModel::PackageUninstallingEventArgs___lambda_b77cff33db7c166167279fbdb5843ce7___::Invoke_::_1_::catch_8(
        __int64 a1,
        __int64 a2)
{
  *(_DWORD *)(a2 + 48) = *(_DWORD *)winrt::to_hresult(a2 + 48);
  return 0LL;
}
