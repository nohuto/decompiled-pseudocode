/*
 * XREFs of ?ExtendedErrorCode@?$consume_Windows_Management_Deployment_IDeploymentResult@UIDeploymentResult@Deployment@Management@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18046709C
 * Callers:
 *     LockScreenWidgetPackageHelperBase::InstallInboxedPackageAsync$_ResumeCoro$1 @ 0x18023DCE0 (LockScreenWidgetPackageHelperBase--InstallInboxedPackageAsync$_ResumeCoro$1.c)
 *     LockScreenWidgetPackageHelperBase::TryEnableVolumeForPackageInstallAsync$_ResumeCoro$1 @ 0x180244AD0 (LockScreenWidgetPackageHelperBase--TryEnableVolumeForPackageInstallAsync$_ResumeCoro$1.c)
 *     ?InstallWebSearchPackage@@YAXAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@0V?$tip_test@V?$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip2@@@tip2@@@Z @ 0x1804682C8 (-InstallWebSearchPackage@@YAXAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@0V.c)
 *     _lambda_724db070561b64a1d673c65688c83bb1_::operator()_winrt::Windows::Foundation::IAsyncOperationWithProgress_winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallResult_winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallProgress___ @ 0x1806AED14 (_lambda_724db070561b64a1d673c65688c83bb1_--operator()_winrt--Windows--Foundation--IAsyncOperatio.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_DWORD *__fastcall winrt::impl::consume_Windows_Management_Deployment_IDeploymentResult<winrt::Windows::Management::Deployment::IDeploymentResult>::ExtendedErrorCode(
        _QWORD *a1,
        _DWORD *a2)
{
  signed int v3; // eax

  *a2 = 0;
  v3 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 64LL))(*a1);
  if ( v3 < 0 )
    winrt::throw_hresult(v3);
  return a2;
}
