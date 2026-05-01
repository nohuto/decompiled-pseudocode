/*
 * XREFs of ??$MakeAndInitialize@VCApplicationManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x180172C2C
 * Callers:
 *     ?CreateInstance@?$SimpleClassFactory@VCApplicationManager@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x180172BB0 (-CreateInstance@-$SimpleClassFactory@VCApplicationManager@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18007EB00 (InlineIsEqualGUID.c)
 *     ?RuntimeClassInitialize@CApplicationManager@@QEAAJXZ @ 0x1800DC650 (-RuntimeClassInitialize@CApplicationManager@@QEAAJXZ.c)
 *     ??0CApplicationManager@@QEAA@XZ @ 0x180100F1C (--0CApplicationManager@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@VCImmersiveShellComponentWithGITSite@@UIImmersiveApplicationManager@@UIImmersiveShellHookNotification@@UIImmersiveApplicationArrayService@@UIImmersiveApplicationArrayService2@@UIImmersiveApplicationVisibilityOverride@@UIIAMServiceProvider@@UISpecialWindowMessageCallback@@UIImmersiveMonitorNotification@@UIApplicationManagerViewPosition@@UIImmersiveApplicationNotificationService@@UIImmersiveAppNotificationListeners@@UIImmersiveApplicationManagerInternal@@UIImmersiveApplicationManagerSafeForSyncCallouts@@UIImmersiveApplicationManagerSafeForSyncCallouts2@@UIApplicationStateChangeHandler@@UIImmersiveSessionIdleNotification@@UIRequestTrustedComponentForegroundControlInitialization@@UIAppSwitchingTestability@@UIImmersiveApplicationPresentation@@UIApplicationViewReconstitution@@UIApplicationViewSerialization@@UIPrivilegedOperationsConsumer@@UIObjectProviderForWindow@ViewManagerInterop@Desktop@Shell@Internal@Windows@@UIImmersiveApplicationTerminator@@UIImmersiveApplicationTitleBarManager@@UIUncloakWindowService@@UIXamlIslandPopupManager@@UIWindowManagementShowMoveSizeEvents@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180127110 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@VCImme.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$0A@UIInspectable@@VFtmBase@23@UIWeakReferenceSource@@VCImmersiveShellComponentWithGITSite@@UIImmersiveApplicationManager@@UIImmersiveShellHookNotification@@UIImmersiveApplicationArrayService@@UIImmersiveApplicationArrayService2@@UIImmersiveApplicationVisibilityOverride@@UIIAMServiceProvider@@UISpecialWindowMessageCallback@@UIImmersiveMonitorNotification@@UIApplicationManagerViewPosition@@UIImmersiveApplicationNotificationService@@UIImmersiveAppNotificationListeners@@UIImmersiveApplicationManagerInternal@@UIImmersiveApplicationManagerSafeForSyncCallouts@@UIImmersiveApplicationManagerSafeForSyncCallouts2@@UIApplicationStateChangeHandler@@UIImmersiveSessionIdleNotification@@UIRequestTrustedComponentForegroundControlInitialization@@UIAppSwitchingTestability@@UIImmersiveApplicationPresentation@@UIApplicationViewReconstitution@@UIApplicationViewSerialization@@UIPrivilegedOperationsConsumer@@UIObjectProviderForWindow@ViewManagerInterop@Desktop@Shell@Internal@Windows@@UIImmersiveApplicationTerminator@@UIImmersiveApplicationTitleBarManager@@UIUncloakWindowService@@UIXamlIslandPopupManager@@UIWindowManagementShowMoveSizeEvents@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1802E1AEC (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$0A@UIInspectable@@VFtmBas.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CApplicationManager,IUnknown,>(CApplicationManager **a1)
{
  CApplicationManager *v2; // rax
  CApplicationManager *v3; // rdi
  volatile int *v4; // rdx
  int CanCastTo; // esi
  _DWORD *v6; // rcx
  __int64 v8; // rcx

  *a1 = 0LL;
  v2 = (CApplicationManager *)operator new(0x420uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v3 = CApplicationManager::CApplicationManager(v2);
    CanCastTo = CApplicationManager::RuntimeClassInitialize(v3);
    if ( CanCastTo >= 0 )
    {
      *a1 = 0LL;
      if ( InlineIsEqualGUID(&GUID_00000000_0000_0000_c000_000000000046, &GUID_00000000_0000_0000_c000_000000000046)
        || InlineIsEqualGUID(v6, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
      {
        *a1 = v3;
        (*(void (__fastcall **)(CApplicationManager *))(*(_QWORD *)v3 + 8LL))(v3);
        CanCastTo = 0;
      }
      else
      {
        CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,0,IInspectable,Microsoft::WRL::FtmBase,IWeakReferenceSource,CImmersiveShellComponentWithGITSite,IImmersiveApplicationManager,IImmersiveShellHookNotification,IImmersiveApplicationArrayService,IImmersiveApplicationArrayService2,IImmersiveApplicationVisibilityOverride,IIAMServiceProvider,ISpecialWindowMessageCallback,IImmersiveMonitorNotification,IApplicationManagerViewPosition,IImmersiveApplicationNotificationService,IImmersiveAppNotificationListeners,IImmersiveApplicationManagerInternal,IImmersiveApplicationManagerSafeForSyncCallouts,IImmersiveApplicationManagerSafeForSyncCallouts2,IApplicationStateChangeHandler,IImmersiveSessionIdleNotification,IRequestTrustedComponentForegroundControlInitialization,IAppSwitchingTestability,IImmersiveApplicationPresentation,IApplicationViewReconstitution,IApplicationViewSerialization,IPrivilegedOperationsConsumer,Windows::Internal::Shell::Desktop::ViewManagerInterop::IObjectProviderForWindow,IImmersiveApplicationTerminator,IImmersiveApplicationTitleBarManager,IUncloakWindowService,IXamlIslandPopupManager,IWindowManagementShowMoveSizeEvents>::CanCastTo(
                      v3,
                      v8,
                      a1);
        if ( CanCastTo >= 0 )
          (*(void (__fastcall **)(CApplicationManager *))(*(_QWORD *)*a1 + 8LL))(*a1);
      }
    }
    if ( v3 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,CImmersiveShellComponentWithGITSite,IImmersiveApplicationManager,IImmersiveShellHookNotification,IImmersiveApplicationArrayService,IImmersiveApplicationArrayService2,IImmersiveApplicationVisibilityOverride,IIAMServiceProvider,ISpecialWindowMessageCallback,IImmersiveMonitorNotification,IApplicationManagerViewPosition,IImmersiveApplicationNotificationService,IImmersiveAppNotificationListeners,IImmersiveApplicationManagerInternal,IImmersiveApplicationManagerSafeForSyncCallouts,IImmersiveApplicationManagerSafeForSyncCallouts2,IApplicationStateChangeHandler,IImmersiveSessionIdleNotification,IRequestTrustedComponentForegroundControlInitialization,IAppSwitchingTestability,IImmersiveApplicationPresentation,IApplicationViewReconstitution,IApplicationViewSerialization,IPrivilegedOperationsConsumer,Windows::Internal::Shell::Desktop::ViewManagerInterop::IObjectProviderForWindow,IImmersiveApplicationTerminator,IImmersiveApplicationTitleBarManager,IUncloakWindowService,IXamlIslandPopupManager,IWindowManagementShowMoveSizeEvents>::Release(
        (__int64)v3,
        v4);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)CanCastTo;
}
