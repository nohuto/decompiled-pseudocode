/*
 * XREFs of ?HandlePackageInstallEvent@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXUPackageCatalog@ApplicationModel@56@UPackageInstallingEventArgs@856@@Z @ 0x1806F3700
 * Callers:
 *     <none>
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x1800D20DC (--0hstring@winrt@@QEAA@PEBG@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z @ 0x1800DBAC0 (-duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z.c)
 *     ?Id@?$consume_Windows_ApplicationModel_IPackage@UIPackage@ApplicationModel@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18019F7F8 (-Id@-$consume_Windows_ApplicationModel_IPackage@UIPackage@ApplicationModel@Windows@winrt@@@impl@.c)
 *     ?FamilyName@?$consume_Windows_ApplicationModel_IPackageId@UIPackageId@ApplicationModel@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1801AA170 (-FamilyName@-$consume_Windows_ApplicationModel_IPackageId@UIPackageId@ApplicationModel@Windows@w.c)
 *     ?IsComplete@?$consume_Windows_ApplicationModel_IPackageInstallingEventArgs@UIPackageInstallingEventArgs@ApplicationModel@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1806E2DC4 (-IsComplete@-$consume_Windows_ApplicationModel_IPackageInstallingEventArgs@UIPackageInstallingEv.c)
 *     ?Package@?$consume_Windows_ApplicationModel_IPackageInstallingEventArgs@UIPackageInstallingEventArgs@ApplicationModel@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1806E32BC (-Package@-$consume_Windows_ApplicationModel_IPackageInstallingEventArgs@UIPackageInstallingEvent.c)
 *     ?HandlePackageEventHelper@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXUhstring@6@0@Z @ 0x1806F362C (-HandlePackageEventHelper@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXUh.c)
 *     ?ShouldBackupPackage@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAA_NAEAUPackageId@ApplicationModel@56@@Z @ 0x1806F5CE0 (-ShouldBackupPackage@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAA_NAEAUPa.c)
 */

// Hidden C++ exception states: #wind=7
void __fastcall winrt::Windows::Internal::Shell::implementation::AppBackupListener::HandlePackageInstallEvent(
        __int64 a1,
        winrt::Windows::Foundation::IUnknown *a2,
        __int64 *a3)
{
  __int64 *v3; // rsi
  winrt::Windows::Foundation::IUnknown *v4; // r14
  __int64 *v6; // rax
  volatile signed __int32 **v7; // rax
  volatile signed __int32 *v8; // rbx
  winrt::Windows::Internal::Shell::implementation::AppBackupListener *v9; // rcx
  winrt::impl **v10; // r15
  struct winrt::impl::hstring_header *v11; // rdx
  unsigned int v12; // r8d
  _DWORD *v13; // rax
  __int64 v14; // rcx
  volatile signed __int32 *v15; // [rsp+20h] [rbp-58h] BYREF
  __int64 v16; // [rsp+28h] [rbp-50h] BYREF
  winrt::impl *v17; // [rsp+30h] [rbp-48h] BYREF
  __int64 v18[8]; // [rsp+38h] [rbp-40h] BYREF
  __int64 v23; // [rsp+98h] [rbp+20h] BYREF

  v3 = a3;
  v4 = a2;
  winrt::hstring::hstring((winrt::hstring *)&v15, &LocaleName);
  try
  {
    v6 = winrt::impl::consume_Windows_ApplicationModel_IPackageInstallingEventArgs<winrt::Windows::ApplicationModel::IPackageInstallingEventArgs>::Package(
           v3,
           &v16);
    winrt::impl::consume_Windows_ApplicationModel_IPackage<winrt::Windows::ApplicationModel::IPackage>::Id(v6, &v23);
    if ( v16 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v16);
    v7 = (volatile signed __int32 **)winrt::impl::consume_Windows_ApplicationModel_IPackageId<winrt::Windows::ApplicationModel::IPackageId>::FamilyName(
                                       &v23,
                                       &v17);
    if ( &v15 == v7 )
    {
      v8 = v15;
    }
    else
    {
      v8 = *v7;
      *v7 = 0LL;
      winrt::handle_type<winrt::impl::hstring_traits>::close(&v15);
      winrt::handle_type<winrt::impl::hstring_traits>::close(&v15);
      v15 = v8;
    }
    winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v17);
    if ( winrt::impl::consume_Windows_ApplicationModel_IPackageInstallingEventArgs<winrt::Windows::ApplicationModel::IPackageInstallingEventArgs>::IsComplete(v3)
      && winrt::Windows::Internal::Shell::implementation::AppBackupListener::ShouldBackupPackage(
           v9,
           (struct winrt::Windows::ApplicationModel::PackageId *)&v23) )
    {
      v18[1] = (__int64)v18;
      v10 = (winrt::impl **)winrt::hstring::hstring((winrt::hstring *)v18, L"Install");
      v17 = winrt::impl::duplicate_hstring((winrt::impl *)v8, v11, v12);
      winrt::Windows::Internal::Shell::implementation::AppBackupListener::HandlePackageEventHelper(a1, &v17, v10);
    }
    if ( v23 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v23);
  }
  catch ( ... )
  {
    v18[0] = (__int64)winrt::hstring::c_str((winrt::hstring *)&v15);
    v13 = winrt::to_hresult(&v23);
    CAppBackupListenerTelemetry::Callback_Error<unsigned short const (&)[54],winrt::hresult,unsigned short const *>(
      v14,
      v13,
      v18);
    v3 = a3;
    v4 = a2;
  }
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v15);
  if ( *(_QWORD *)v4 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref(v4);
  if ( *v3 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)v3);
}
