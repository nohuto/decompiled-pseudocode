/*
 * XREFs of ??$check_pointer@X@winrt@@YAPEAXPEAX@Z @ 0x180043EF8
 * Callers:
 *     winrt::when_any$_ResumeCoro$1_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStreamReference__winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStreamReference___ @ 0x1801BAAE0 (winrt--when_any$_ResumeCoro$1_winrt--Windows--Foundation--IAsyncOperation_winrt--Windows--Storag.c)
 *     ??$wait_for_completed@U?$IAsyncOperation@UAppData@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@YA@AEBU?$IAsyncOperation@UAppData@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@Foundation@Windows@1@I@Z @ 0x1801C3820 (--$wait_for_completed@U-$IAsyncOperation@UAppData@Internal@InstallControl@Preview@Store@Applicat.c)
 *     ??$wait_for_completed@U?$IAsyncOperation@UAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@YA@AEBU?$IAsyncOperation@UAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@Foundation@Windows@1@I@Z @ 0x1801C3908 (--$wait_for_completed@U-$IAsyncOperation@UAppInstallItem@InstallControl@Preview@Store@Applicatio.c)
 *     ??$wait_for_completed@U?$IAsyncOperationWithProgress@UDeploymentResult@Deployment@Management@Windows@winrt@@UDeploymentProgress@2345@@Foundation@Windows@winrt@@@impl@winrt@@YA@AEBU?$IAsyncOperationWithProgress@UDeploymentResult@Deployment@Management@Windows@winrt@@UDeploymentProgress@2345@@Foundation@Windows@1@I@Z @ 0x1801C39F0 (--$wait_for_completed@U-$IAsyncOperationWithProgress@UDeploymentResult@Deployment@Management@Win.c)
 * Callees:
 *     ?throw_last_error@winrt@@YAXXZ @ 0x18033DC7C (-throw_last_error@winrt@@YAXXZ.c)
 */

__int64 __fastcall winrt::check_pointer<void>(__int64 a1)
{
  if ( !a1 )
    winrt::throw_last_error(0LL);
  return a1;
}
