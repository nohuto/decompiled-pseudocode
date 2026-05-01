/*
 * XREFs of ?HandleProviderAppLaunchResult@SwitchProviderActivator@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBU?$IAsyncOperation@_N@Foundation@56@@Z @ 0x180730B10
 * Callers:
 *     <none>
 * Callees:
 *     ?end_update@?$test_common_data@$00@details@tip@@QEAAXXZ @ 0x1800404E8 (-end_update@-$test_common_data@$00@details@tip@@QEAAXXZ.c)
 *     ?begin_update@?$test_common_data@$00@details@tip@@QEAA_NXZ @ 0x1800405EC (-begin_update@-$test_common_data@$00@details@tip@@QEAA_NXZ.c)
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x18008D2F8 (--0-$shared_ptr@V-$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QE.c)
 *     ?complete@?$test_common_data@$00@details@tip@@QEAAXXZ @ 0x180095B9C (-complete@-$test_common_data@$00@details@tip@@QEAAXXZ.c)
 *     ?reset@?$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ @ 0x180098ACC (-reset@-$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800C69A4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _CxxThrowException_0 @ 0x1801C7518 (_CxxThrowException_0.c)
 *     ?GetResults@?$consume_Windows_Foundation_IAsyncOperation@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@_N@impl@winrt@@QEBA@XZ @ 0x1802DF39E (-GetResults@-$consume_Windows_Foundation_IAsyncOperation@U-$IAsyncOperation@_N@Foundation@Window.c)
 *     ??0hresult_canceled@winrt@@QEAA@XZ @ 0x1803E2DA0 (--0hresult_canceled@winrt@@QEAA@XZ.c)
 *     ??$wait_for_completed@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@@impl@winrt@@YA?A_PAEBU?$IAsyncOperation@_N@Foundation@Windows@1@I@Z @ 0x18062EBBC (--$wait_for_completed@U-$IAsyncOperation@_N@Foundation@Windows@winrt@@@impl@winrt@@YA-A_PAEBU-$I.c)
 *     ?Status@?$consume_Windows_Foundation_IAsyncInfo@U?$IAsyncOperationWithProgress@UDeploymentResult@Deployment@Management@Windows@winrt@@UDeploymentProgress@2345@@Foundation@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180632628 (-Status@-$consume_Windows_Foundation_IAsyncInfo@U-$IAsyncOperationWithProgress@UDeploymentResult.c)
 *     ??$open_and_watch_errors@V?$tip_test@U_tip_RemoteSessionActivationTipTest@@@tip@@@tip@@YA?A_PXZ @ 0x18071FA24 (--$open_and_watch_errors@V-$tip_test@U_tip_RemoteSessionActivationTipTest@@@tip@@@tip@@YA-A_PXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::Windows::Internal::Shell::implementation::SwitchProviderActivator::HandleProviderAppLaunchResult(
        __int64 a1,
        __int64 *a2)
{
  int v3; // eax
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 pExceptionObject; // [rsp+20h] [rbp-60h] BYREF
  std::_Ref_count_base *v7; // [rsp+28h] [rbp-58h]
  _BYTE v8[8]; // [rsp+40h] [rbp-40h] BYREF
  _BYTE v9[24]; // [rsp+48h] [rbp-38h] BYREF
  int v10; // [rsp+60h] [rbp-20h]
  __int64 v11; // [rsp+70h] [rbp-10h] BYREF
  std::_Ref_count_base *v12; // [rsp+78h] [rbp-8h]

  tip::open_and_watch_errors<tip::tip_test<_tip_RemoteSessionActivationTipTest>>((struct wil::details::IFailureCallback *)v8);
  v3 = winrt::impl::consume_Windows_Foundation_IAsyncInfo<winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Management::Deployment::DeploymentResult,winrt::Windows::Management::Deployment::DeploymentProgress>>::Status(a2);
  if ( !v3 )
    v3 = winrt::impl::wait_for_completed<winrt::Windows::Foundation::IAsyncOperation<bool>>(a2);
  if ( v3 == 2 )
  {
    winrt::hresult_canceled::hresult_canceled((winrt::hresult_canceled *)&pExceptionObject);
    throw (winrt::hresult_canceled *)&pExceptionObject;
  }
  if ( !winrt::impl::consume_Windows_Foundation_IAsyncOperation<winrt::Windows::Foundation::IAsyncOperation<bool>,bool>::GetResults(a2) )
  {
    std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
      &pExceptionObject,
      &v11);
    v4 = pExceptionObject;
    tip::details::test_common_data<1>::begin_update(pExceptionObject + 8);
    v5 = v4 + 185;
    if ( !v4 )
      v5 = 9LL;
    *(_BYTE *)v5 = 1;
    if ( v4 )
    {
      tip::details::test_common_data<1>::end_update(v4 + 8);
      std::shared_ptr<PeoplePaneViewInfo>::reset(&pExceptionObject);
    }
    if ( v7 )
      std::_Ref_count_base::_Decref(v7);
  }
  tip::details::test_common_data<1>::complete(v11 + 8);
  if ( v12 )
    std::_Ref_count_base::_Decref(v12);
  if ( v10 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v9);
}
