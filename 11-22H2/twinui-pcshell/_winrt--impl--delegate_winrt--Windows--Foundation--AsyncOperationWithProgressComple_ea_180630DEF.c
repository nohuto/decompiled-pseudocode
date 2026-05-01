/*
 * XREFs of _winrt::impl::delegate_winrt::Windows::Foundation::AsyncOperationWithProgressCompletedHandler_winrt::Windows::Storage::Streams::IBuffer_unsigned_int___winrt::impl::wait_for_completed_winrt::Windows::Foundation::IAsyncOperationWithProgress_winrt::Windows::Storage::Streams::IBuffer_unsigned_int____::_2_::shared_type_::Invoke_::_1_::catch$0 @ 0x180630DEF
 * Callers:
 *     <none>
 * Callees:
 *     ?to_hresult@winrt@@YA?AUhresult@1@XZ @ 0x180390514 (-to_hresult@winrt@@YA-AUhresult@1@XZ.c)
 */

__int64 __fastcall winrt::impl::delegate_winrt::Windows::Foundation::AsyncOperationWithProgressCompletedHandler_winrt::Windows::Storage::Streams::IBuffer_unsigned_int___winrt::impl::wait_for_completed_winrt::Windows::Foundation::IAsyncOperationWithProgress_winrt::Windows::Storage::Streams::IBuffer_unsigned_int____::_2_::shared_type_::Invoke_::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  *(_DWORD *)(a2 + 64) = *winrt::to_hresult((_DWORD *)(a2 + 64));
  return 0LL;
}
