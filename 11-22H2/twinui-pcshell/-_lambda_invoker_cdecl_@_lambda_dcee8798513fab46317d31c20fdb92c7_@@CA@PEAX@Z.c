/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_dcee8798513fab46317d31c20fdb92c7_@@CA@PEAX@Z @ 0x1806936B0
 * Callers:
 *     <none>
 * Callees:
 *     ?add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ @ 0x180176DC4 (-add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ.c)
 *     ?cancel_asynchronously@?$await_adapter@UIAsyncAction@Foundation@Windows@winrt@@@impl@winrt@@CA?AUfire_and_forget@3@UIAsyncAction@Foundation@Windows@3@@Z @ 0x1802495D0 (-cancel_asynchronously@-$await_adapter@UIAsyncAction@Foundation@Windows@winrt@@@impl@winrt@@CA-A.c)
 */

char __fastcall _lambda_dcee8798513fab46317d31c20fdb92c7_::_lambda_invoker_cdecl_(_QWORD **a1)
{
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1[1];
  winrt::Windows::Foundation::IUnknown::add_ref((winrt::Windows::Foundation::IUnknown *)&v2);
  return winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncAction>::cancel_asynchronously((winrt::Windows::Foundation::IUnknown *)&v2);
}
