/*
 * XREFs of ?HandlePackageUpdateEvent@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXUPackageCatalog@ApplicationModel@56@UPackageUpdatingEventArgs@856@@Z @ 0x1806F3C20
 * Callers:
 *     <none>
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x1800D20DC (--0hstring@winrt@@QEAA@PEBG@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z @ 0x1800DBAC0 (-duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z.c)
 *     ?Id@?$consume_Windows_ApplicationModel_IPackage@UIPackage@ApplicationModel@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18019F7F8 (-Id@-$consume_Windows_ApplicationModel_IPackage@UIPackage@ApplicationModel@Windows@winrt@@@impl@.c)
 *     ?FamilyName@?$consume_Windows_ApplicationModel_IPackageId@UIPackageId@ApplicationModel@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1801AA170 (-FamilyName@-$consume_Windows_ApplicationModel_IPackageId@UIPackageId@ApplicationModel@Windows@w.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ?HandlePackageEventHelper@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXUhstring@6@0@Z @ 0x1806F362C (-HandlePackageEventHelper@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXUh.c)
 *     ?ShouldBackupPackage@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAA_NAEAUPackageId@ApplicationModel@56@@Z @ 0x1806F5CE0 (-ShouldBackupPackage@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAA_NAEAUPa.c)
 *     ?TargetPackage@?$consume_Windows_ApplicationModel_IPackageUpdatingEventArgs@UIPackageUpdatingEventArgs@ApplicationModel@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1806F6030 (-TargetPackage@-$consume_Windows_ApplicationModel_IPackageUpdatingEventArgs@UIPackageUpdatingEve.c)
 */

// Hidden C++ exception states: #wind=7
void __fastcall winrt::Windows::Internal::Shell::implementation::AppBackupListener::HandlePackageUpdateEvent(
        __int64 a1,
        winrt::Windows::Foundation::IUnknown *a2,
        winrt::Windows::Foundation::IUnknown *a3)
{
  winrt::Windows::Foundation::IUnknown *v3; // rsi
  winrt::Windows::Foundation::IUnknown *v4; // r14
  __int64 *v6; // rax
  volatile signed __int32 **v7; // rax
  volatile signed __int32 *v8; // rbx
  signed int v9; // eax
  winrt::Windows::Internal::Shell::implementation::AppBackupListener *v10; // rcx
  winrt::impl **v11; // r15
  struct winrt::impl::hstring_header *v12; // rdx
  unsigned int v13; // r8d
  _DWORD *v14; // rax
  __int64 v15; // rcx
  volatile signed __int32 *v16; // [rsp+20h] [rbp-58h] BYREF
  __int64 v17; // [rsp+28h] [rbp-50h] BYREF
  __int64 v18; // [rsp+30h] [rbp-48h] BYREF
  __int64 v19[8]; // [rsp+38h] [rbp-40h] BYREF
  winrt::impl *v24; // [rsp+98h] [rbp+20h] BYREF

  v3 = a3;
  v4 = a2;
  winrt::hstring::hstring((winrt::hstring *)&v16, &LocaleName);
  try
  {
    v6 = (__int64 *)winrt::impl::consume_Windows_ApplicationModel_IPackageUpdatingEventArgs<winrt::Windows::ApplicationModel::IPackageUpdatingEventArgs>::TargetPackage(
                      v3,
                      &v18);
    winrt::impl::consume_Windows_ApplicationModel_IPackage<winrt::Windows::ApplicationModel::IPackage>::Id(v6, &v17);
    if ( v18 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v18);
    v7 = (volatile signed __int32 **)winrt::impl::consume_Windows_ApplicationModel_IPackageId<winrt::Windows::ApplicationModel::IPackageId>::FamilyName(
                                       &v17,
                                       &v24);
    if ( &v16 == v7 )
    {
      v8 = v16;
    }
    else
    {
      v8 = *v7;
      *v7 = 0LL;
      winrt::handle_type<winrt::impl::hstring_traits>::close(&v16);
      winrt::handle_type<winrt::impl::hstring_traits>::close(&v16);
      v16 = v8;
    }
    winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v24);
    LOBYTE(v24) = 0;
    v9 = (*(__int64 (__fastcall **)(_QWORD, winrt::impl **))(**(_QWORD **)v3 + 80LL))(*(_QWORD *)v3, &v24);
    if ( v9 < 0 )
      winrt::throw_hresult(v9);
    if ( (_BYTE)v24
      && winrt::Windows::Internal::Shell::implementation::AppBackupListener::ShouldBackupPackage(
           v10,
           (struct winrt::Windows::ApplicationModel::PackageId *)&v17) )
    {
      v19[1] = (__int64)v19;
      v11 = (winrt::impl **)winrt::hstring::hstring((winrt::hstring *)v19, L"Update");
      v24 = winrt::impl::duplicate_hstring((winrt::impl *)v8, v12, v13);
      winrt::Windows::Internal::Shell::implementation::AppBackupListener::HandlePackageEventHelper(a1, &v24, v11);
    }
    if ( v17 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v17);
  }
  catch ( ... )
  {
    v19[0] = (__int64)winrt::hstring::c_str((winrt::hstring *)&v16);
    v14 = winrt::to_hresult(&v24);
    CAppBackupListenerTelemetry::Callback_Error<unsigned short const (&)[53],winrt::hresult,unsigned short const *>(
      v15,
      v14,
      v19);
    v3 = a3;
    v4 = a2;
  }
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v16);
  if ( *(_QWORD *)v4 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref(v4);
  if ( *(_QWORD *)v3 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref(v3);
}
