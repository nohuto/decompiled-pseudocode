/*
 * XREFs of ?TryInstallAsync@LockScreenWidgetPackageHelperBase@@QEAA?AUIAsyncAction@Foundation@Windows@winrt@@V?$function@$$A6AXAEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@Z@std@@0@Z @ 0x180244ECC
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::RunWidgetCanvasDelayedInitializeAsync$_ResumeCoro$1 @ 0x180242400 (winrt--Windows--Internal--Shell--implementation--DashboardManager--RunWidgetCanvasD_ea_180242400.c)
 * Callees:
 *     ?_Tidy@?$_Func_class@XAEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@std@@IEAAXXZ @ 0x1800875EC (-_Tidy@-$_Func_class@XAEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@w.c)
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x1800D20DC (--0hstring@winrt@@QEAA@PEBG@Z.c)
 *     ??0?$function@$$A6AXAEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@Z@std@@QEAA@AEBV01@@Z @ 0x180233AE8 (--0-$function@$$A6AXAEBUAppInstallItem@InstallControl@Preview@Store@ApplicationMode_ea_180233AE8.c)
 *     ?TryInstallStoreApplicationAsync@LockScreenWidgetPackageHelperBase@@IEAA?AUIAsyncAction@Foundation@Windows@winrt@@Uhstring@5@0UPackageVersion@ApplicationModel@45@V?$function@$$A6AXAEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@Z@std@@2@Z @ 0x180245AD0 (-TryInstallStoreApplicationAsync@LockScreenWidgetPackageHelperBase@@IEAA-AUIAsyncAction@Foundati.c)
 */

// Hidden C++ exception states: #wind=5
__int64 LockScreenWidgetPackageHelperBase::TryInstallAsync(__int64 a1, ...)
{
  __int64 v1; // r12
  __int64 v2; // r13
  __int64 v4; // r14
  __int64 v5; // rsi
  __int64 v6; // rbx
  winrt::hstring *v7; // rdi
  winrt::hstring *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rdx
  _BYTE v12[64]; // [rsp+70h] [rbp-71h] BYREF
  _BYTE v13[136]; // [rsp+B0h] [rbp-31h] BYREF
  char v14; // [rsp+148h] [rbp+67h] BYREF
  __int64 v15; // [rsp+150h] [rbp+6Fh] BYREF
  va_list va; // [rsp+150h] [rbp+6Fh]
  __int64 v17; // [rsp+158h] [rbp+77h]
  __int64 v18; // [rsp+160h] [rbp+7Fh]
  va_list va1; // [rsp+168h] [rbp+87h] BYREF

  va_start(va1, a1);
  va_start(va, a1);
  v15 = va_arg(va1, _QWORD);
  v17 = va_arg(va1, _QWORD);
  v18 = va_arg(va1, _QWORD);
  v1 = v17;
  v2 = v15;
  v4 = std::function<void (winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &)>::function<void (winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &)>(
         (__int64)v12,
         v18);
  v5 = std::function<void (winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &)>::function<void (winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &)>(
         (__int64)v13,
         v1);
  v6 = *(_QWORD *)(a1 + 80);
  v7 = winrt::hstring::hstring((winrt::hstring *)va, *(const unsigned __int16 **)(a1 + 32));
  v8 = winrt::hstring::hstring((winrt::hstring *)&v14, *(const unsigned __int16 **)(a1 + 16));
  LockScreenWidgetPackageHelperBase::TryInstallStoreApplicationAsync(a1, v2, v8, v7, v6, v5, v4);
  std::_Func_class<void,winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &>::_Tidy(
    v1,
    v9);
  std::_Func_class<void,winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &>::_Tidy(
    v18,
    v10);
  return v2;
}
