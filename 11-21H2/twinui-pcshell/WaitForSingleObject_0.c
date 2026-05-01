/*
 * XREFs of WaitForSingleObject_0 @ 0x1801892F0
 * Callers:
 *     ??$wait_for_completed@U?$IAsyncOperation@UWindowTabDataModel@Shell@UI@Internal@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@YA@AEBU?$IAsyncOperation@UWindowTabDataModel@Shell@UI@Internal@Windows@winrt@@@Foundation@Windows@1@I@Z @ 0x18001AD00 (--$wait_for_completed@U-$IAsyncOperation@UWindowTabDataModel@Shell@UI@Internal@Windows@winrt@@@F.c)
 *     ?await_ready@?$notify_awaiter@Uawaitable@?1??resume_on_signal@winrt@@YA@PEAXV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@@impl@winrt@@QEAA_NXZ @ 0x180177638 (-await_ready@-$notify_awaiter@Uawaitable@-1--resume_on_signal@winrt@@YA@PEAXV-$duration@_JU-$rat.c)
 *     ??$wait_for_completed@U?$IAsyncOperation@UAppData@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@YA@AEBU?$IAsyncOperation@UAppData@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@Foundation@Windows@1@I@Z @ 0x1801C3820 (--$wait_for_completed@U-$IAsyncOperation@UAppData@Internal@InstallControl@Preview@Store@Applicat.c)
 *     ??$wait_for_completed@U?$IAsyncOperation@UAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@YA@AEBU?$IAsyncOperation@UAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@Foundation@Windows@1@I@Z @ 0x1801C3908 (--$wait_for_completed@U-$IAsyncOperation@UAppInstallItem@InstallControl@Preview@Store@Applicatio.c)
 *     ??$wait_for_completed@U?$IAsyncOperationWithProgress@UDeploymentResult@Deployment@Management@Windows@winrt@@UDeploymentProgress@2345@@Foundation@Windows@winrt@@@impl@winrt@@YA@AEBU?$IAsyncOperationWithProgress@UDeploymentResult@Deployment@Management@Windows@winrt@@UDeploymentProgress@2345@@Foundation@Windows@1@I@Z @ 0x1801C39F0 (--$wait_for_completed@U-$IAsyncOperationWithProgress@UDeploymentResult@Deployment@Management@Win.c)
 *     ??$wait_for_completed@U?$IAsyncOperation@UStorageFile@Storage@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@YA@AEBU?$IAsyncOperation@UStorageFile@Storage@Windows@winrt@@@Foundation@Windows@1@I@Z @ 0x180570D3C (--$wait_for_completed@U-$IAsyncOperation@UStorageFile@Storage@Windows@winrt@@@Foundation@Windows.c)
 *     ??$wait_for_completed@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@@impl@winrt@@YA@AEBU?$IAsyncOperation@_N@Foundation@Windows@1@I@Z @ 0x180570E2C (--$wait_for_completed@U-$IAsyncOperation@_N@Foundation@Windows@winrt@@@impl@winrt@@YA@AEBU-$IAsy.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
DWORD __stdcall WaitForSingleObject_0(HANDLE hHandle, DWORD dwMilliseconds)
{
  return WaitForSingleObject(hHandle, dwMilliseconds);
}
