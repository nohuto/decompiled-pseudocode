/*
 * XREFs of ?QueryInterface@?$implements_delegate@U?$AsyncOperationWithProgressCompletedHandler@UDeploymentResult@Deployment@Management@Windows@winrt@@UDeploymentProgress@2345@@Foundation@Windows@winrt@@Ushared_type@?1???$wait_for_completed@U?$IAsyncOperationWithProgress@UDeploymentResult@Deployment@Management@Windows@winrt@@UDeploymentProgress@2345@@Foundation@Windows@winrt@@@impl@4@YA@AEBU?$IAsyncOperationWithProgress@UDeploymentResult@Deployment@Management@Windows@winrt@@UDeploymentProgress@2345@@234@I@Z@@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x1801C9830
 * Callers:
 *     <none>
 * Callees:
 *     ??8winrt@@YA_NAEBUguid@0@0@Z @ 0x1800F96D0 (--8winrt@@YA_NAEBUguid@0@0@Z.c)
 */

__int64 __fastcall _QueryInterface___implements_delegate_U__AsyncOperationWithProgressCompletedHandler_UDeploymentResult_Deployment_Management_Windows_winrt__UDeploymentProgress_2345__Foundation_Windows_winrt__Ushared_type__1____wait_for_completed_U__IAsyncOperationWithProgress_UDeploymentResult_Deployment_Management_Windows_winrt__UDeploymentProgress_2345__Foundation_Windows_winrt___impl_4_YA_AEBU__IAsyncOperationWithProgress_UDeploymentResult_Deployment_Management_Windows_winrt__UDeploymentProgress_2345__234_I_Z__impl_winrt__UEAAHAEBUguid_3_PEAPEAX_Z(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD *v2; // rcx
  _QWORD *v3; // r8
  __int64 v4; // r9
  _QWORD *v5; // rcx
  _QWORD *v6; // rcx
  __int64 *v7; // r8
  __int64 v8; // r9

  if ( winrt::operator==(
         a2,
         winrt::impl::guid_v<winrt::Windows::Foundation::AsyncOperationWithProgressCompletedHandler<winrt::Windows::Management::Deployment::DeploymentResult,winrt::Windows::Management::Deployment::DeploymentProgress>>)
    || winrt::operator==(v2, &winrt::impl::guid_v<winrt::Windows::Foundation::IUnknown>)
    || winrt::operator==(v5, &winrt::impl::guid_v<winrt::impl::IAgileObject>) )
  {
    *v3 = v4;
    _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 24), 1u);
    return 0LL;
  }
  else if ( winrt::operator==(v6, &winrt::impl::guid_v<winrt::impl::IMarshal>) )
  {
    return winrt::impl::make_marshaler(v8, v7);
  }
  else
  {
    *v7 = 0LL;
    return 2147500034LL;
  }
}
