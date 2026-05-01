/*
 * XREFs of ?AddRef@?$implements_delegate@U?$AsyncOperationCompletedHandler@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@V_lambda_486da2381732f2ee2a115803ccb9f2a5_@@@impl@winrt@@UEAAIXZ @ 0x18003F780
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::implements_delegate<winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::Windows::Storage::Streams::IRandomAccessStreamReference>,_lambda_486da2381732f2ee2a115803ccb9f2a5_>::AddRef(
        __int64 a1)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(a1 + 16));
}
