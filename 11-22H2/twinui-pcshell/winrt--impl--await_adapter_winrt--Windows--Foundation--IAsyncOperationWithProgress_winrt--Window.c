/*
 * XREFs of winrt::impl::await_adapter_winrt::Windows::Foundation::IAsyncOperationWithProgress_winrt::Windows::Management::Deployment::DeploymentResult_winrt::Windows::Management::Deployment::DeploymentProgress___::cancel_asynchronously$_InitCoro$2 @ 0x180249228
 * Callers:
 *     ?cancel_asynchronously@?$await_adapter@U?$IAsyncOperationWithProgress@UDeploymentResult@Deployment@Management@Windows@winrt@@UDeploymentProgress@2345@@Foundation@Windows@winrt@@@impl@winrt@@CA?AUfire_and_forget@3@U?$IAsyncOperationWithProgress@UDeploymentResult@Deployment@Management@Windows@winrt@@UDeploymentProgress@2345@@Foundation@Windows@3@@Z @ 0x180249568 (-cancel_asynchronously@-$await_adapter@U-$IAsyncOperationWithProgress@UDeploymentResult@Deployme.c)
 * Callees:
 *     ??0_parameters_@?4??cancel_asynchronously@?$await_adapter@U?$IAsyncOperationWithProgress@II@Foundation@Windows@winrt@@@impl@winrt@@CA?AUfire_and_forget@4@U?$IAsyncOperationWithProgress@II@Foundation@Windows@4@@Z@QEAA@$$QEAU6784@@Z @ 0x180233904 (--0_parameters_@-4--cancel_asynchronously@-$await_adapter@U-$IAsyncOperationWithProgress@II@Foun.c)
 *     winrt::impl::await_adapter_winrt::Windows::Foundation::IAsyncOperationWithProgress_winrt::Windows::Management::Deployment::DeploymentResult_winrt::Windows::Management::Deployment::DeploymentProgress___::cancel_asynchronously$_ResumeCoro$1 @ 0x1802493E0 (winrt--impl--await_adapter_winrt--Windows--Foundation--IAsyncOperationWithProgress__ea_1802493E0.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall winrt::impl::await_adapter_winrt::Windows::Foundation::IAsyncOperationWithProgress_winrt::Windows::Management::Deployment::DeploymentResult_winrt::Windows::Management::Deployment::DeploymentProgress___::cancel_asynchronously__InitCoro_2(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4)
{
  __int64 v4; // r8
  _DWORD *v5; // r10
  _BYTE *v6; // r11

  `winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperationWithProgress<unsigned int,unsigned int>>::cancel_asynchronously'::`5'::_parameters_::_parameters_(
    (_QWORD *)(a3 + 34),
    a4);
  *(_QWORD *)v4 = winrt::impl::await_adapter_winrt::Windows::Foundation::IAsyncOperationWithProgress_winrt::Windows::Management::Deployment::DeploymentResult_winrt::Windows::Management::Deployment::DeploymentProgress___::cancel_asynchronously__ResumeCoro_1;
  *(_DWORD *)(v4 + 8) = *v5 != 0 ? 2 : 65538;
  *v6 = 0;
  *(_BYTE *)(v4 + 33) = 0;
  return winrt::impl::await_adapter_winrt::Windows::Foundation::IAsyncOperationWithProgress_winrt::Windows::Management::Deployment::DeploymentResult_winrt::Windows::Management::Deployment::DeploymentProgress___::cancel_asynchronously__ResumeCoro_1(v4);
}
