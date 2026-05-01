/*
 * XREFs of LockScreenWidgetPackageHelperBase::TryInstallStoreApplicationAsync$_InitCoro$2 @ 0x180244FE4
 * Callers:
 *     ?TryInstallStoreApplicationAsync@LockScreenWidgetPackageHelperBase@@IEAA?AUIAsyncAction@Foundation@Windows@winrt@@Uhstring@5@0UPackageVersion@ApplicationModel@45@V?$function@$$A6AXAEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@Z@std@@2@Z @ 0x180245AD0 (-TryInstallStoreApplicationAsync@LockScreenWidgetPackageHelperBase@@IEAA-AUIAsyncAction@Foundati.c)
 * Callees:
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     ?get_return_object@?$promise_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAVLockScreenWidgetPackageHelperBase@@Uhstring@4@U64@UPackageVersion@ApplicationModel@34@V?$function@$$A6AXAEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@Z@std@@V9std@@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@X@impl@winrt@@QEBA?AUIAsyncAction@Foundation@Windows@3@XZ @ 0x18022902C (-get_return_object@-$promise_base@Upromise_type@-$coroutine_traits@UIAsyncAction@Fo_ea_18022902C.c)
 *     ??0_parameters_@?P@??TryInstallStoreApplicationAsync@LockScreenWidgetPackageHelperBase@@IEAA?AUIAsyncAction@Foundation@Windows@winrt@@Uhstring@6@0UPackageVersion@ApplicationModel@56@V?$function@$$A6AXAEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@Z@std@@2@Z@QEAA@PEAV2@$$QEAU76@4$$QEAU8956@$$QEAV?$function@$$A6AXAEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@Z@std@@6@Z @ 0x180233938 (--0_parameters_@-P@--TryInstallStoreApplicationAsync@LockScreenWidgetPackageHelperBase@@IEAA-AUI.c)
 *     ??0?$promise_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAVLockScreenWidgetPackageHelperBase@@Uhstring@4@U64@UPackageVersion@ApplicationModel@34@V?$function@$$A6AXAEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@Z@std@@V9std@@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@X@impl@winrt@@QEAA@XZ @ 0x18023489C (--0-$promise_base@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAVL.c)
 *     LockScreenWidgetPackageHelperBase::TryInstallStoreApplicationAsync$_ResumeCoro$1 @ 0x180245160 (LockScreenWidgetPackageHelperBase--TryInstallStoreApplicationAsync$_ResumeCoro$1.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall LockScreenWidgetPackageHelperBase::TryInstallStoreApplicationAsync__InitCoro_2(
        _DWORD *a1,
        __int64 a2,
        winrt::Windows::Foundation::IUnknown *a3,
        __int64 *a4,
        __int64 *a5,
        _QWORD *a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  `LockScreenWidgetPackageHelperBase::TryInstallStoreApplicationAsync'::`15'::_parameters_::_parameters_(
    (_QWORD *)(a2 + 641),
    a9,
    a4,
    a5,
    a6,
    a7,
    a8);
  *(_QWORD *)a2 = LockScreenWidgetPackageHelperBase::TryInstallStoreApplicationAsync__ResumeCoro_1;
  *(_DWORD *)(a2 + 8) = *a1 != 0 ? 2 : 65538;
  memset_0((void *)(a2 - 96), 0, 0x60uLL);
  winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,LockScreenWidgetPackageHelperBase *,winrt::hstring,winrt::hstring,winrt::Windows::ApplicationModel::PackageVersion,std::function<void (winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &)>,std::function<void (winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &)>>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,LockScreenWidgetPackageHelperBase *,winrt::hstring,winrt::hstring,winrt::Windows::ApplicationModel::PackageVersion,std::function<void (winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &)>,std::function<void (winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &)>>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>(a2 - 96);
  *(_QWORD *)(a2 - 96) = &winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,LockScreenWidgetPackageHelperBase *,winrt::hstring,winrt::hstring,winrt::Windows::ApplicationModel::PackageVersion,std::function<void (winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &)>,std::function<void (winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &)>>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>::`vftable';
  winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,LockScreenWidgetPackageHelperBase *,winrt::hstring,winrt::hstring,winrt::Windows::ApplicationModel::PackageVersion,std::function<void (winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &)>,std::function<void (winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &)>>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>::get_return_object(
    a2 - 96,
    a3);
  *(_BYTE *)(a2 + 640) = 0;
  return LockScreenWidgetPackageHelperBase::TryInstallStoreApplicationAsync__ResumeCoro_1(a2);
}
