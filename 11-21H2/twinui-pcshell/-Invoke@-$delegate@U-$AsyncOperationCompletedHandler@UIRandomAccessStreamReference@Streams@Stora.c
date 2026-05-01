/*
 * XREFs of ?Invoke@?$delegate@U?$AsyncOperationCompletedHandler@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@V_lambda_5631fd495d09b515f200478214f04faf_@@@impl@winrt@@UEAAHPEAXH@Z @ 0x180029670
 * Callers:
 *     <none>
 * Callees:
 *     ?resume_apartment@impl@winrt@@YAXAEBUresume_apartment_context@12@U?$coroutine_handle@X@experimental@std@@@Z @ 0x1800296A4 (-resume_apartment@impl@winrt@@YAXAEBUresume_apartment_context@12@U-$coroutine_handle@X@experimen.c)
 */

__int64 __fastcall winrt::impl::delegate<winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::Windows::Storage::Streams::IRandomAccessStreamReference>,_lambda_5631fd495d09b515f200478214f04faf_>::Invoke(
        __int64 a1,
        __int64 a2,
        int a3)
{
  __int64 v3; // rax
  __int64 result; // rax
  int v5; // [rsp+40h] [rbp+18h] BYREF

  v3 = *(_QWORD *)(a1 + 8);
  *(_DWORD *)(v3 + 16) = a3;
  *(_QWORD *)(a1 + 32) = 0LL;
  try
  {
    winrt::impl::resume_apartment();
    result = 0LL;
  }
  catch ( ... )
  {
    return *(unsigned int *)winrt::to_hresult(&v5);
  }
  return result;
}
