/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIImmersiveApplicationPresentation@@UIApplicationViewReconstitution@@UIApplicationViewSerialization@@UIPrivilegedOperationsConsumer@@UIObjectProviderForWindow@ViewManagerInterop@Desktop@Shell@Internal@Windows@@UIImmersiveApplicationTerminator@@UIImmersiveApplicationTitleBarManager@@UIUncloakWindowService@@UIXamlIslandPopupManager@@UIWindowManagementShowMoveSizeEvents@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180080FB0
 * Callers:
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIApplicationManagerViewPosition@@UIImmersiveApplicationNotificationService@@UIImmersiveAppNotificationListeners@@UIImmersiveApplicationManagerInternal@@UIImmersiveApplicationManagerSafeForSyncCallouts@@UIImmersiveApplicationManagerSafeForSyncCallouts2@@UIApplicationStateChangeHandler@@UIImmersiveSessionIdleNotification@@UIRequestTrustedComponentForegroundControlInitialization@@UIAppSwitchingTestability@@UIImmersiveApplicationPresentation@@UIApplicationViewReconstitution@@UIApplicationViewSerialization@@UIPrivilegedOperationsConsumer@@UIObjectProviderForWindow@ViewManagerInterop@Desktop@Shell@Internal@Windows@@UIImmersiveApplicationTerminator@@UIImmersiveApplicationTitleBarManager@@UIUncloakWindowService@@UIXamlIslandPopupManager@@UIWindowManagementShowMoveSizeEvents@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800811A0 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIApplicationManagerVie.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18007EB00 (InlineIsEqualGUID.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IImmersiveApplicationPresentation,IApplicationViewReconstitution,IApplicationViewSerialization,IPrivilegedOperationsConsumer,Windows::Internal::Shell::Desktop::ViewManagerInterop::IObjectProviderForWindow,IImmersiveApplicationTerminator,IImmersiveApplicationTitleBarManager,IUncloakWindowService,IXamlIslandPopupManager,IWindowManagementShowMoveSizeEvents>::CanCastTo(
        __int64 a1,
        _DWORD *a2)
{
  _DWORD *v2; // rcx
  __int64 v3; // r8
  _QWORD *v4; // r10
  _DWORD *v5; // rcx
  _DWORD *v6; // rcx
  _DWORD *v7; // rcx
  _DWORD *v8; // rcx
  _DWORD *v9; // rcx
  _DWORD *v10; // rcx
  _DWORD *v11; // rcx
  _DWORD *v12; // rcx
  __int64 v13; // r8
  _QWORD *v14; // r10

  if ( InlineIsEqualGUID(a2, &GUID_a63390e7_2828_46fb_9af0_fe36eae5bae0)
    || InlineIsEqualGUID(v2, &GUID_371e4246_3f0a_4ec6_a471_4d35f63b1164)
    || InlineIsEqualGUID(v5, &GUID_41146a36_84a5_4c5a_b7d9_df28c9576c6b)
    || InlineIsEqualGUID(v6, &GUID_b7c623c4_971b_4c3e_96fe_89de6651d7db)
    || InlineIsEqualGUID(v7, &GUID_0f9d5f79_22ef_4898_88f4_9b5c3ad2b5fe)
    || InlineIsEqualGUID(v8, &GUID_775b7e14_1c27_4d58_93ed_c37ef70caba8)
    || InlineIsEqualGUID(v9, &GUID_cf70b63c_d31a_4e82_a823_b61bcc4df275)
    || InlineIsEqualGUID(v10, &GUID_b706dded_208c_4795_b610_e7c002c31edc)
    || InlineIsEqualGUID(v11, &GUID_db4aeb4f_d9af_4ed4_aed4_3ba004c0ffee) )
  {
    *v4 = v3;
    return 0LL;
  }
  else if ( InlineIsEqualGUID(v12, &GUID_48dda676_f8a4_4f9e_911c_1c32b3c13dbc) )
  {
    *v14 = v13 + 8;
    return 0LL;
  }
  else
  {
    return 2147500034LL;
  }
}
