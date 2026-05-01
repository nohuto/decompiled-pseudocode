/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_4089c2b9b41646ef709d49c54efaabdd_@@CA@PEAX@Z @ 0x18022E460
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$AsyncOperationCompletedHandler@URect@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@QEAA@AEBU0123@@Z @ 0x180190BA0 (--0-$AsyncOperationCompletedHandler@URect@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@Q.c)
 *     ?cancel_asynchronously@?$await_adapter@U?$IAsyncOperation@UPackageVolume@Deployment@Management@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@CA?AUfire_and_forget@3@U?$IAsyncOperation@UPackageVolume@Deployment@Management@Windows@winrt@@@Foundation@Windows@3@@Z @ 0x180249500 (-cancel_asynchronously@-$await_adapter@U-$IAsyncOperation@UPackageVolume@Deployment@Management@W.c)
 */

__int64 __fastcall _lambda_4089c2b9b41646ef709d49c54efaabdd_::_lambda_invoker_cdecl_(_QWORD **a1)
{
  char v2; // [rsp+30h] [rbp+8h] BYREF

  winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::Windows::Foundation::Rect>::AsyncOperationCompletedHandler<winrt::Windows::Foundation::Rect>(
    (winrt::Windows::Foundation::IUnknown *)&v2,
    a1[1]);
  return winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Management::Deployment::PackageVolume>>::cancel_asynchronously(&v2);
}
