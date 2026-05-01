/*
 * XREFs of _winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::MenuItem_winrt::WindowsUdk::UI::MenuItemInvokedArgs___lambda_ead74eb18ddaf5d60afd1f95853bb976___::Invoke_::_1_::catch$0 @ 0x1801D9E02
 * Callers:
 *     <none>
 * Callees:
 *     ?to_hresult@winrt@@YA?AUhresult@1@XZ @ 0x1802DA298 (-to_hresult@winrt@@YA-AUhresult@1@XZ.c)
 */

__int64 __fastcall winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::MenuItem_winrt::WindowsUdk::UI::MenuItemInvokedArgs___lambda_ead74eb18ddaf5d60afd1f95853bb976___::Invoke_::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  *(_DWORD *)(a2 + 48) = *(_DWORD *)winrt::to_hresult(a2 + 48);
  return 0LL;
}
