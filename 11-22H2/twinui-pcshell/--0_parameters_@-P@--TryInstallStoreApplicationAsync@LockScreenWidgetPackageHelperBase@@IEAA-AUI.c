/*
 * XREFs of ??0_parameters_@?P@??TryInstallStoreApplicationAsync@LockScreenWidgetPackageHelperBase@@IEAA?AUIAsyncAction@Foundation@Windows@winrt@@Uhstring@6@0UPackageVersion@ApplicationModel@56@V?$function@$$A6AXAEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@Z@std@@2@Z@QEAA@PEAV2@$$QEAU76@4$$QEAU8956@$$QEAV?$function@$$A6AXAEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@Z@std@@6@Z @ 0x180233938
 * Callers:
 *     LockScreenWidgetPackageHelperBase::TryInstallStoreApplicationAsync$_InitCoro$2 @ 0x180244FE4 (LockScreenWidgetPackageHelperBase--TryInstallStoreApplicationAsync$_InitCoro$2.c)
 * Callees:
 *     ??0?$function@$$A6AXAEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@Z@std@@QEAA@$$QEAV01@@Z @ 0x180233A7C (--0-$function@$$A6AXAEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@win.c)
 */

_QWORD *__fastcall `LockScreenWidgetPackageHelperBase::TryInstallStoreApplicationAsync'::`15'::_parameters_::_parameters_(
        _QWORD *a1,
        __int64 a2,
        __int64 *a3,
        __int64 *a4,
        _QWORD *a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v8; // rax
  __int64 v9; // rax

  *a1 = a2;
  v8 = *a3;
  *a3 = 0LL;
  a1[1] = v8;
  v9 = *a4;
  *a4 = 0LL;
  a1[2] = v9;
  a1[3] = *a5;
  std::function<void (winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &)>::function<void (winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &)>(
    a1 + 4,
    a6);
  std::function<void (winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &)>::function<void (winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &)>(
    a1 + 12,
    a7);
  return a1;
}
