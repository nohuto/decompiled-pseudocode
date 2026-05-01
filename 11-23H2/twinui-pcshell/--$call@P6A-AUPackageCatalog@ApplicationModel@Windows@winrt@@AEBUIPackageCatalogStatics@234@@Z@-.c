/*
 * XREFs of ??$call@P6A?AUPackageCatalog@ApplicationModel@Windows@winrt@@AEBUIPackageCatalogStatics@234@@Z@?$factory_cache_entry@UPackageCatalog@ApplicationModel@Windows@winrt@@UIPackageCatalogStatics@234@@impl@winrt@@QEAA?A_P$$QEAP6A?AUPackageCatalog@ApplicationModel@Windows@2@AEBUIPackageCatalogStatics@452@@Z@Z @ 0x180088FFC
 * Callers:
 *     ??0AppBackupListener@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x180089790 (--0AppBackupListener@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??0RemoteDesktopProviderPackageUninstallHandler@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x1800899F0 (--0RemoteDesktopProviderPackageUninstallHandler@implementation@Shell@Internal@Windows@winrt@@QEA.c)
 *     ?subscribe_to_services@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@@Z @ 0x1800A3070 (-subscribe_to_services@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@UEAAXPE.c)
 * Callees:
 *     ??$get_activation_factory@UIPackageCatalogStatics@ApplicationModel@Windows@winrt@@@winrt@@YA?AUIPackageCatalogStatics@ApplicationModel@Windows@0@AEBUhstring@param@0@@Z @ 0x180089114 (--$get_activation_factory@UIPackageCatalogStatics@ApplicationModel@Windows@winrt@@@winrt@@YA-AUI.c)
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800B1FC4 (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     ?create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z @ 0x1800B4460 (-create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x1801CEFB9 (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall winrt::impl::factory_cache_entry<winrt::Windows::ApplicationModel::PackageCatalog,winrt::Windows::ApplicationModel::IPackageCatalogStatics>::call<winrt::Windows::ApplicationModel::PackageCatalog (*)(winrt::Windows::ApplicationModel::IPackageCatalogStatics const &)>(
        void (__fastcall ***a1)(_QWORD, __int64 *, __int64 *),
        __int64 a2,
        void (__fastcall **a3)(__int64, __int64 *))
{
  _QWORD v6[2]; // [rsp+28h] [rbp-38h] BYREF
  _BYTE v7[40]; // [rsp+38h] [rbp-28h] BYREF
  void (__fastcall ***v8)(_QWORD, __int64 *, __int64 *); // [rsp+70h] [rbp+10h] BYREF
  __int64 v9; // [rsp+88h] [rbp+28h] BYREF

  v8 = a1;
  winrt::param::hstring::create_string_reference(
    (winrt::param::hstring *)v7,
    L"Windows.ApplicationModel.PackageCatalog",
    0x27uLL);
  winrt::get_activation_factory<winrt::Windows::ApplicationModel::IPackageCatalogStatics>(&v8, v7);
  if ( v8 && (v9 = 0LL, (**v8)(v8, &winrt::impl::guid_v<winrt::impl::IAgileObject>, &v9), (v6[0] = v9) != 0LL) )
  {
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(v6);
    v6[1] = &qword_18098DE08;
    _InterlockedIncrement64(&qword_18098DE08);
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::Windows::ApplicationModel::PackageCatalog,winrt::Windows::ApplicationModel::IPackageCatalogStatics>,
            (signed __int64)v8,
            0LL) )
    {
      v8 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_18098DE10);
    }
    (*a3)(
      a2,
      &winrt::impl::factory_cache_entry_v<winrt::Windows::ApplicationModel::PackageCatalog,winrt::Windows::ApplicationModel::IPackageCatalogStatics>);
    _InterlockedDecrement64(&qword_18098DE08);
  }
  else
  {
    (*a3)(a2, (__int64 *)&v8);
  }
  if ( v8 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v8);
  return a2;
}
