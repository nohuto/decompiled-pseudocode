/*
 * XREFs of ?UninitializeInternal@VirtualDesktopCollection@@AEAAXAEAVSyncLockExclusive@Details@Wrappers@WRL@Microsoft@@@Z @ 0x180544C1C
 * Callers:
 *     ?Initialize@VirtualDesktopCollection@@UEAAJPEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDesktopNotificationService@@@Z @ 0x18013B380 (-Initialize@VirtualDesktopCollection@@UEAAJPEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDeskt.c)
 *     sub_18034AD16 @ 0x18034AD16 (sub_18034AD16.c)
 *     wil::details::ScopeExitFn__lambda_13b07d3eb4f1e186c843b4d39ada5105___::_ScopeExitFn__lambda_13b07d3eb4f1e186c843b4d39ada5105___ @ 0x18054460C (wil--details--ScopeExitFn__lambda_13b07d3eb4f1e186c843b4d39ada5105___--_ScopeExitFn__lambda_13b0.c)
 *     ?Uninitialize@VirtualDesktopCollection@@UEAAXXZ @ 0x180544BE0 (-Uninitialize@VirtualDesktopCollection@@UEAAXXZ.c)
 * Callees:
 *     ?Unregister@SmartCookie@@QEAAJXZ @ 0x180143754 (-Unregister@SmartCookie@@QEAAJXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?clear@?$_Hash@V?$_Umap_traits@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@23@V?$_Uhash_compare@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@U?$hash@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@std@@U?$equal_to@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@5@@std@@V?$allocator@U?$pair@$$CBV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@23@@std@@@6@$0A@@std@@@std@@QEAAXXZ @ 0x180545330 (-clear@-$_Hash@V-$_Umap_traits@V-$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V-$ComPtr@UIVirtualDe.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall VirtualDesktopCollection::UninitializeInternal(
        VirtualDesktopCollection *this,
        struct Microsoft::WRL::Wrappers::Details::SyncLockExclusive *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rcx

  SmartCookie::Unregister((VirtualDesktopCollection *)((char *)this + 128));
  std::_Hash<std::_Umap_traits<Microsoft::WRL::ComPtr<IVirtualDesktop>,Microsoft::WRL::ComPtr<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop>,std::_Uhash_compare<Microsoft::WRL::ComPtr<IVirtualDesktop>,std::hash<Microsoft::WRL::ComPtr<IVirtualDesktop>>,std::equal_to<Microsoft::WRL::ComPtr<IVirtualDesktop>>>,std::allocator<std::pair<Microsoft::WRL::ComPtr<IVirtualDesktop> const,Microsoft::WRL::ComPtr<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop>>>,0>>::clear((char *)this + 264);
  v3 = *((_QWORD *)this + 14);
  *((_QWORD *)this + 14) = 0LL;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  v4 = *((_QWORD *)this + 15);
  *((_QWORD *)this + 15) = 0LL;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
}
