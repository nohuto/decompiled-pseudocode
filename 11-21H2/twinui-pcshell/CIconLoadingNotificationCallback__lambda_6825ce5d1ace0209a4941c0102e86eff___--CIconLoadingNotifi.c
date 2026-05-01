/*
 * XREFs of CIconLoadingNotificationCallback__lambda_6825ce5d1ace0209a4941c0102e86eff___::CIconLoadingNotificationCallback__lambda_6825ce5d1ace0209a4941c0102e86eff___ @ 0x18049800C
 * Callers:
 *     CIconLoadingNotificationCallback_CreateInstance__lambda_6825ce5d1ace0209a4941c0102e86eff___ @ 0x180497F44 (CIconLoadingNotificationCallback_CreateInstance__lambda_6825ce5d1ace0209a4941c0102e86eff___.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?add_ref@?$com_ptr@UIServiceProvider@@@winrt@@AEBAXXZ @ 0x18004159C (-add_ref@-$com_ptr@UIServiceProvider@@@winrt@@AEBAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
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
  *(_QWORD *)a1 = off_180659A80;
  *(_QWORD *)(a1 + 16) = *a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)(a1 + 16));
  *(_QWORD *)(a1 + 24) = a2[1];
  winrt::com_ptr<IServiceProvider>::add_ref((__int64 *)(a1 + 24));
  return a1;
}
