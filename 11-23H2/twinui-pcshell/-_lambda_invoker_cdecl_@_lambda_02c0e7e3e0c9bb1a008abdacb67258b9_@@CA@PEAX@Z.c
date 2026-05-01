/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_02c0e7e3e0c9bb1a008abdacb67258b9_@@CA@PEAX@Z @ 0x1806997C0
 * Callers:
 *     <none>
 * Callees:
 *     ?add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ @ 0x180176DC4 (-add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ.c)
 *     ?cancel_asynchronously@?$await_adapter@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@CA?AUfire_and_forget@3@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@3@@Z @ 0x180253384 (-cancel_asynchronously@-$await_adapter@U-$IAsyncOperation@U-$IReference@_N@Foundation@Windows@wi.c)
 */

char __fastcall _lambda_02c0e7e3e0c9bb1a008abdacb67258b9_::_lambda_invoker_cdecl_(_QWORD **a1)
{
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1[1];
  winrt::Windows::Foundation::IUnknown::add_ref((winrt::Windows::Foundation::IUnknown *)&v2);
  return winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::IReference<bool>>>::cancel_asynchronously(&v2);
}
