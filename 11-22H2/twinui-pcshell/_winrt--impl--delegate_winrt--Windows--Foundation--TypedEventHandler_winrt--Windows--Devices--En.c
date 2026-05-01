/*
 * XREFs of _winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Devices::Enumeration::DeviceWatcher_winrt::Windows::Devices::Enumeration::DeviceInformation___lambda_dc5048959359983df9126a38f40f75fb___::Invoke_::_1_::catch$0 @ 0x1806FB244
 * Callers:
 *     <none>
 * Callees:
 *     ?to_hresult@winrt@@YA?AUhresult@1@XZ @ 0x180390514 (-to_hresult@winrt@@YA-AUhresult@1@XZ.c)
 */

__int64 __fastcall winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Devices::Enumeration::DeviceWatcher_winrt::Windows::Devices::Enumeration::DeviceInformation___lambda_dc5048959359983df9126a38f40f75fb___::Invoke_::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  *(_DWORD *)(a2 + 48) = *winrt::to_hresult((_DWORD *)(a2 + 48));
  return 0LL;
}
