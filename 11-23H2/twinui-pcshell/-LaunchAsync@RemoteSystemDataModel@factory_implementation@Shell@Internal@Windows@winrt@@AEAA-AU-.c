/*
 * XREFs of ?LaunchAsync@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAA?AU?$IAsyncOperation@_N@Foundation@56@AEBURemoteDesktopProviderInfo@3456@UUri@856@@Z @ 0x180714454
 * Callers:
 *     ?LaunchBootToCloudAsync@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAA?AU?$IAsyncOperation@_N@Foundation@56@AEBURemoteDesktopProviderInfo@3456@@Z @ 0x1807146CC (-LaunchBootToCloudAsync@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winr.c)
 *     ?LaunchForSwitchAsync@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAA?AU?$IAsyncOperation@_N@Foundation@56@AEBURemoteDesktopProviderInfo@3456@@Z @ 0x180714D9C (-LaunchForSwitchAsync@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@.c)
 *     ?LaunchRemoteSystemSettingsAsync@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAA?AU?$IAsyncOperation@_N@Foundation@56@AEBURemoteDesktopProviderInfo@3456@@Z @ 0x1807155FC (-LaunchRemoteSystemSettingsAsync@RemoteSystemDataModel@factory_implementation@Shell@Internal@Win.c)
 * Callees:
 *     ??1?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FD0 (--1-$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??$call@AEAV_lambda_25f685323ecfdadefb1917e024cec3b1_@@@?$factory_cache_entry@ULauncher@System@Windows@winrt@@UILauncherStatics@234@@impl@winrt@@QEAA?A_PAEAV_lambda_25f685323ecfdadefb1917e024cec3b1_@@@Z @ 0x1803F70DC (--$call@AEAV_lambda_25f685323ecfdadefb1917e024cec3b1_@@@-$factory_cache_entry@ULauncher@System@W.c)
 *     ??R_lambda_25f685323ecfdadefb1917e024cec3b1_@@QEBA@AEBUILauncherStatics@System@Windows@winrt@@@Z @ 0x1803FA06C (--R_lambda_25f685323ecfdadefb1917e024cec3b1_@@QEBA@AEBUILauncherStatics@System@Windows@winrt@@@Z.c)
 *     ??$ActivateInstance@ULauncherOptions@System@Windows@winrt@@@IActivationFactory@Foundation@Windows@winrt@@QEBA?AULauncherOptions@System@23@XZ @ 0x18062D648 (--$ActivateInstance@ULauncherOptions@System@Windows@winrt@@@IActivationFactory@Foundation@Window.c)
 *     ??$call@AEAV_lambda_f90fd89f5c660ec91b58f654b0e35989_@@@?$factory_cache_entry@ULauncher@System@Windows@winrt@@UILauncherStatics@234@@impl@winrt@@QEAA?A_PAEAV_lambda_f90fd89f5c660ec91b58f654b0e35989_@@@Z @ 0x18062E8E0 (--$call@AEAV_lambda_f90fd89f5c660ec91b58f654b0e35989_@@@-$factory_cache_entry@ULauncher@System@W.c)
 *     ??$call@P6A?AULauncherOptions@System@Windows@winrt@@AEBUIActivationFactory@Foundation@34@@Z@?$factory_cache_entry@ULauncherOptions@System@Windows@winrt@@UIActivationFactory@Foundation@34@@impl@winrt@@QEAA?A_P$$QEAP6A?AULauncherOptions@System@Windows@2@AEBUIActivationFactory@Foundation@52@@Z@Z @ 0x18062EA20 (--$call@P6A-AULauncherOptions@System@Windows@winrt@@AEBUIActivationFactory@Foundation@34@@Z@-$fa.c)
 *     ??R_lambda_f90fd89f5c660ec91b58f654b0e35989_@@QEBA@AEBUILauncherStatics@System@Windows@winrt@@@Z @ 0x18062F564 (--R_lambda_f90fd89f5c660ec91b58f654b0e35989_@@QEBA@AEBUILauncherStatics@System@Windows@winrt@@@Z.c)
 *     ?TargetApplicationPackageFamilyName@?$consume_Windows_System_ILauncherOptions2@ULauncherOptions@System@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x18063363C (-TargetApplicationPackageFamilyName@-$consume_Windows_System_ILauncherOptions2@ULauncherOptions@.c)
 *     ?PackageFamilyName@?$consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallItem@UIAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180697754 (-PackageFamilyName@-$consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallIt.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::LaunchAsync(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        winrt::Windows::Foundation::IUnknown *a4)
{
  void (__fastcall ***v7)(_QWORD, __int64 *, __int64 *); // rcx
  _QWORD v9[2]; // [rsp+20h] [rbp-29h] BYREF
  const struct winrt::Windows::Foundation::IActivationFactory *(__fastcall *v10)(const struct winrt::Windows::Foundation::IActivationFactory *, __int64); // [rsp+30h] [rbp-19h] BYREF
  volatile signed __int32 *v11; // [rsp+38h] [rbp-11h] BYREF
  _QWORD v12[5]; // [rsp+40h] [rbp-9h] BYREF
  _QWORD v13[7]; // [rsp+68h] [rbp+1Fh] BYREF
  __int64 v14; // [rsp+B0h] [rbp+67h] BYREF
  winrt::Windows::Foundation::IUnknown *v15; // [rsp+C8h] [rbp+7Fh]

  v15 = a4;
  if ( *(_DWORD *)(a1 + 44) == 1 )
  {
    v9[0] = a4;
    v12[2] = &qword_180990CC8;
    _InterlockedIncrement64(&qword_180990CC8);
    if ( winrt::impl::factory_cache_entry_v<winrt::Windows::System::Launcher,winrt::Windows::System::ILauncherStatics> )
    {
      _lambda_25f685323ecfdadefb1917e024cec3b1_::operator()(
        v9,
        a2,
        (__int64)&winrt::impl::factory_cache_entry_v<winrt::Windows::System::Launcher,winrt::Windows::System::ILauncherStatics>);
      _InterlockedDecrement64(&qword_180990CC8);
    }
    else
    {
      _InterlockedDecrement64(&qword_180990CC8);
      winrt::impl::factory_cache_entry<winrt::Windows::System::Launcher,winrt::Windows::System::ILauncherStatics>::call<_lambda_25f685323ecfdadefb1917e024cec3b1_ &>(
        (void (__fastcall ***)(_QWORD, __int64 *, __int64 *))a1,
        a2,
        v9);
    }
  }
  else
  {
    v12[3] = &qword_180990D88;
    _InterlockedIncrement64(&qword_180990D88);
    if ( winrt::impl::factory_cache_entry_v<winrt::Windows::System::LauncherOptions,winrt::Windows::Foundation::IActivationFactory> )
    {
      winrt::Windows::Foundation::IActivationFactory::ActivateInstance<winrt::Windows::System::LauncherOptions>(
        &winrt::impl::factory_cache_entry_v<winrt::Windows::System::LauncherOptions,winrt::Windows::Foundation::IActivationFactory>,
        &v14);
      _InterlockedDecrement64(&qword_180990D88);
    }
    else
    {
      _InterlockedDecrement64(&qword_180990D88);
      v10 = _lambda_e196766f83e1d66489056b7e2848d983_::_lambda_invoker_cdecl_;
      winrt::impl::factory_cache_entry<winrt::Windows::System::LauncherOptions,winrt::Windows::Foundation::IActivationFactory>::call<winrt::Windows::System::LauncherOptions (*)(winrt::Windows::Foundation::IActivationFactory const &)>(
        (void (__fastcall ***)(_QWORD, __int64 *, __int64 *))a1,
        (__int64)&v14,
        (void (__fastcall **)(__int64, __int64 *))&v10);
    }
    v13[0] = *winrt::impl::consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallItem<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem>::PackageFamilyName(
                a3,
                &v11);
    winrt::impl::consume_Windows_System_ILauncherOptions2<winrt::Windows::System::LauncherOptions>::TargetApplicationPackageFamilyName(
      &v14,
      v13);
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v11);
    v12[0] = a4;
    v12[1] = &v14;
    v12[4] = &qword_180990CC8;
    _InterlockedIncrement64(&qword_180990CC8);
    if ( winrt::impl::factory_cache_entry_v<winrt::Windows::System::Launcher,winrt::Windows::System::ILauncherStatics> )
    {
      _lambda_f90fd89f5c660ec91b58f654b0e35989_::operator()(
        v12,
        a2,
        (__int64)&winrt::impl::factory_cache_entry_v<winrt::Windows::System::Launcher,winrt::Windows::System::ILauncherStatics>);
      _InterlockedDecrement64(&qword_180990CC8);
    }
    else
    {
      _InterlockedDecrement64(&qword_180990CC8);
      winrt::impl::factory_cache_entry<winrt::Windows::System::Launcher,winrt::Windows::System::ILauncherStatics>::call<_lambda_f90fd89f5c660ec91b58f654b0e35989_ &>(
        v7,
        a2,
        v12);
    }
    if ( v14 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v14);
  }
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>(a4);
  return a2;
}
