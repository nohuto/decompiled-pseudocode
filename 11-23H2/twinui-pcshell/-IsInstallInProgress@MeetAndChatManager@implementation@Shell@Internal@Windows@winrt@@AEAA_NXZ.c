/*
 * XREFs of ?IsInstallInProgress@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAA_NXZ @ 0x1806BE870
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::InstallForCurrentUserAsync$_ResumeCoro$1 @ 0x180254250 (winrt--Windows--Internal--Shell--implementation--MeetAndChatManager--InstallForCurr_ea_180254250.c)
 * Callees:
 *     ?Status@?$consume_Windows_Foundation_IAsyncInfo@U?$IAsyncOperationWithProgress@UDeploymentResult@Deployment@Management@Windows@winrt@@UDeploymentProgress@2345@@Foundation@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180632628 (-Status@-$consume_Windows_Foundation_IAsyncInfo@U-$IAsyncOperationWithProgress@UDeploymentResult.c)
 */

char __fastcall winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::IsInstallInProgress(
        winrt::Windows::Internal::Shell::implementation::MeetAndChatManager *this)
{
  __int64 *v1; // rcx
  char v2; // bl

  v1 = (__int64 *)((char *)this + 264);
  v2 = 0;
  if ( *v1 )
    return (unsigned int)winrt::impl::consume_Windows_Foundation_IAsyncInfo<winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Management::Deployment::DeploymentResult,winrt::Windows::Management::Deployment::DeploymentProgress>>::Status(v1) == 0;
  return v2;
}
