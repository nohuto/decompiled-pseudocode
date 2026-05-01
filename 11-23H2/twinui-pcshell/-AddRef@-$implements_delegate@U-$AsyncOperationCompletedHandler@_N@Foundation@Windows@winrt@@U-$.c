/*
 * XREFs of ?AddRef@?$implements_delegate@U?$AsyncOperationCompletedHandler@_N@Foundation@Windows@winrt@@U?$disconnect_aware_handler@U?$await_adapter@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@@impl@winrt@@@impl@4@@impl@winrt@@UEAAIXZ @ 0x18006DFD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::implements_delegate<winrt::Windows::Foundation::AsyncOperationCompletedHandler<bool>,winrt::impl::disconnect_aware_handler<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<bool>>>>::AddRef(
        __int64 a1)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(a1 + 40));
}
