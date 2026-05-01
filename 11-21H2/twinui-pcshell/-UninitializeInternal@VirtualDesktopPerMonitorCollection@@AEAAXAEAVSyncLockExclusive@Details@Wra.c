/*
 * XREFs of ?UninitializeInternal@VirtualDesktopPerMonitorCollection@@AEAAXAEAVSyncLockExclusive@Details@Wrappers@WRL@Microsoft@@@Z @ 0x18048F43C
 * Callers:
 *     ?Initialize@VirtualDesktopPerMonitorCollection@@UEAAJPEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDesktopNotificationService@@@Z @ 0x18010E880 (-Initialize@VirtualDesktopPerMonitorCollection@@UEAAJPEAUIVirtualDesktopManagerInternal@@PEAUIVi.c)
 *     sub_1802B59A6 @ 0x1802B59A6 (sub_1802B59A6.c)
 *     wil::details::ScopeExitFn__lambda_fdafd6cbfc4fc96002e299f9e43f84ab___::_ScopeExitFn__lambda_fdafd6cbfc4fc96002e299f9e43f84ab___ @ 0x18048ED98 (wil--details--ScopeExitFn__lambda_fdafd6cbfc4fc96002e299f9e43f84ab___--_ScopeExitFn__lambda_fdaf.c)
 *     ?Uninitialize@VirtualDesktopPerMonitorCollection@@UEAAXXZ @ 0x18048F400 (-Uninitialize@VirtualDesktopPerMonitorCollection@@UEAAXXZ.c)
 * Callees:
 *     ?Unregister@SmartCookie@@QEAAJXZ @ 0x1800AA9A4 (-Unregister@SmartCookie@@QEAAJXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?clear@?$_Hash@V?$_Umap_traits@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@23@V?$_Uhash_compare@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@U?$hash@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@std@@U?$equal_to@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@5@@std@@V?$allocator@U?$pair@$$CBV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@23@@std@@@6@$0A@@std@@@std@@QEAAXXZ @ 0x18048FC2C (-clear@-$_Hash@V-$_Umap_traits@V-$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V-$ComPtr@UIVirtualDe.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall VirtualDesktopPerMonitorCollection::UninitializeInternal(
        VirtualDesktopPerMonitorCollection *this,
        struct Microsoft::WRL::Wrappers::Details::SyncLockExclusive *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rcx

  SmartCookie::Unregister((VirtualDesktopPerMonitorCollection *)((char *)this + 120));
  std::_Hash<std::_Umap_traits<Microsoft::WRL::ComPtr<IVirtualDesktop>,Microsoft::WRL::ComPtr<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop>,std::_Uhash_compare<Microsoft::WRL::ComPtr<IVirtualDesktop>,std::hash<Microsoft::WRL::ComPtr<IVirtualDesktop>>,std::equal_to<Microsoft::WRL::ComPtr<IVirtualDesktop>>>,std::allocator<std::pair<Microsoft::WRL::ComPtr<IVirtualDesktop> const,Microsoft::WRL::ComPtr<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop>>>,0>>::clear((char *)this + 256);
  v3 = *((_QWORD *)this + 13);
  *((_QWORD *)this + 13) = 0LL;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  v4 = *((_QWORD *)this + 14);
  *((_QWORD *)this + 14) = 0LL;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
}
