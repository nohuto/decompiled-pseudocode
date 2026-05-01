/*
 * XREFs of _lambda_b77cff33db7c166167279fbdb5843ce7_::operator() @ 0x1800D63E0
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::ApplicationModel::PackageCatalog_winrt::Windows::ApplicationModel::PackageUninstallingEventArgs___lambda_b77cff33db7c166167279fbdb5843ce7___::Invoke @ 0x180194260 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows--ApplicationM.c)
 * Callees:
 *     ?Size@?$consume_Windows_Foundation_Collections_IVectorView@U?$IVectorView@UWindowTabView@Shell@UI@Internal@Windows@winrt@@@Collections@Foundation@Windows@winrt@@UWindowTabView@Shell@UI@Internal@45@@impl@winrt@@QEBA@XZ @ 0x180035110 (-Size@-$consume_Windows_Foundation_Collections_IVectorView@U-$IVectorView@UWindowTabView@Shell@U.c)
 *     ??8winrt@@YA_NAEBUhstring@0@0@Z @ 0x18004CF30 (--8winrt@@YA_NAEBUhstring@0@0@Z.c)
 *     ?IsRemoteDesktopProviderApp@RemoteDesktopProviderPackageUninstallHandler@implementation@Shell@Internal@Windows@winrt@@AEAA_NAEBUhstring@6@@Z @ 0x1800B522C (-IsRemoteDesktopProviderApp@RemoteDesktopProviderPackageUninstallHandler@implementation@Shell@In.c)
 *     ??Hwinrt@@YA?AUhstring@0@AEBU10@0@Z @ 0x1800B54E0 (--Hwinrt@@YA-AUhstring@0@AEBU10@0@Z.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x1800B6CE4 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?Package@?$consume_Windows_ApplicationModel_IPackageUninstallingEventArgs@UIPackageUninstallingEventArgs@ApplicationModel@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18019F7A4 (-Package@-$consume_Windows_ApplicationModel_IPackageUninstallingEventArgs@UIPackageUninstallingE.c)
 *     ?Id@?$consume_Windows_ApplicationModel_IPackage@UIPackage@ApplicationModel@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18019F7F8 (-Id@-$consume_Windows_ApplicationModel_IPackage@UIPackage@ApplicationModel@Windows@winrt@@@impl@.c)
 *     ?FamilyName@?$consume_Windows_ApplicationModel_IPackageId@UIPackageId@ApplicationModel@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1801AA170 (-FamilyName@-$consume_Windows_ApplicationModel_IPackageId@UIPackageId@ApplicationModel@Windows@w.c)
 *     ?IsComplete@?$consume_Windows_ApplicationModel_IPackageUninstallingEventArgs@UIPackageUninstallingEventArgs@ApplicationModel@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1801B0894 (-IsComplete@-$consume_Windows_ApplicationModel_IPackageUninstallingEventArgs@UIPackageUninstalli.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ?PackageFamilyName@?$consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallItem@UIAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180697754 (-PackageFamilyName@-$consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallIt.c)
 *     ?SystemId@?$consume_Windows_Internal_Shell_IRegistrationData@UIRegistrationData@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1807192A8 (-SystemId@-$consume_Windows_Internal_Shell_IRegistrationData@UIRegistrationData@Shell@Internal@W.c)
 *     ?GetAt@?$consume_Windows_Foundation_Collections_IVectorView@U?$IVectorView@URegistrationData@Shell@Internal@Windows@winrt@@@Collections@Foundation@Windows@winrt@@URegistrationData@Shell@Internal@45@@impl@winrt@@QEBA@I@Z @ 0x180721620 (-GetAt@-$consume_Windows_Foundation_Collections_IVectorView@U-$IVectorView@URegistrationData@She.c)
 *     ?UpdateRegistrationData@RemoteSystemProvider@implementation@Shell@Internal@Windows@winrt@@SAXAEBURegistrationData@3456@AEB_N@Z @ 0x180725ECC (-UpdateRegistrationData@RemoteSystemProvider@implementation@Shell@Internal@Windows@winrt@@SAXAEB.c)
 *     ??$make@URegistrationData@implementation@Shell@Internal@Windows@winrt@@Uhstring@6@AEAU76@AEAY00$$CBG@winrt@@YA?A_P$$QEAUhstring@0@AEAU10@AEAY00$$CBG@Z @ 0x18072653C (--$make@URegistrationData@implementation@Shell@Internal@Windows@winrt@@Uhstring@6@AEAU76@AEAY00$.c)
 */

// Hidden C++ exception states: #wind=13
void __fastcall lambda_b77cff33db7c166167279fbdb5843ce7_::operator()(
        __int64 a1,
        winrt::Windows::Foundation::IUnknown *a2,
        winrt::Windows::Foundation::IUnknown *a3)
{
  __int64 v5; // rax
  __int64 v6; // rax
  winrt::Windows::Internal::Shell::implementation::RemoteDesktopProviderPackageUninstallHandler *v7; // rcx
  winrt::hstring *v8; // rax
  const WCHAR *v9; // rax
  int v10; // eax
  bool v11; // sf
  int v12; // eax
  __int64 v13; // r15
  unsigned int v14; // esi
  int v15; // r12d
  __int64 v16; // rax
  __int64 v17; // r8
  char v18; // bl
  __int64 v19; // rax
  const struct winrt::Windows::Internal::Shell::RegistrationData *v20; // rax
  __int64 v21; // [rsp+20h] [rbp-30h] BYREF
  __int64 v22; // [rsp+28h] [rbp-28h] BYREF
  __int64 v23; // [rsp+30h] [rbp-20h] BYREF
  volatile signed __int32 *v24; // [rsp+38h] [rbp-18h] BYREF
  volatile signed __int32 *v25; // [rsp+40h] [rbp-10h] BYREF
  volatile signed __int32 *v26; // [rsp+48h] [rbp-8h] BYREF
  __int64 v27; // [rsp+90h] [rbp+40h] BYREF
  winrt::Windows::Foundation::IUnknown *v28; // [rsp+98h] [rbp+48h]
  winrt::Windows::Foundation::IUnknown *v29; // [rsp+A0h] [rbp+50h]
  volatile signed __int32 *v30; // [rsp+A8h] [rbp+58h] BYREF

  v29 = a3;
  v28 = a2;
  v27 = a1;
  if ( (unsigned __int8)winrt::impl::consume_Windows_ApplicationModel_IPackageUninstallingEventArgs<winrt::Windows::ApplicationModel::IPackageUninstallingEventArgs>::IsComplete(a3) )
  {
    v5 = winrt::impl::consume_Windows_ApplicationModel_IPackageUninstallingEventArgs<winrt::Windows::ApplicationModel::IPackageUninstallingEventArgs>::Package(
           a3,
           &v22);
    v6 = winrt::impl::consume_Windows_ApplicationModel_IPackage<winrt::Windows::ApplicationModel::IPackage>::Id(
           v5,
           &v27);
    winrt::impl::consume_Windows_ApplicationModel_IPackageId<winrt::Windows::ApplicationModel::IPackageId>::FamilyName(
      v6,
      &v30);
    if ( v27 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v27);
    if ( v22 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v22);
    if ( winrt::Windows::Internal::Shell::implementation::RemoteDesktopProviderPackageUninstallHandler::IsRemoteDesktopProviderApp(
           v7,
           (const struct winrt::hstring *)&v30) )
    {
      v8 = (winrt::hstring *)winrt::operator+((__int64)&v24, (__int64)&c_remoteSystemAvailabilityRegPath, (__int64)&v30);
      v9 = winrt::hstring::c_str(v8);
      v10 = RegDeleteTreeW(HKEY_CURRENT_USER, v9);
      v11 = v10 < 0;
      if ( v10 > 0 )
      {
        v10 = (unsigned __int16)v10 | 0x80070000;
        v11 = v10 < 0;
      }
      if ( v11 )
        winrt::throw_hresult((unsigned int)v10);
      winrt::handle_type<winrt::impl::hstring_traits>::close(&v24);
      v23 = 0LL;
      v12 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)winrt::Windows::Internal::Shell::implementation::RemoteSystemProvider::m_registrationData
                                                          + 64LL))(
              winrt::Windows::Internal::Shell::implementation::RemoteSystemProvider::m_registrationData,
              &v23);
      if ( v12 < 0 )
        winrt::throw_hresult((unsigned int)v12);
      v13 = v23;
      v22 = v23;
      v14 = 0;
      v15 = winrt::impl::consume_Windows_Foundation_Collections_IVectorView<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Internal::UI::Shell::WindowTabView>,winrt::Windows::Internal::UI::Shell::WindowTabView>::Size(&v22);
      while ( v14 != v15 )
      {
        winrt::impl::consume_Windows_Foundation_Collections_IVectorView<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Internal::Shell::RegistrationData>,winrt::Windows::Internal::Shell::RegistrationData>::GetAt(
          &v22,
          &v21,
          v14);
        v16 = winrt::impl::consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallItem<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem>::PackageFamilyName(
                &v21,
                &v25);
        v18 = winrt::operator==(v16, (__int64)&v30, v17);
        winrt::handle_type<winrt::impl::hstring_traits>::close(&v25);
        if ( v18 )
        {
          LOBYTE(v27) = 0;
          v19 = winrt::impl::consume_Windows_Internal_Shell_IRegistrationData<winrt::Windows::Internal::Shell::IRegistrationData>::SystemId(
                  &v21,
                  &v26);
          v20 = (const struct winrt::Windows::Internal::Shell::RegistrationData *)winrt::make<winrt::Windows::Internal::Shell::implementation::RegistrationData,winrt::hstring,winrt::hstring &,unsigned short const (&)[1]>(
                                                                                    &v24,
                                                                                    v19,
                                                                                    &v30);
          winrt::Windows::Internal::Shell::implementation::RemoteSystemProvider::UpdateRegistrationData(
            v20,
            (const bool *)&v27);
          if ( v24 )
            winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v24);
          winrt::handle_type<winrt::impl::hstring_traits>::close(&v26);
        }
        if ( v21 )
          winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v21);
        ++v14;
      }
      if ( v13 )
        winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v22);
    }
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v30);
  }
  if ( *(_QWORD *)a2 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref(a2);
  if ( *(_QWORD *)a3 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref(a3);
}
