/*
 * XREFs of ?GetProviderAppInfoForBoot@Utils@implementation@Shell@Internal@Windows@winrt@@SA?AU?$IVectorView@UAppInfo@ApplicationModel@Windows@winrt@@@Collections@Foundation@56@XZ @ 0x18072DB94
 * Callers:
 *     ?ActivateProvider@BootProviderActivator@implementation@Shell@Internal@Windows@winrt@@UEAA?AUTransitionScreenId@TransitionScreen@CloudDesktop@3456@AEBU8893456@AEBURemoteDesktopProviderInfo@3456@@Z @ 0x18072CB80 (-ActivateProvider@BootProviderActivator@implementation@Shell@Internal@Windows@winrt@@UEAA-AUTran.c)
 * Callees:
 *     ?put_abi@winrt@@YAPEAPEAXAEAUIUnknown@Foundation@Windows@1@@Z @ 0x180093070 (-put_abi@winrt@@YAPEAPEAXAEAUIUnknown@Foundation@Windows@1@@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     _CxxThrowException_0 @ 0x1801C7518 (_CxxThrowException_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??0hresult_canceled@winrt@@QEAA@XZ @ 0x1803E2DA0 (--0hresult_canceled@winrt@@QEAA@XZ.c)
 *     ?Status@?$consume_Windows_Foundation_IAsyncInfo@U?$IAsyncOperationWithProgress@UDeploymentResult@Deployment@Management@Windows@winrt@@UDeploymentProgress@2345@@Foundation@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180632628 (-Status@-$consume_Windows_Foundation_IAsyncInfo@U-$IAsyncOperationWithProgress@UDeploymentResult.c)
 *     ??$call@AEAV_lambda_adc4b1de82694fc8d054373ced810589_@@@?$factory_cache_entry@ULauncher@System@Windows@winrt@@UILauncherStatics2@234@@impl@winrt@@QEAA?A_PAEAV_lambda_adc4b1de82694fc8d054373ced810589_@@@Z @ 0x18070234C (--$call@AEAV_lambda_adc4b1de82694fc8d054373ced810589_@@@-$factory_cache_entry@ULauncher@System@W.c)
 *     ??$wait_for_completed@U?$IAsyncOperation@U?$IVectorView@UAppInfo@ApplicationModel@Windows@winrt@@@Collections@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@YA?A_PAEBU?$IAsyncOperation@U?$IVectorView@UAppInfo@ApplicationModel@Windows@winrt@@@Collections@Foundation@Windows@winrt@@@Foundation@Windows@1@I@Z @ 0x180705220 (--$wait_for_completed@U-$IAsyncOperation@U-$IVectorView@UAppInfo@ApplicationModel@Windows@winrt@.c)
 *     ??R_lambda_adc4b1de82694fc8d054373ced810589_@@QEBA@AEBUILauncherStatics2@System@Windows@winrt@@@Z @ 0x180705724 (--R_lambda_adc4b1de82694fc8d054373ced810589_@@QEBA@AEBUILauncherStatics2@System@Windows@winrt@@@.c)
 */

// Hidden C++ exception states: #wind=3
winrt *__fastcall winrt::Windows::Internal::Shell::implementation::Utils::GetProviderAppInfoForBoot(winrt *this)
{
  int v2; // eax
  struct IUnknown *v3; // rdx
  __int64 v4; // rbx
  __int64 (__fastcall *v5)(__int64, void **); // rdi
  void **v6; // rax
  signed int v7; // eax
  _BYTE pExceptionObject[24]; // [rsp+28h] [rbp-40h] BYREF
  __int64 v10; // [rsp+40h] [rbp-28h] BYREF
  __int64 v11; // [rsp+98h] [rbp+30h] BYREF
  __int64 *v12; // [rsp+A0h] [rbp+38h] BYREF
  __int64 *v13; // [rsp+A8h] [rbp+40h]

  v10 = c_remoteSystemProviderUriSchemeForBoot;
  v12 = &v10;
  v13 = &qword_180990D48;
  _InterlockedIncrement64(&qword_180990D48);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::System::Launcher,winrt::Windows::System::ILauncherStatics2> )
  {
    _lambda_adc4b1de82694fc8d054373ced810589_::operator()(
      &v12,
      (__int64)&v11,
      (__int64)&winrt::impl::factory_cache_entry_v<winrt::Windows::System::Launcher,winrt::Windows::System::ILauncherStatics2>);
    _InterlockedDecrement64(&qword_180990D48);
  }
  else
  {
    _InterlockedDecrement64(&qword_180990D48);
    winrt::impl::factory_cache_entry<winrt::Windows::System::Launcher,winrt::Windows::System::ILauncherStatics2>::call<_lambda_adc4b1de82694fc8d054373ced810589_ &>(
      (void (__fastcall ***)(_QWORD, __int64 *, __int64 *))this,
      (__int64)&v11,
      &v12);
  }
  v2 = winrt::impl::consume_Windows_Foundation_IAsyncInfo<winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Management::Deployment::DeploymentResult,winrt::Windows::Management::Deployment::DeploymentProgress>>::Status(&v11);
  if ( !v2 )
    v2 = winrt::impl::wait_for_completed<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::ApplicationModel::AppInfo>>>(&v11);
  if ( v2 == 2 )
  {
    winrt::hresult_canceled::hresult_canceled((winrt::hresult_canceled *)pExceptionObject);
    throw (winrt::hresult_canceled *)pExceptionObject;
  }
  *(_QWORD *)this = 0LL;
  v4 = v11;
  v5 = *(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)v11 + 64LL);
  v6 = winrt::put_abi(this, v3);
  v7 = v5(v4, v6);
  if ( v7 < 0 )
    winrt::throw_hresult(v7);
  if ( v4 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v11);
  return this;
}
