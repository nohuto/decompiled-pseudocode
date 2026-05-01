/*
 * XREFs of ?IsNetworkAvailableAndNotConstrained@LockScreenWidgetPackageHelperBase@@IEAA_NXZ @ 0x18023F54C
 * Callers:
 *     ?AllowPackageInstall@StartExperiencePackageHelper@@UEAA_NXZ @ 0x180237FA0 (-AllowPackageInstall@StartExperiencePackageHelper@@UEAA_NXZ.c)
 *     ?AllowPackageInstall@WebExperiencePackageHelper@@UEAA_NXZ @ 0x180238090 (-AllowPackageInstall@WebExperiencePackageHelper@@UEAA_NXZ.c)
 *     ?AllowPackageInstall@WidgetPlatformPackageHelper@@UEAA_NXZ @ 0x1802380D0 (-AllowPackageInstall@WidgetPlatformPackageHelper@@UEAA_NXZ.c)
 *     LockScreenWidgetPackageHelperBase::TryInstallStoreApplicationAsync$_ResumeCoro$1 @ 0x180245160 (LockScreenWidgetPackageHelperBase--TryInstallStoreApplicationAsync$_ResumeCoro$1.c)
 * Callees:
 *     ??1?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FD0 (--1-$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation.c)
 *     ?GetConnectionCost@?$consume_Windows_Networking_Connectivity_IConnectionProfile@UIConnectionProfile@Connectivity@Networking@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18023B374 (-GetConnectionCost@-$consume_Windows_Networking_Connectivity_IConnectionProfile@UIConnectionProf.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ?GetInternetConnectionProfile@NetworkInformation@Connectivity@Networking@Windows@winrt@@SA@XZ @ 0x180696254 (-GetInternetConnectionProfile@NetworkInformation@Connectivity@Networking@Windows@winrt@@SA@XZ.c)
 *     ?GetNetworkConnectivityLevel@?$consume_Windows_Networking_Connectivity_IConnectionProfile@UIConnectionProfile@Connectivity@Networking@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180696938 (-GetNetworkConnectivityLevel@-$consume_Windows_Networking_Connectivity_IConnectionProfile@UIConn.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall LockScreenWidgetPackageHelperBase::IsNetworkAvailableAndNotConstrained(
        LockScreenWidgetPackageHelperBase *this)
{
  char v1; // r14
  char v2; // si
  char v3; // di
  int v4; // eax
  int v5; // eax
  int v6; // eax
  __int64 v8; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9[4]; // [rsp+28h] [rbp-20h] BYREF
  char v10; // [rsp+60h] [rbp+18h] BYREF
  int v11; // [rsp+68h] [rbp+20h] BYREF

  v1 = 0;
  v2 = 1;
  v3 = 1;
  winrt::Windows::Networking::Connectivity::NetworkInformation::GetInternetConnectionProfile();
  if ( v9[0] )
  {
    if ( (unsigned int)winrt::impl::consume_Windows_Networking_Connectivity_IConnectionProfile<winrt::Windows::Networking::Connectivity::IConnectionProfile>::GetNetworkConnectivityLevel(v9) == 3 )
    {
      v1 = 1;
      winrt::impl::consume_Windows_Networking_Connectivity_IConnectionProfile<winrt::Windows::Networking::Connectivity::IConnectionProfile>::GetConnectionCost(
        v9,
        &v8);
      if ( v8 )
      {
        v11 = 0;
        v4 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v8 + 48LL))(v8, &v11);
        if ( v4 < 0 )
          winrt::throw_hresult((unsigned int)v4);
        v10 = 0;
        v5 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v8 + 56LL))(v8, &v10);
        if ( v5 < 0 )
          winrt::throw_hresult((unsigned int)v5);
        if ( v10 )
          goto LABEL_11;
        v10 = 0;
        v6 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v8 + 64LL))(v8, &v10);
        if ( v6 < 0 )
          winrt::throw_hresult((unsigned int)v6);
        if ( v10 || (unsigned int)(v11 - 2) <= 1 )
LABEL_11:
          v3 = 1;
        else
          v3 = 0;
      }
      winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)&v8);
    }
    else
    {
      v1 = 0;
    }
  }
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)v9);
  if ( !v1 || v3 )
    return 0;
  return v2;
}
