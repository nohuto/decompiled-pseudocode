/*
 * XREFs of ?Complete@?$disconnect_aware_handler@U?$await_adapter@U?$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@@impl@winrt@@AEAAXXZ @ 0x1800DB3B0
 * Callers:
 *     ?Invoke@?$delegate@U?$AsyncOperationCompletedHandler@UIRandomAccessStreamWithContentType@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@U?$disconnect_aware_handler@U?$await_adapter@U?$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@@impl@4@@impl@winrt@@UEAAHPEAXH@Z @ 0x180071ED0 (-Invoke@-$delegate@U-$AsyncOperationCompletedHandler@UIRandomAccessStreamWithContentType@Streams.c)
 *     ??1?$disconnect_aware_handler@U?$await_adapter@UIAsyncAction@Foundation@Windows@winrt@@@impl@winrt@@@impl@winrt@@QEAA@XZ @ 0x1800AD990 (--1-$disconnect_aware_handler@U-$await_adapter@UIAsyncAction@Foundation@Windows@winrt@@@impl@win.c)
 *     ??1?$disconnect_aware_handler@U?$await_adapter@U?$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@@impl@winrt@@QEAA@XZ @ 0x1800DB824 (--1-$disconnect_aware_handler@U-$await_adapter@U-$IAsyncOperation@UIRandomAccessStreamReference@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::disconnect_aware_handler<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStreamWithContentType>>>::Complete(
        __int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rdx
  __int64 v3; // r8

  result = *(unsigned __int8 *)(*(_QWORD *)(a1 + 16) + 24LL);
  *(_BYTE *)(*(_QWORD *)(a1 + 16) + 24LL) = 0;
  if ( (_BYTE)result )
  {
    *(_QWORD *)(a1 + 24) = 0LL;
  }
  else
  {
    v2 = *(_QWORD *)(a1 + 24);
    v3 = *(_QWORD *)(a1 + 16) + 20LL;
    *(_QWORD *)(a1 + 24) = 0LL;
    return winrt::impl::resume_apartment(a1, v2, v3);
  }
  return result;
}
