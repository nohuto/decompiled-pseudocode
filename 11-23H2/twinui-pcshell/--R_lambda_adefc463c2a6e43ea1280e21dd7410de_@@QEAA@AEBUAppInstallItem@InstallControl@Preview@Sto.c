/*
 * XREFs of ??R_lambda_adefc463c2a6e43ea1280e21dd7410de_@@QEAA@AEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@AEBUIInspectable@Foundation@67@@Z @ 0x180236DC0
 * Callers:
 *     ?Invoke@?$delegate@U?$TypedEventHandler@UAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@UIInspectable@Foundation@67@@Foundation@Windows@winrt@@V_lambda_adefc463c2a6e43ea1280e21dd7410de_@@@impl@winrt@@UEAAHPEAX0@Z @ 0x18023E9B0 (-Invoke@-$delegate@U-$TypedEventHandler@UAppInstallItem@InstallControl@Preview@Store@Application.c)
 * Callees:
 *     ??1?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FD0 (--1-$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation.c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x180177BB4 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_SettingsStoreAppInstallerTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180235790 (--1-$test_data_control@V-$merged_data@U_tip_SettingsStoreAppInstallerTest@@U1@@details@tip2@@@ti.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_SettingsStoreAppInstallerTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_SettingsStoreAppInstallerTest@@U1@@details@tip2@@@1@XZ @ 0x180235D98 (--C-$tip_test@V-$merged_data@U_tip_SettingsStoreAppInstallerTest@@U1@@details@tip2@@@tip2@@QEAA-.c)
 *     ??R?$_Func_class@XAEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@std@@QEBAXAEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@Z @ 0x180237A4C (--R-$_Func_class@XAEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_56659543@@@details@wil@@QEAA_NXZ @ 0x180248964 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_56659543@@@details@wil@@QEAA_NXZ.c)
 *     ?close@?$test_data_control@V?$merged_data@U_tip_SettingsStoreAppInstallerTest@@U1@@details@tip2@@@tip2@@QEAAXXZ @ 0x180249698 (-close@-$test_data_control@V-$merged_data@U_tip_SettingsStoreAppInstallerTest@@U1@@details@tip2@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ?GetCurrentStatus@?$consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallItem@UIAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1806960E0 (-GetCurrentStatus@-$consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallIte.c)
 *     ?InstallState@?$consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallStatus@UIAppInstallStatus@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180696F38 (-InstallState@-$consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallStatus@.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall _lambda_adefc463c2a6e43ea1280e21dd7410de_::operator()(__int64 a1, __int64 a2, __int64 a3)
{
  int v5; // esi
  _DWORD *v6; // rbx
  wil::details *v7; // r14
  __int64 v8; // rdi
  int v9; // eax
  int v10; // eax
  void *v11; // rdx
  int v12; // esi
  int v13; // esi
  int v14; // esi
  int v15; // esi
  wil::details **v16; // rax
  _DWORD *v17; // [rsp+60h] [rbp+40h] BYREF
  __int64 v18; // [rsp+70h] [rbp+50h] BYREF
  __int64 v19; // [rsp+78h] [rbp+58h] BYREF

  v18 = a3;
  winrt::impl::consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallItem<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem>::GetCurrentStatus(
    a2,
    &v19);
  v5 = winrt::impl::consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallStatus<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallStatus>::InstallState(&v19);
  tip2::tip_test<tip2::details::merged_data<_tip_SettingsStoreAppInstallerTest,_tip_SettingsStoreAppInstallerTest>>::operator->(
    a1,
    (__int64 *)&v17);
  v6 = v17;
  v17[72] = v5;
  v7 = 0LL;
  v18 = 0LL;
  v8 = v19;
  v9 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v19 + 64LL))(v19, &v18);
  if ( v9 < 0 )
    winrt::throw_hresult((unsigned int)v9);
  *((_QWORD *)v6 + 34) = v18;
  LODWORD(v18) = 0;
  v10 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 80LL))(v8, &v18);
  if ( v10 < 0 )
    winrt::throw_hresult((unsigned int)v10);
  v6[70] = v18;
  tip2::test_data_control<tip2::details::merged_data<_tip_SettingsStoreAppInstallerTest,_tip_SettingsStoreAppInstallerTest>>::close(&v17);
  if ( *(_QWORD *)(a1 + 80) )
    std::_Func_class<void,winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &>::operator()(
      a1 + 24,
      a2);
  v12 = v5 - 7;
  if ( v12 && (v13 = v12 - 1) != 0 )
  {
    v14 = v13 - 1;
    if ( v14 )
    {
      v15 = v14 - 1;
      if ( v15 )
      {
        if ( (unsigned int)(v15 - 1) > 1 )
          goto LABEL_15;
      }
    }
  }
  else if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_56659543>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_56659543>::GetImpl'::`2'::impl) )
  {
    goto LABEL_15;
  }
  v16 = *(wil::details ***)(a1 + 8);
  if ( v16 )
    v7 = *v16;
  wil::details::SetEvent(v7, v11);
LABEL_15:
  tip2::test_data_control<tip2::details::merged_data<_tip_SettingsStoreAppInstallerTest,_tip_SettingsStoreAppInstallerTest>>::~test_data_control<tip2::details::merged_data<_tip_SettingsStoreAppInstallerTest,_tip_SettingsStoreAppInstallerTest>>((void **)&v17);
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)&v19);
}
