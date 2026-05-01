/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIFullScreenNotificationService@@UIFullScreenPositionerNotification@@UIImmersiveMonitorNotification@@UIPrivilegedOperationsConsumer@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18007D6A4
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@UIFullScreenManager@@UIFullScreenManagerPriv@@UIFullScreenNotificationService@@UIFullScreenPositionerNotification@@UIImmersiveMonitorNotification@@UIPrivilegedOperationsConsumer@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18007E910 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_18007E910.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U?$ImplementsMarker@VCImmersiveShellComponentWithSite@@@Details@23@UIFullScreenManager@@UIFullScreenManagerPriv@@UIFullScreenNotificationService@@UIFullScreenPositionerNotification@@UIImmersiveMonitorNotification@@UIPrivilegedOperationsConsumer@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180321FE8 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U-$Implem_ea_180321FE8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IFullScreenNotificationService,IFullScreenPositionerNotification,IImmersiveMonitorNotification,IPrivilegedOperationsConsumer>::CanCastTo(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  if ( *a2 != -11136999
    || a2[1] != *(_DWORD *)&GUID_ff561019_e9bf_4cb5_8e4a_cb42e23ce7a2.Data2
    || a2[2] != *(_DWORD *)GUID_ff561019_e9bf_4cb5_8e4a_cb42e23ce7a2.Data4
    || a2[3] != *(_DWORD *)&GUID_ff561019_e9bf_4cb5_8e4a_cb42e23ce7a2.Data4[4] )
  {
    a1 += 8LL;
    if ( *a2 != -24019057
      || a2[1] != *(_DWORD *)&GUID_fe917f8f_4e14_41a5_83ba_a9f9de203a07.Data2
      || a2[2] != *(_DWORD *)GUID_fe917f8f_4e14_41a5_83ba_a9f9de203a07.Data4
      || a2[3] != *(_DWORD *)&GUID_fe917f8f_4e14_41a5_83ba_a9f9de203a07.Data4[4] )
    {
      a1 += 8LL;
      if ( *a2 != -1811144131
        || a2[1] != *(_DWORD *)&GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270.Data2
        || a2[2] != *(_DWORD *)GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270.Data4
        || a2[3] != *(_DWORD *)&GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270.Data4[4] )
      {
        a1 += 8LL;
        if ( *a2 != -1211751484
          || a2[1] != *(_DWORD *)&GUID_b7c623c4_971b_4c3e_96fe_89de6651d7db.Data2
          || a2[2] != *(_DWORD *)GUID_b7c623c4_971b_4c3e_96fe_89de6651d7db.Data4
          || a2[3] != *(_DWORD *)&GUID_b7c623c4_971b_4c3e_96fe_89de6651d7db.Data4[4] )
        {
          return 2147500034LL;
        }
      }
    }
  }
  *a3 = a1;
  return 0LL;
}
