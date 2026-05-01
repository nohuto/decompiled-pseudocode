/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_18733fc815368e543321fefb45e1a450_@@CA@PEAX@Z @ 0x180708830
 * Callers:
 *     <none>
 * Callees:
 *     ?add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ @ 0x180176DC4 (-add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ.c)
 *     ?cancel_asynchronously@?$await_adapter@U?$IAsyncOperationWithProgress@II@Foundation@Windows@winrt@@@impl@winrt@@CA?AUfire_and_forget@3@U?$IAsyncOperationWithProgress@II@Foundation@Windows@3@@Z @ 0x18027A040 (-cancel_asynchronously@-$await_adapter@U-$IAsyncOperationWithProgress@II@Foundation@Windows@winr.c)
 */

char __fastcall _lambda_18733fc815368e543321fefb45e1a450_::_lambda_invoker_cdecl_(_QWORD **a1)
{
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1[1];
  winrt::Windows::Foundation::IUnknown::add_ref((winrt::Windows::Foundation::IUnknown *)&v2);
  return winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperationWithProgress<unsigned int,unsigned int>>::cancel_asynchronously(&v2);
}
