/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_dcee8798513fab46317d31c20fdb92c7_@@CAXPEAX@Z @ 0x1805BBB40
 * Callers:
 *     <none>
 * Callees:
 *     ?add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ @ 0x1800F4BD8 (-add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ.c)
 *     ?cancel_asynchronously@?$await_adapter@UIAsyncAction@Foundation@Windows@winrt@@@impl@winrt@@CA?AUfire_and_forget@3@UIAsyncAction@Foundation@Windows@3@@Z @ 0x1801CF0E4 (-cancel_asynchronously@-$await_adapter@UIAsyncAction@Foundation@Windows@winrt@@@impl@winrt@@CA-A.c)
 */

void __fastcall _lambda_dcee8798513fab46317d31c20fdb92c7_::_lambda_invoker_cdecl_(_QWORD **a1)
{
  __int64 v1; // [rsp+30h] [rbp+8h] BYREF

  v1 = *a1[1];
  winrt::Windows::Foundation::IUnknown::add_ref((winrt::Windows::Foundation::IUnknown *)&v1);
  winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncAction>::cancel_asynchronously((winrt::Windows::ApplicationModel::Activation::IPrelaunchActivatedEventArgs *)&v1);
}
