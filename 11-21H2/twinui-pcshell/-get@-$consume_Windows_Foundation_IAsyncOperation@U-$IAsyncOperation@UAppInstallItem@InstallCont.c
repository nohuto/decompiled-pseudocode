/*
 * XREFs of ?get@?$consume_Windows_Foundation_IAsyncOperation@U?$IAsyncOperation@UAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@Foundation@Windows@winrt@@UAppInstallItem@InstallControl@Preview@Store@ApplicationModel@34@@impl@winrt@@QEBA?AUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@3@XZ @ 0x1801CF528
 * Callers:
 *     _anonymous_namespace_::EnsureWebExperiencePackageInstalled$_ResumeCoro$1 @ 0x1801C68D0 (_anonymous_namespace_--EnsureWebExperiencePackageInstalled$_ResumeCoro$1.c)
 * Callees:
 *     ??$wait_get@U?$IAsyncOperation@UAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@YA?AUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@1@AEBU?$IAsyncOperation@UAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@Foundation@71@@Z @ 0x1801C3BE8 (--$wait_get@U-$IAsyncOperation@UAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Win.c)
 */

winrt *__fastcall winrt::impl::consume_Windows_Foundation_IAsyncOperation<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem>,winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem>::get(
        __int64 *a1,
        winrt *a2)
{
  winrt::impl::wait_get<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem>>(
    a2,
    a1);
  return a2;
}
