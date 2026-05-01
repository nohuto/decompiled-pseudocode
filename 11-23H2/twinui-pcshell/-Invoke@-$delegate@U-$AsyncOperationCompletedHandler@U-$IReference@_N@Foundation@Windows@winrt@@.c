/*
 * XREFs of ?Invoke@?$delegate@U?$AsyncOperationCompletedHandler@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@U?$disconnect_aware_handler@U?$await_adapter@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@@impl@4@@impl@winrt@@UEAAHPEAXH@Z @ 0x1806A2FE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Complete@?$disconnect_aware_handler@U?$await_adapter@U?$IAsyncOperationWithProgress@II@Foundation@Windows@winrt@@@impl@winrt@@@impl@winrt@@AEAAXXZ @ 0x1802383D4 (-Complete@-$disconnect_aware_handler@U-$await_adapter@U-$IAsyncOperationWithProgress@II@Foundati.c)
 */

__int64 __fastcall winrt::impl::delegate<winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::Windows::Foundation::IReference<bool>>,winrt::impl::disconnect_aware_handler<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::IReference<bool>>>>>::Invoke(
        __int64 a1,
        __int64 a2,
        int a3)
{
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 result; // rax
  _DWORD v6[6]; // [rsp+20h] [rbp-18h] BYREF

  v3 = a1 + 8;
  v4 = *(_QWORD *)(v3 + 16);
  *(_DWORD *)(v4 + 16) = a3;
  try
  {
    winrt::impl::disconnect_aware_handler<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperationWithProgress<unsigned int,unsigned int>>>::Complete(v3);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(v6);
  }
  return result;
}
