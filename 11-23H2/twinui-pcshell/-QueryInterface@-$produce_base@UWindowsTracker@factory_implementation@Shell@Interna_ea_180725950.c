/*
 * XREFs of ?QueryInterface@?$produce_base@UWindowsTracker@factory_implementation@Shell@Internal@Windows@winrt@@UIWindowsTrackerStatics@3456@X@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x180725950
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::produce_base<winrt::Windows::Internal::Shell::factory_implementation::WindowsTracker,winrt::Windows::Internal::Shell::IWindowsTrackerStatics,void>::QueryInterface(
        __int64 a1,
        _QWORD *a2,
        __int64 *a3)
{
  return winrt::impl::root_implements<winrt::Windows::Internal::Shell::factory_implementation::WindowsTracker,winrt::Windows::Foundation::IActivationFactory,winrt::Windows::Internal::Shell::IWindowsTrackerStatics,winrt::static_lifetime>::query_interface(
           (volatile signed __int64 *)((a1 - 24) & -(__int64)(a1 != 0)),
           a2,
           a3);
}
