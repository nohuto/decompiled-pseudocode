/*
 * XREFs of CIconLoadingNotificationCallback__lambda_6825ce5d1ace0209a4941c0102e86eff___::CIconLoadingNotificationCallback__lambda_6825ce5d1ace0209a4941c0102e86eff___ @ 0x1805515AC
 * Callers:
 *     CIconLoadingNotificationCallback_CreateInstance__lambda_6825ce5d1ace0209a4941c0102e86eff___ @ 0x1805514E4 (CIconLoadingNotificationCallback_CreateInstance__lambda_6825ce5d1ace0209a4941c0102e86eff___.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalAddRef@?$ComPtr@VRecentAppsCache@Discover@PenWorkspace@@@WRL@Microsoft@@IEBAXXZ @ 0x1800704AC (-InternalAddRef@-$ComPtr@VRecentAppsCache@Discover@PenWorkspace@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CIconLoadingNotificationCallback__lambda_6825ce5d1ace0209a4941c0102e86eff___::CIconLoadingNotificationCallback__lambda_6825ce5d1ace0209a4941c0102e86eff___(
        __int64 a1,
        _QWORD *a2)
{
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IApplicationViewIconLoaderNotifications>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)a1 = off_1807E2700;
  *(_QWORD *)(a1 + 16) = *a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)(a1 + 16));
  *(_QWORD *)(a1 + 24) = a2[1];
  Microsoft::WRL::ComPtr<PenWorkspace::Discover::RecentAppsCache>::InternalAddRef((__int64 *)(a1 + 24));
  return a1;
}
