/*
 * XREFs of ?TryInstallStoreApplicationAsync@LockScreenWidgetPackageHelperBase@@IEAA?AUIAsyncAction@Foundation@Windows@winrt@@Uhstring@5@0UPackageVersion@ApplicationModel@45@V?$function@$$A6AXAEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@Z@std@@2@Z @ 0x180245AD0
 * Callers:
 *     ?TryInstallAsync@LockScreenWidgetPackageHelperBase@@QEAA?AUIAsyncAction@Foundation@Windows@winrt@@V?$function@$$A6AXAEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@Z@std@@0@Z @ 0x180244ECC (-TryInstallAsync@LockScreenWidgetPackageHelperBase@@QEAA-AUIAsyncAction@Foundation@Windows@winrt.c)
 * Callees:
 *     ?_Tidy@?$_Func_class@XAEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@std@@IEAAXXZ @ 0x1800875EC (-_Tidy@-$_Func_class@XAEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@w.c)
 *     ??1hstring@winrt@@QEAA@XZ @ 0x1800B498C (--1hstring@winrt@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     LockScreenWidgetPackageHelperBase::TryInstallStoreApplicationAsync$_InitCoro$2 @ 0x180244FE4 (LockScreenWidgetPackageHelperBase--TryInstallStoreApplicationAsync$_InitCoro$2.c)
 */

// Hidden C++ exception states: #wind=4
winrt::Windows::Foundation::IUnknown *__fastcall LockScreenWidgetPackageHelperBase::TryInstallStoreApplicationAsync(
        __int64 a1,
        winrt::Windows::Foundation::IUnknown *a2,
        __int64 *a3,
        __int64 *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v11; // rsi
  __int64 v12; // rbp
  void *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rdx
  int v17; // [rsp+50h] [rbp-3F8h] BYREF
  __int64 *v18; // [rsp+58h] [rbp-3F0h]
  __int64 *v19; // [rsp+60h] [rbp-3E8h]
  __int64 v20; // [rsp+3F0h] [rbp-58h]
  __int64 v21; // [rsp+3F8h] [rbp-50h]

  v18 = a3;
  v19 = a4;
  v11 = a6;
  v20 = a6;
  v12 = a7;
  v21 = a7;
  v13 = operator new(0x381uLL);
  v17 = 0;
  LockScreenWidgetPackageHelperBase::TryInstallStoreApplicationAsync__InitCoro_2(
    &v17,
    (__int64)v13 + 96,
    a2,
    a3,
    a4,
    &a5,
    v11,
    v12,
    a1);
  winrt::hstring::~hstring((void **)a3);
  winrt::hstring::~hstring((void **)a4);
  std::_Func_class<void,winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &>::_Tidy(
    v11,
    v14);
  std::_Func_class<void,winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &>::_Tidy(
    v12,
    v15);
  return a2;
}
