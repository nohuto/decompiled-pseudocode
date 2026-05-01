/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_18e193a120501d561f2c233ed8e0f717_@@CAXPEAX@Z @ 0x180499DD0
 * Callers:
 *     <none>
 * Callees:
 *     ?add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ @ 0x1800F4BD8 (-add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ.c)
 *     ?cancel_asynchronously@?$await_adapter@U?$IAsyncOperation@I@Foundation@Windows@winrt@@@impl@winrt@@CA?AUfire_and_forget@3@U?$IAsyncOperation@I@Foundation@Windows@3@@Z @ 0x1801B420C (-cancel_asynchronously@-$await_adapter@U-$IAsyncOperation@I@Foundation@Windows@winrt@@@impl@winr.c)
 */

void __fastcall _lambda_18e193a120501d561f2c233ed8e0f717_::_lambda_invoker_cdecl_(_QWORD **a1)
{
  __int64 v1; // [rsp+30h] [rbp+8h] BYREF

  v1 = *a1[1];
  winrt::Windows::Foundation::IUnknown::add_ref((winrt::Windows::Foundation::IUnknown *)&v1);
  winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>>::cancel_asynchronously((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)&v1);
}
