/*
 * XREFs of ?Invoke@?$delegate@U?$AsyncOperationCompletedHandler@UIRandomAccessStreamWithContentType@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@U?$disconnect_aware_handler@U?$await_adapter@U?$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@@impl@4@@impl@winrt@@UEAAHPEAXH@Z @ 0x180071ED0
 * Callers:
 *     <none>
 * Callees:
 *     ?Complete@?$disconnect_aware_handler@U?$await_adapter@U?$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@@impl@winrt@@AEAAXXZ @ 0x1800DB3B0 (-Complete@-$disconnect_aware_handler@U-$await_adapter@U-$IAsyncOperation@UIRandomAccessStreamWit.c)
 */

__int64 __fastcall winrt::impl::delegate<winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::Windows::Storage::Streams::IRandomAccessStreamWithContentType>,winrt::impl::disconnect_aware_handler<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStreamWithContentType>>>>::Invoke(
        __int64 a1,
        __int64 a2,
        int a3)
{
  __int64 v3; // rax
  __int64 result; // rax
  int v5; // [rsp+40h] [rbp+18h] BYREF

  v3 = *(_QWORD *)(a1 + 24);
  *(_DWORD *)(v3 + 16) = a3;
  try
  {
    winrt::impl::disconnect_aware_handler<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStreamWithContentType>>>::Complete();
    result = 0LL;
  }
  catch ( ... )
  {
    return *(unsigned int *)winrt::to_hresult(&v5);
  }
  return result;
}
