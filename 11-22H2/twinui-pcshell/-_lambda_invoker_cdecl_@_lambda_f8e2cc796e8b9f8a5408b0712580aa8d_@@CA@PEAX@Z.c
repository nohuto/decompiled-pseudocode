/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_f8e2cc796e8b9f8a5408b0712580aa8d_@@CA@PEAX@Z @ 0x1804137D0
 * Callers:
 *     <none>
 * Callees:
 *     ?add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ @ 0x180176DC4 (-add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ.c)
 *     ?cancel_asynchronously@?$await_adapter@U?$IAsyncOperation@I@Foundation@Windows@winrt@@@impl@winrt@@CA?AUfire_and_forget@3@U?$IAsyncOperation@I@Foundation@Windows@3@@Z @ 0x1801DD3F0 (-cancel_asynchronously@-$await_adapter@U-$IAsyncOperation@I@Foundation@Windows@winrt@@@impl@winr.c)
 */

char __fastcall _lambda_f8e2cc796e8b9f8a5408b0712580aa8d_::_lambda_invoker_cdecl_(_QWORD **a1)
{
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1[1];
  winrt::Windows::Foundation::IUnknown::add_ref((winrt::Windows::Foundation::IUnknown *)&v2);
  return winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>>::cancel_asynchronously((winrt::Windows::Foundation::IUnknown *)&v2);
}
