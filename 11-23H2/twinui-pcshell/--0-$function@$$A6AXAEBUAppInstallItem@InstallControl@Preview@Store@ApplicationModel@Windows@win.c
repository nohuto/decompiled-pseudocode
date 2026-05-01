/*
 * XREFs of ??0?$function@$$A6AXAEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@Z@std@@QEAA@$$QEAV01@@Z @ 0x180233A7C
 * Callers:
 *     ??0_parameters_@?P@??TryInstallStoreApplicationAsync@LockScreenWidgetPackageHelperBase@@IEAA?AUIAsyncAction@Foundation@Windows@winrt@@Uhstring@6@0UPackageVersion@ApplicationModel@56@V?$function@$$A6AXAEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@Z@std@@2@Z@QEAA@PEAV2@$$QEAU76@4$$QEAU8956@$$QEAV?$function@$$A6AXAEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@Z@std@@6@Z @ 0x180233938 (--0_parameters_@-P@--TryInstallStoreApplicationAsync@LockScreenWidgetPackageHelperBase@@IEAA-AUI.c)
 *     ??0?$delegate@U?$TypedEventHandler@UAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@UIInspectable@Foundation@67@@Foundation@Windows@winrt@@V_lambda_adefc463c2a6e43ea1280e21dd7410de_@@@impl@winrt@@QEAA@$$QEAV_lambda_adefc463c2a6e43ea1280e21dd7410de_@@@Z @ 0x180233994 (--0-$delegate@U-$TypedEventHandler@UAppInstallItem@InstallControl@Preview@Store@ApplicationModel.c)
 *     ??0?$delegate@U?$TypedEventHandler@UAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@UIInspectable@Foundation@67@@Foundation@Windows@winrt@@V_lambda_c63df5938b5e32cbd3483994e088b3e3_@@@impl@winrt@@QEAA@$$QEAV_lambda_c63df5938b5e32cbd3483994e088b3e3_@@@Z @ 0x180233A04 (--0-$delegate@U-$TypedEventHandler@UAppInstallItem@InstallControl@Preview@Store@App_ea_180233A04.c)
 * Callees:
 *     ?_Tidy@?$_Func_class@XAEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@std@@IEAAXXZ @ 0x1800875EC (-_Tidy@-$_Func_class@XAEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@w.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall std::function<void (winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &)>::function<void (winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &)>(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rcx
  __int64 v5; // rdx

  *(_QWORD *)(a1 + 56) = 0LL;
  v3 = *(_QWORD *)(a2 + 56);
  if ( v3 )
  {
    if ( v3 == a2 )
    {
      *(_QWORD *)(a1 + 56) = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 8LL))(v3, a1);
      std::_Func_class<void,winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &>::_Tidy(
        a2,
        v5);
    }
    else
    {
      *(_QWORD *)(a1 + 56) = v3;
      *(_QWORD *)(a2 + 56) = 0LL;
    }
  }
  return a1;
}
