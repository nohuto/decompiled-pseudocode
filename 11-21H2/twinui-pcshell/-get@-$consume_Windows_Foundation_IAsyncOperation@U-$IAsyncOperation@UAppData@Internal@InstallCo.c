/*
 * XREFs of ?get@?$consume_Windows_Foundation_IAsyncOperation@U?$IAsyncOperation@UAppData@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@Foundation@Windows@winrt@@UAppData@Internal@InstallControl@Preview@Store@ApplicationModel@34@@impl@winrt@@QEBA?AUAppData@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@3@XZ @ 0x1801CF504
 * Callers:
 *     _anonymous_namespace_::EnsureWebExperiencePackageInstalled$_ResumeCoro$1 @ 0x1801C68D0 (_anonymous_namespace_--EnsureWebExperiencePackageInstalled$_ResumeCoro$1.c)
 * Callees:
 *     ??$wait_get@U?$IAsyncOperation@UAppData@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@YA?AUAppData@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@1@AEBU?$IAsyncOperation@UAppData@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@Foundation@81@@Z @ 0x1801C3AD8 (--$wait_get@U-$IAsyncOperation@UAppData@Internal@InstallControl@Preview@Store@ApplicationModel@W.c)
 */

winrt *__fastcall winrt::impl::consume_Windows_Foundation_IAsyncOperation<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::Internal::AppData>,winrt::Windows::ApplicationModel::Store::Preview::InstallControl::Internal::AppData>::get(
        __int64 *a1,
        winrt *a2)
{
  winrt::impl::wait_get<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::Internal::AppData>>(
    a2,
    a1);
  return a2;
}
