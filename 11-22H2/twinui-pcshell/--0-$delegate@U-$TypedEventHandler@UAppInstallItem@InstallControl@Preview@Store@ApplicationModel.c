/*
 * XREFs of ??0?$delegate@U?$TypedEventHandler@UAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@UIInspectable@Foundation@67@@Foundation@Windows@winrt@@V_lambda_adefc463c2a6e43ea1280e21dd7410de_@@@impl@winrt@@QEAA@$$QEAV_lambda_adefc463c2a6e43ea1280e21dd7410de_@@@Z @ 0x180233994
 * Callers:
 *     ??$?0V_lambda_adefc463c2a6e43ea1280e21dd7410de_@@@?$TypedEventHandler@UAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@UIInspectable@Foundation@67@@Foundation@Windows@winrt@@QEAA@V_lambda_adefc463c2a6e43ea1280e21dd7410de_@@@Z @ 0x18022E9F0 (--$-0V_lambda_adefc463c2a6e43ea1280e21dd7410de_@@@-$TypedEventHandler@UAppInstallItem@InstallCon.c)
 * Callees:
 *     ??0?$function@$$A6AXAEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@Z@std@@QEAA@$$QEAV01@@Z @ 0x180233A7C (--0-$function@$$A6AXAEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@win.c)
 */

__int64 __fastcall winrt::impl::delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem,winrt::Windows::Foundation::IInspectable>,_lambda_adefc463c2a6e43ea1280e21dd7410de_>::delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem,winrt::Windows::Foundation::IInspectable>,_lambda_adefc463c2a6e43ea1280e21dd7410de_>(
        __int64 a1,
        __int64 *a2)
{
  __int64 v2; // rax

  v2 = *a2;
  *a2 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 8) = v2;
  *(_QWORD *)(a1 + 16) = a2[1];
  *(_QWORD *)(a1 + 24) = a2[2];
  a2[1] = 0LL;
  a2[2] = 0LL;
  std::function<void (winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &)>::function<void (winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &)>(
    a1 + 32,
    a2 + 3);
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  *(_DWORD *)(a1 + 96) = 1;
  *(_QWORD *)a1 = &winrt::impl::delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem,winrt::Windows::Foundation::IInspectable>,_lambda_adefc463c2a6e43ea1280e21dd7410de_>::`vftable';
  return a1;
}
