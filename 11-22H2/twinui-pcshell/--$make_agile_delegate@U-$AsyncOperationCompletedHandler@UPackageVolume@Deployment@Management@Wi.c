/*
 * XREFs of ??$make_agile_delegate@U?$AsyncOperationCompletedHandler@UPackageVolume@Deployment@Management@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@YA?AU?$AsyncOperationCompletedHandler@UPackageVolume@Deployment@Management@Windows@winrt@@@Foundation@Windows@1@AEBU2341@@Z @ 0x180230968
 * Callers:
 *     ?Completed@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@UPackageVolume@Deployment@Management@Windows@winrt@@@Foundation@Windows@winrt@@PEAVLockScreenWidgetPackageHelperBase@@@experimental@std@@U?$IAsyncOperation@UPackageVolume@Deployment@Management@Windows@winrt@@@Foundation@Windows@winrt@@X@impl@winrt@@QEAAXAEBU?$AsyncOperationCompletedHandler@UPackageVolume@Deployment@Management@Windows@winrt@@@Foundation@Windows@3@@Z @ 0x180238490 (-Completed@-$promise_base@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@UPackageVolume@Dep.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800B1FC4 (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     ?add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ @ 0x180176DC4 (-add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ.c)
 *     ??$?0V_lambda_cf08e7fff4dde67b8d19a7111b5062ba_@@@?$AsyncOperationCompletedHandler@UPackageVolume@Deployment@Management@Windows@winrt@@@Foundation@Windows@winrt@@QEAA@V_lambda_cf08e7fff4dde67b8d19a7111b5062ba_@@@Z @ 0x18022EBC0 (--$-0V_lambda_cf08e7fff4dde67b8d19a7111b5062ba_@@@-$AsyncOperationCompletedHandler@UPackageVolum.c)
 *     ??$try_as@UIAgileObject@impl@winrt@@@IUnknown@Foundation@Windows@winrt@@QEBA?A_PXZ @ 0x1802CECBA (--$try_as@UIAgileObject@impl@winrt@@@IUnknown@Foundation@Windows@winrt@@QEBA-A_PXZ.c)
 *     ?get_agile_reference@impl@winrt@@YA?AUhresult@2@AEBUguid@2@PEAXPEAPEAX@Z @ 0x180412B0C (-get_agile_reference@impl@winrt@@YA-AUhresult@2@AEBUguid@2@PEAXPEAPEAX@Z.c)
 */

winrt::Windows::Foundation::IUnknown *__fastcall winrt::impl::make_agile_delegate<winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::Windows::Management::Deployment::PackageVolume>>(
        winrt::Windows::Foundation::IUnknown *this,
        __int64 *a2)
{
  __int64 v4; // rsi
  __int64 v5; // r8
  __int64 v6; // rax
  __int64 v8; // [rsp+50h] [rbp+30h] BYREF
  __int64 v9; // [rsp+58h] [rbp+38h] BYREF

  v4 = *(_QWORD *)winrt::Windows::Foundation::IUnknown::try_as<winrt::impl::IAgileObject>(a2, &v8);
  if ( v8 )
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(&v8);
  v5 = *a2;
  if ( v4 )
  {
    *(_QWORD *)this = v5;
    winrt::Windows::Foundation::IUnknown::add_ref(this);
  }
  else
  {
    v9 = 0LL;
    winrt::impl::get_agile_reference(
      &v8,
      &winrt::impl::guid_v<winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::Windows::Management::Deployment::PackageVolume>>,
      v5,
      &v9);
    v6 = v9;
    if ( v9 )
    {
      v9 = 0LL;
      v8 = v6;
      winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::Windows::Management::Deployment::PackageVolume>::AsyncOperationCompletedHandler<winrt::Windows::Management::Deployment::PackageVolume>(
        this,
        &v8);
    }
    else
    {
      *(_QWORD *)this = *a2;
      winrt::Windows::Foundation::IUnknown::add_ref(this);
    }
    if ( v9 )
      winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(&v9);
  }
  return this;
}
