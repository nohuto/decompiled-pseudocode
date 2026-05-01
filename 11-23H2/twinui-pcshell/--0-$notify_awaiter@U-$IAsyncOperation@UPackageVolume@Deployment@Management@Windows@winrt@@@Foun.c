/*
 * XREFs of ??0?$notify_awaiter@U?$IAsyncOperation@UPackageVolume@Deployment@Management@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@QEAA@$$QEAU?$IAsyncOperation@UPackageVolume@Deployment@Management@Windows@winrt@@@Foundation@Windows@2@PEAUcancellable_promise@2@@Z @ 0x1802347B8
 * Callers:
 *     ??$await_transform@U?$IAsyncOperation@UPackageVolume@Deployment@Management@Windows@winrt@@@Foundation@Windows@winrt@@@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@UPackageVolume@Deployment@Management@Windows@winrt@@@Foundation@Windows@winrt@@PEAVLockScreenWidgetPackageHelperBase@@@experimental@std@@U?$IAsyncOperation@UPackageVolume@Deployment@Management@Windows@winrt@@@Foundation@Windows@winrt@@X@impl@winrt@@QEAA?A_P$$QEAU?$IAsyncOperation@UPackageVolume@Deployment@Management@Windows@winrt@@@Foundation@Windows@2@@Z @ 0x18022F96C (--$await_transform@U-$IAsyncOperation@UPackageVolume@Deployment@Management@Windows@winrt@@@Found.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::notify_awaiter<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Management::Deployment::PackageVolume>>::notify_awaiter<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Management::Deployment::PackageVolume>>(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_BYTE *)(a1 + 24) = 1;
  if ( a3 )
  {
    *(_QWORD *)a1 = a3;
    a3[1] = a1;
    *a3 = _lambda_4089c2b9b41646ef709d49c54efaabdd_::_lambda_invoker_cdecl_;
  }
  return a1;
}
