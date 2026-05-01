/*
 * XREFs of ??1_parameters_@?P@??TryInstallStoreApplicationAsync@LockScreenWidgetPackageHelperBase@@IEAA?AUIAsyncAction@Foundation@Windows@winrt@@Uhstring@6@0UPackageVersion@ApplicationModel@56@V?$function@$$A6AXAEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@Z@std@@2@Z@QEAA@XZ @ 0x180234FA0
 * Callers:
 *     _LockScreenWidgetPackageHelperBase::TryInstallStoreApplicationAsync$_InitCoro$2_::_1_::dtor$1 @ 0x180245129 (_LockScreenWidgetPackageHelperBase--TryInstallStoreApplicationAsync$_InitCoro$2_--_1_--dtor$1.c)
 *     LockScreenWidgetPackageHelperBase::TryInstallStoreApplicationAsync$_ResumeCoro$1 @ 0x180245160 (LockScreenWidgetPackageHelperBase--TryInstallStoreApplicationAsync$_ResumeCoro$1.c)
 * Callees:
 *     ?_Tidy@?$_Func_class@XAEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@std@@IEAAXXZ @ 0x1800875EC (-_Tidy@-$_Func_class@XAEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@w.c)
 *     ??1hstring@winrt@@QEAA@XZ @ 0x1800B498C (--1hstring@winrt@@QEAA@XZ.c)
 */

void __fastcall `LockScreenWidgetPackageHelperBase::TryInstallStoreApplicationAsync'::`15'::_parameters_::~_parameters_(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rdx

  std::_Func_class<void,winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &>::_Tidy(
    a1 + 96,
    a2);
  std::_Func_class<void,winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &>::_Tidy(
    a1 + 32,
    v3);
  winrt::hstring::~hstring((void **)(a1 + 16));
  winrt::hstring::~hstring((void **)(a1 + 8));
}
