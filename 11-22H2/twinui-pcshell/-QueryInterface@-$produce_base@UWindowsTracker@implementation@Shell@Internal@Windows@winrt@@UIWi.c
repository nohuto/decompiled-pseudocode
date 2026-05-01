/*
 * XREFs of ?QueryInterface@?$produce_base@UWindowsTracker@implementation@Shell@Internal@Windows@winrt@@UIWindowsTracker@3456@X@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x180197540
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::produce_base<winrt::Windows::Internal::Shell::implementation::WindowsTracker,winrt::Windows::Internal::Shell::IWindowsTracker,void>::QueryInterface(
        __int64 a1)
{
  return winrt::impl::root_implements<winrt::Windows::Internal::Shell::implementation::WindowsTracker,winrt::Windows::Internal::Shell::WindowsTracker>::query_interface((a1 - 16) & -(__int64)(a1 != 0));
}
