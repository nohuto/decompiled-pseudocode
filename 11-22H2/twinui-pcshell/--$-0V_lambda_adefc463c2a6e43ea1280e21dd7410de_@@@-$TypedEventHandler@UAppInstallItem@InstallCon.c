/*
 * XREFs of ??$?0V_lambda_adefc463c2a6e43ea1280e21dd7410de_@@@?$TypedEventHandler@UAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@UIInspectable@Foundation@67@@Foundation@Windows@winrt@@QEAA@V_lambda_adefc463c2a6e43ea1280e21dd7410de_@@@Z @ 0x18022E9F0
 * Callers:
 *     LockScreenWidgetPackageHelperBase::TryInstallStoreApplicationAsync$_ResumeCoro$1 @ 0x180245160 (LockScreenWidgetPackageHelperBase--TryInstallStoreApplicationAsync$_ResumeCoro$1.c)
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     ??0?$delegate@U?$TypedEventHandler@UAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@UIInspectable@Foundation@67@@Foundation@Windows@winrt@@V_lambda_adefc463c2a6e43ea1280e21dd7410de_@@@impl@winrt@@QEAA@$$QEAV_lambda_adefc463c2a6e43ea1280e21dd7410de_@@@Z @ 0x180233994 (--0-$delegate@U-$TypedEventHandler@UAppInstallItem@InstallControl@Preview@Store@ApplicationModel.c)
 *     ??1_lambda_adefc463c2a6e43ea1280e21dd7410de_@@QEAA@XZ @ 0x180234ECC (--1_lambda_adefc463c2a6e43ea1280e21dd7410de_@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem,winrt::Windows::Foundation::IInspectable>::TypedEventHandler<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem,winrt::Windows::Foundation::IInspectable>(
        _QWORD *a1,
        _lambda_adefc463c2a6e43ea1280e21dd7410de_ *a2)
{
  void *v5; // [rsp+28h] [rbp-20h]

  v5 = operator new(0x68uLL);
  *a1 = winrt::impl::delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem,winrt::Windows::Foundation::IInspectable>,_lambda_adefc463c2a6e43ea1280e21dd7410de_>::delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem,winrt::Windows::Foundation::IInspectable>,_lambda_adefc463c2a6e43ea1280e21dd7410de_>(
          v5,
          a2);
  _lambda_adefc463c2a6e43ea1280e21dd7410de_::~_lambda_adefc463c2a6e43ea1280e21dd7410de_(a2);
  return a1;
}
