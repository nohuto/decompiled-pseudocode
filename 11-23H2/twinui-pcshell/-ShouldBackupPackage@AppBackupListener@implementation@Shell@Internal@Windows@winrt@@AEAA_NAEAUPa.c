/*
 * XREFs of ?ShouldBackupPackage@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAA_NAEAUPackageId@ApplicationModel@56@@Z @ 0x1806F5CE0
 * Callers:
 *     ?HandlePackageInstallEvent@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXUPackageCatalog@ApplicationModel@56@UPackageInstallingEventArgs@856@@Z @ 0x1806F3700 (-HandlePackageInstallEvent@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXU.c)
 *     ?HandlePackageUninstallEvent@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXUPackageCatalog@ApplicationModel@56@UPackageUninstallingEventArgs@856@@Z @ 0x1806F3900 (-HandlePackageUninstallEvent@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAA.c)
 *     ?HandlePackageUpdateEvent@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXUPackageCatalog@ApplicationModel@56@UPackageUpdatingEventArgs@856@@Z @ 0x1806F3C20 (-HandlePackageUpdateEvent@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXUP.c)
 * Callees:
 *     ??8winrt@@YA_NAEBUhstring@0@0@Z @ 0x18004CF30 (--8winrt@@YA_NAEBUhstring@0@0@Z.c)
 *     ?create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z @ 0x1800B4460 (-create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x1800D5B1C (--8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     ?Id@?$consume_Windows_ApplicationModel_IPackage@UIPackage@ApplicationModel@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18019F7F8 (-Id@-$consume_Windows_ApplicationModel_IPackage@UIPackage@ApplicationModel@Windows@winrt@@@impl@.c)
 *     ?FamilyName@?$consume_Windows_ApplicationModel_IPackageId@UIPackageId@ApplicationModel@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1801AA170 (-FamilyName@-$consume_Windows_ApplicationModel_IPackageId@UIPackageId@ApplicationModel@Windows@w.c)
 *     ??$ActivateInstance@UPackageManager@Deployment@Management@Windows@winrt@@@IActivationFactory@Foundation@Windows@winrt@@QEBA?AUPackageManager@Deployment@Management@23@XZ @ 0x180461D1C (--$ActivateInstance@UPackageManager@Deployment@Management@Windows@winrt@@@IActivationFactory@Fou.c)
 *     ??$call@P6A?AUPackageManager@Deployment@Management@Windows@winrt@@AEBUIActivationFactory@Foundation@45@@Z@?$factory_cache_entry@UPackageManager@Deployment@Management@Windows@winrt@@UIActivationFactory@Foundation@45@@impl@winrt@@QEAA?A_P$$QEAP6A?AUPackageManager@Deployment@Management@Windows@2@AEBUIActivationFactory@Foundation@62@@Z@Z @ 0x180462CA0 (--$call@P6A-AUPackageManager@Deployment@Management@Windows@winrt@@AEBUIActivationFactory@Foundat.c)
 *     ?Current@?$consume_Windows_Foundation_Collections_IIterator@U?$IIterator@UPackage@ApplicationModel@Windows@winrt@@@Collections@Foundation@Windows@winrt@@UPackage@ApplicationModel@45@@impl@winrt@@QEBA@XZ @ 0x180466FCC (-Current@-$consume_Windows_Foundation_Collections_IIterator@U-$IIterator@UPackage@ApplicationMod.c)
 *     ?First@?$consume_Windows_Foundation_Collections_IIterable@U?$IIterable@UPackage@ApplicationModel@Windows@winrt@@@Collections@Foundation@Windows@winrt@@UPackage@ApplicationModel@45@@impl@winrt@@QEBA@XZ @ 0x18046714C (-First@-$consume_Windows_Foundation_Collections_IIterable@U-$IIterable@UPackage@ApplicationModel.c)
 *     ?HasCurrent@?$consume_Windows_Foundation_Collections_IIterator@U?$IIterator@UPackage@ApplicationModel@Windows@winrt@@@Collections@Foundation@Windows@winrt@@UPackage@ApplicationModel@45@@impl@winrt@@QEBA@XZ @ 0x180468144 (-HasCurrent@-$consume_Windows_Foundation_Collections_IIterator@U-$IIterator@UPackage@Application.c)
 *     ??E?$consume_Windows_Foundation_Collections_IIterator@U?$IIterator@UPackage@ApplicationModel@Windows@winrt@@@Collections@Foundation@Windows@winrt@@UPackage@ApplicationModel@45@@impl@winrt@@QEAA@XZ @ 0x1806953EC (--E-$consume_Windows_Foundation_Collections_IIterator@U-$IIterator@UPackage@ApplicationModel@Win.c)
 *     ?FullName@?$consume_Windows_ApplicationModel_IPackageId@UIPackageId@ApplicationModel@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180695DC8 (-FullName@-$consume_Windows_ApplicationModel_IPackageId@UIPackageId@ApplicationModel@Windows@win.c)
 *     ?FindPackagesForUserWithPackageTypes@?$consume_Windows_Management_Deployment_IPackageManager2@UPackageManager@Deployment@Management@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@0AEBW4PackageTypes@Deployment@Management@Windows@3@@Z @ 0x1806F2770 (-FindPackagesForUserWithPackageTypes@-$consume_Windows_Management_Deployment_IPackageManager2@UP.c)
 */

// Hidden C++ exception states: #wind=11
char __fastcall winrt::Windows::Internal::Shell::implementation::AppBackupListener::ShouldBackupPackage(
        winrt::Windows::Internal::Shell::implementation::AppBackupListener *this,
        struct winrt::Windows::ApplicationModel::PackageId *a2)
{
  const struct winrt::Windows::Foundation::IActivationFactory *(__fastcall *v3)(const struct winrt::Windows::Foundation::IActivationFactory *, __int64); // rdi
  __int64 *v4; // rax
  _QWORD *v5; // rax
  __int64 v6; // r8
  char v7; // si
  char result; // al
  const struct winrt::Windows::Foundation::IActivationFactory *(__fastcall *v9)(const struct winrt::Windows::Foundation::IActivationFactory *, __int64); // [rsp+30h] [rbp-98h] BYREF
  __int64 v10; // [rsp+38h] [rbp-90h] BYREF
  volatile signed __int32 *v11; // [rsp+40h] [rbp-88h] BYREF
  __int64 v12; // [rsp+48h] [rbp-80h] BYREF
  volatile signed __int32 *v13; // [rsp+50h] [rbp-78h] BYREF
  volatile signed __int32 *v14[2]; // [rsp+58h] [rbp-70h] BYREF
  _QWORD v15[4]; // [rsp+68h] [rbp-60h] BYREF
  _QWORD v16[8]; // [rsp+88h] [rbp-40h] BYREF
  const struct winrt::Windows::Foundation::IActivationFactory *(__fastcall *v17)(const struct winrt::Windows::Foundation::IActivationFactory *, __int64); // [rsp+D0h] [rbp+8h] BYREF
  __int64 v18; // [rsp+E0h] [rbp+18h] BYREF
  __int64 v19; // [rsp+E8h] [rbp+20h] BYREF

  v17 = (const struct winrt::Windows::Foundation::IActivationFactory *(__fastcall *)(const struct winrt::Windows::Foundation::IActivationFactory *, __int64))this;
  try
  {
    v14[1] = (volatile signed __int32 *)&qword_1809911F8;
    _InterlockedIncrement64(&qword_1809911F8);
    if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Management::Deployment::PackageManager,winrt::Windows::Foundation::IActivationFactory> )
    {
      winrt::Windows::Foundation::IActivationFactory::ActivateInstance<winrt::Windows::Management::Deployment::PackageManager>(
        &winrt::impl::factory_cache_entry_v<winrt::Windows::Management::Deployment::PackageManager,winrt::Windows::Foundation::IActivationFactory>,
        &v18);
      _InterlockedDecrement64(&qword_1809911F8);
    }
    else
    {
      _InterlockedDecrement64(&qword_1809911F8);
      v17 = _lambda_6fd1ee5d6179fa7e6cafc7c7248cd72e_::_lambda_invoker_cdecl_;
      winrt::impl::factory_cache_entry<winrt::Windows::Management::Deployment::PackageManager,winrt::Windows::Foundation::IActivationFactory>::call<winrt::Windows::Management::Deployment::PackageManager (*)(winrt::Windows::Foundation::IActivationFactory const &)>(
        (void (__fastcall ***)(_QWORD, __int64 *, __int64 *))this,
        (__int64)&v18,
        (void (__fastcall **)(__int64, __int64 *))&v17);
    }
    LODWORD(v17) = 1;
    v15[0] = *winrt::impl::consume_Windows_ApplicationModel_IPackageId<winrt::Windows::ApplicationModel::IPackageId>::FamilyName(
                (__int64 *)a2,
                &v13);
    winrt::param::hstring::create_string_reference((winrt::param::hstring *)v16, &LocaleName, 0);
    winrt::impl::consume_Windows_Management_Deployment_IPackageManager2<winrt::Windows::Management::Deployment::PackageManager>::FindPackagesForUserWithPackageTypes(
      &v18,
      &v10,
      v16,
      v15,
      (unsigned int *)&v17);
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v13);
    winrt::impl::consume_Windows_ApplicationModel_IPackageId<winrt::Windows::ApplicationModel::IPackageId>::FullName(
      (__int64 *)a2,
      &v11);
    winrt::impl::consume_Windows_Foundation_Collections_IIterable<winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::ApplicationModel::Package>,winrt::Windows::ApplicationModel::Package>::First(
      &v10,
      &v9);
    if ( winrt::impl::consume_Windows_Foundation_Collections_IIterator<winrt::Windows::Foundation::Collections::IIterator<winrt::Windows::ApplicationModel::Package>,winrt::Windows::ApplicationModel::Package>::HasCurrent((__int64 *)&v9) )
    {
      v3 = v9;
      v17 = v9;
    }
    else
    {
      v3 = 0LL;
      v17 = 0LL;
      if ( v9 )
        winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v9);
    }
    v9 = 0LL;
    while ( !winrt::Windows::Foundation::operator==((void (__fastcall ****)(_QWORD, __int64 *, __int64 *))&v17, &v9) )
    {
      winrt::impl::consume_Windows_Foundation_Collections_IIterator<winrt::Windows::Foundation::Collections::IIterator<winrt::Windows::ApplicationModel::Package>,winrt::Windows::ApplicationModel::Package>::Current(
        &v17,
        &v19);
      v4 = winrt::impl::consume_Windows_ApplicationModel_IPackage<winrt::Windows::ApplicationModel::IPackage>::Id(
             &v19,
             &v12);
      v5 = winrt::impl::consume_Windows_ApplicationModel_IPackageId<winrt::Windows::ApplicationModel::IPackageId>::FullName(
             v4,
             v14);
      v7 = winrt::operator==((__int64)v5, (__int64)&v11, v6);
      winrt::handle_type<winrt::impl::hstring_traits>::close(v14);
      if ( v12 )
        winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v12);
      if ( v7 )
      {
        if ( v19 )
          winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v19);
        if ( v3 )
          winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v17);
        winrt::handle_type<winrt::impl::hstring_traits>::close(&v11);
        if ( v10 )
          winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v10);
        if ( v18 )
          winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v18);
        return 1;
      }
      if ( v19 )
        winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v19);
      winrt::impl::consume_Windows_Foundation_Collections_IIterator<winrt::Windows::Foundation::Collections::IIterator<winrt::Windows::ApplicationModel::Package>,winrt::Windows::ApplicationModel::Package>::operator++((winrt::Windows::Foundation::IUnknown *)&v17);
      v3 = v17;
    }
    if ( v3 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v17);
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v11);
    if ( v10 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v10);
    if ( v18 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v18);
    result = 0;
  }
  catch ( ... )
  {
    return 0;
  }
  return result;
}
