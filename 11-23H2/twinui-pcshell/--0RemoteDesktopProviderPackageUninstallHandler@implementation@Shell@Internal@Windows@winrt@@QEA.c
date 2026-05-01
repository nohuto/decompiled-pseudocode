/*
 * XREFs of ??0RemoteDesktopProviderPackageUninstallHandler@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x1800899F0
 * Callers:
 *     ??$make_shared@URemoteDesktopProviderPackageUninstallHandler@implementation@Shell@Internal@Windows@winrt@@$$V@std@@YA?AV?$shared_ptr@URemoteDesktopProviderPackageUninstallHandler@implementation@Shell@Internal@Windows@winrt@@@0@XZ @ 0x18008A9EC (--$make_shared@URemoteDesktopProviderPackageUninstallHandler@implementation@Shell@Internal@Windo.c)
 * Callees:
 *     ??$call@P6A?AUPackageCatalog@ApplicationModel@Windows@winrt@@AEBUIPackageCatalogStatics@234@@Z@?$factory_cache_entry@UPackageCatalog@ApplicationModel@Windows@winrt@@UIPackageCatalogStatics@234@@impl@winrt@@QEAA?A_P$$QEAP6A?AUPackageCatalog@ApplicationModel@Windows@2@AEBUIPackageCatalogStatics@452@@Z@Z @ 0x180088FFC (--$call@P6A-AUPackageCatalog@ApplicationModel@Windows@winrt@@AEBUIPackageCatalogStatics@234@@Z@-.c)
 *     ??4?$event_revoker@UIPackageCatalog@ApplicationModel@Windows@winrt@@$MP8type@?$abi@UIPackageCatalog@ApplicationModel@Windows@winrt@@X@impl@4@EAAHUevent_token@4@@_E1??_95674@$BGI@AA@impl@winrt@@QEAAAEAU012@$$QEAU012@@Z @ 0x180089B24 (--4-$event_revoker@UIPackageCatalog@ApplicationModel@Windows@winrt@@$MP8type@-$abi@UIPackageCata.c)
 *     ?PackageUninstalling@?$consume_Windows_ApplicationModel_IPackageCatalog@UIPackageCatalog@ApplicationModel@Windows@winrt@@@impl@winrt@@QEBA?AU?$event_revoker@UIPackageCatalog@ApplicationModel@Windows@winrt@@$MP8type@?$abi@UIPackageCatalog@ApplicationModel@Windows@winrt@@X@impl@4@EAAHUevent_token@4@@_E1??_95674@$BGI@AA@23@Uauto_revoke_t@3@AEBU?$TypedEventHandler@UPackageCatalog@ApplicationModel@Windows@winrt@@UPackageUninstallingEventArgs@234@@Foundation@Windows@3@@Z @ 0x180089B7C (-PackageUninstalling@-$consume_Windows_ApplicationModel_IPackageCatalog@UIPackageCatalog@Applica.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??1?$event_revoker@UIPackageCatalog@ApplicationModel@Windows@winrt@@$MP8type@?$abi@UIPackageCatalog@ApplicationModel@Windows@winrt@@X@impl@4@EAAHUevent_token@4@@_E1??_95674@$BGI@AA@impl@winrt@@QEAA@XZ @ 0x18012B330 (--1-$event_revoker@UIPackageCatalog@ApplicationModel@Windows@winrt@@$MP8type@-$abi@_ea_18012B330.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x180172F30 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=4
winrt::Windows::Internal::Shell::implementation::RemoteDesktopProviderPackageUninstallHandler *__fastcall winrt::Windows::Internal::Shell::implementation::RemoteDesktopProviderPackageUninstallHandler::RemoteDesktopProviderPackageUninstallHandler(
        winrt::Windows::Internal::Shell::implementation::RemoteDesktopProviderPackageUninstallHandler *this)
{
  int v2; // eax
  __int64 v3; // r8
  __int64 v4; // rax
  _QWORD *v6; // [rsp+20h] [rbp-20h] BYREF
  __int64 (__fastcall *v7)(const struct winrt::Windows::ApplicationModel::IPackageCatalogStatics *); // [rsp+28h] [rbp-18h] BYREF
  _BYTE v8[16]; // [rsp+30h] [rbp-10h] BYREF
  _QWORD *v9; // [rsp+68h] [rbp+28h]
  __int64 v10; // [rsp+70h] [rbp+30h] BYREF
  __int64 v11; // [rsp+78h] [rbp+38h] BYREF

  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  _InterlockedIncrement64(&qword_18098DE08);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::ApplicationModel::PackageCatalog,winrt::Windows::ApplicationModel::IPackageCatalogStatics> )
  {
    v11 = 0LL;
    v2 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)winrt::impl::factory_cache_entry_v<winrt::Windows::ApplicationModel::PackageCatalog,winrt::Windows::ApplicationModel::IPackageCatalogStatics>
                                                       + 56LL))(
           winrt::impl::factory_cache_entry_v<winrt::Windows::ApplicationModel::PackageCatalog,winrt::Windows::ApplicationModel::IPackageCatalogStatics>,
           &v11);
    if ( v2 < 0 )
      winrt::throw_hresult((unsigned int)v2);
    v10 = v11;
    _InterlockedDecrement64(&qword_18098DE08);
  }
  else
  {
    _InterlockedDecrement64(&qword_18098DE08);
    v7 = _lambda_a02d817213a1872483990d5857a507da_::_lambda_invoker_cdecl_;
    winrt::impl::factory_cache_entry<winrt::Windows::ApplicationModel::PackageCatalog,winrt::Windows::ApplicationModel::IPackageCatalogStatics>::call<winrt::Windows::ApplicationModel::PackageCatalog (*)(winrt::Windows::ApplicationModel::IPackageCatalogStatics const &)>(
      0LL,
      (__int64)&v10,
      (void (__fastcall **)(__int64, __int64 *))&v7);
  }
  winrt::Windows::Foundation::IUnknown::operator=(this, &v10);
  if ( v10 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v10);
  v9 = operator new(0x18uLL);
  v9[1] = this;
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  *((_DWORD *)v9 + 4) = 1;
  *v9 = off_18079D3A8;
  v6 = v9;
  v4 = ((__int64 (__fastcall *)(winrt::Windows::Internal::Shell::implementation::RemoteDesktopProviderPackageUninstallHandler *, _BYTE *, __int64, _QWORD **))winrt::impl::consume_Windows_ApplicationModel_IPackageCatalog<winrt::Windows::ApplicationModel::IPackageCatalog>::PackageUninstalling)(
         this,
         v8,
         v3,
         &v6);
  __4__event_revoker_UIPackageCatalog_ApplicationModel_Windows_winrt___MP8type___abi_UIPackageCatalog_ApplicationModel_Windows_winrt__X_impl_4_EAAHUevent_token_4___E1___95674__BGI_AA_impl_winrt__QEAAAEAU012___QEAU012__Z(
    (char *)this + 8,
    v4);
  __1__event_revoker_UIPackageCatalog_ApplicationModel_Windows_winrt___MP8type___abi_UIPackageCatalog_ApplicationModel_Windows_winrt__X_impl_4_EAAHUevent_token_4___E1___95674__BGI_AA_impl_winrt__QEAA_XZ(v8);
  winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v6);
  return this;
}
