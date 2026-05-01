/*
 * XREFs of ?AddRef@?$produce_base@UProcessTracker@factory_implementation@Shell@Internal@Windows@winrt@@UIProcessTrackerStatics@3456@X@impl@winrt@@UEAAIXZ @ 0x1801FA620
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::produce_base<winrt::Windows::Internal::Shell::factory_implementation::ProcessTracker,winrt::Windows::Internal::Shell::IProcessTrackerStatics,void>::AddRef(
        __int64 a1)
{
  return winrt::impl::root_implements<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Internal::Shell::implementation::DashboardManager *>::promise_type,winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Foundation::IAsyncInfo>::AddRef((a1 - 24) & -(__int64)(a1 != 0));
}
