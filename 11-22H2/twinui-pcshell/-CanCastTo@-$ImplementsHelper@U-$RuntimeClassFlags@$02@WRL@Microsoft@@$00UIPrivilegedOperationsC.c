/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIPrivilegedOperationsConsumer@@UIObjectProviderForWindow@ViewManagerInterop@Desktop@Shell@Internal@Windows@@UIImmersiveApplicationTerminator@@UIImmersiveApplicationTitleBarManager@@UIUncloakWindowService@@UIXamlIslandPopupManager@@UIWindowManagementShowMoveSizeEvents@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800CBC6C
 * Callers:
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIImmersiveApplicationManagerSafeForSyncCallouts2@@UIApplicationStateChangeHandler@@UIImmersiveSessionIdleNotification@@UIRequestTrustedComponentForegroundControlInitialization@@UIAppSwitchingTestability@@UIImmersiveApplicationPresentation@@UIApplicationViewReconstitution@@UIApplicationViewSerialization@@UIPrivilegedOperationsConsumer@@UIObjectProviderForWindow@ViewManagerInterop@Desktop@Shell@Internal@Windows@@UIImmersiveApplicationTerminator@@UIImmersiveApplicationTitleBarManager@@UIUncloakWindowService@@UIXamlIslandPopupManager@@UIWindowManagementShowMoveSizeEvents@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800CBE14 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIImmersiveApplicationM.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800CD110 (InlineIsEqualGUID.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IPrivilegedOperationsConsumer,Windows::Internal::Shell::Desktop::ViewManagerInterop::IObjectProviderForWindow,IImmersiveApplicationTerminator,IImmersiveApplicationTitleBarManager,IUncloakWindowService,IXamlIslandPopupManager,IWindowManagementShowMoveSizeEvents>::CanCastTo(
        __int64 a1,
        __int64 a2)
{
  int IsEqualGUID; // eax
  __int64 v3; // rcx
  _QWORD *v4; // r8
  _DWORD *v5; // r10
  __int64 v6; // r11
  unsigned int v7; // r9d
  __int64 v8; // r11
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  _QWORD *v13; // r8
  __int64 v14; // r11

  IsEqualGUID = InlineIsEqualGUID(a2, &GUID_b7c623c4_971b_4c3e_96fe_89de6651d7db);
  v7 = 0;
  if ( IsEqualGUID )
  {
    *v4 = v6;
    return 0LL;
  }
  else
  {
    v8 = v6 + 8;
    if ( *v5 == 261971833
      && v5[1] == *(_DWORD *)&GUID_0f9d5f79_22ef_4898_88f4_9b5c3ad2b5fe.Data2
      && v5[2] == *(_DWORD *)GUID_0f9d5f79_22ef_4898_88f4_9b5c3ad2b5fe.Data4
      && v5[3] == *(_DWORD *)&GUID_0f9d5f79_22ef_4898_88f4_9b5c3ad2b5fe.Data4[4]
      || (unsigned int)InlineIsEqualGUID(v3, &GUID_775b7e14_1c27_4d58_93ed_c37ef70caba8)
      || (unsigned int)InlineIsEqualGUID(v9, &GUID_cf70b63c_d31a_4e82_a823_b61bcc4df275)
      || (unsigned int)InlineIsEqualGUID(v10, &GUID_b706dded_208c_4795_b610_e7c002c31edc)
      || (unsigned int)InlineIsEqualGUID(v11, &GUID_db4aeb4f_d9af_4ed4_aed4_3ba004c0ffee) )
    {
      *v4 = v8;
    }
    else if ( (unsigned int)InlineIsEqualGUID(v12, &GUID_48dda676_f8a4_4f9e_911c_1c32b3c13dbc) )
    {
      *v13 = v14 + 8;
    }
    else
    {
      return (unsigned int)-2147467262;
    }
    return v7;
  }
}
