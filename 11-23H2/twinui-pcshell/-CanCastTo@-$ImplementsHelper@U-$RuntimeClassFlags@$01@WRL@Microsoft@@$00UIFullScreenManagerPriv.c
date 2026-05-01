/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIFullScreenManagerPriv@@UIFullScreenNotificationService@@UIFullScreenPositionerNotification@@UIImmersiveMonitorNotification@@UIPrivilegedOperationsConsumer@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800CDC5C
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@UIFullScreenManager@@UIFullScreenManagerPriv@@UIFullScreenNotificationService@@UIFullScreenPositionerNotification@@UIImmersiveMonitorNotification@@UIPrivilegedOperationsConsumer@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800CD730 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1800CD730.c)
 *     ??$MakeAndInitialize@VCFullScreenManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x180108BE0 (--$MakeAndInitialize@VCFullScreenManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnkno.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800CD110 (InlineIsEqualGUID.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IFullScreenManagerPriv,IFullScreenNotificationService,IFullScreenPositionerNotification,IImmersiveMonitorNotification,IPrivilegedOperationsConsumer>::CanCastTo(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  BOOL IsEqualGUID; // eax
  _DWORD *v5; // rcx
  _QWORD *v6; // r10
  __int64 v7; // r11
  unsigned int v8; // r8d
  _DWORD *v9; // rcx
  _DWORD *v10; // r9
  _QWORD *v11; // r10
  __int64 v12; // r11

  if ( *a2 == 1601978354
    && a2[1] == *(_DWORD *)&GUID_5f7c3ff2_e06b_42a9_b4de_c87109b32dd0.Data2
    && a2[2] == *(_DWORD *)GUID_5f7c3ff2_e06b_42a9_b4de_c87109b32dd0.Data4
    && a2[3] == *(_DWORD *)&GUID_5f7c3ff2_e06b_42a9_b4de_c87109b32dd0.Data4[4] )
  {
    *a3 = a1;
    return 0LL;
  }
  else
  {
    IsEqualGUID = InlineIsEqualGUID(a2, &GUID_ff561019_e9bf_4cb5_8e4a_cb42e23ce7a2);
    v8 = 0;
    if ( IsEqualGUID
      || InlineIsEqualGUID(v5, &GUID_fe917f8f_4e14_41a5_83ba_a9f9de203a07)
      || (v7 += 8LL, *v10 == -1811144131)
      && v10[1] == *(_DWORD *)&GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270.Data2
      && v10[2] == *(_DWORD *)GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270.Data4
      && v10[3] == *(_DWORD *)&GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270.Data4[4] )
    {
      *v6 = v7;
    }
    else if ( InlineIsEqualGUID(v9, &GUID_b7c623c4_971b_4c3e_96fe_89de6651d7db) )
    {
      *v11 = v12 + 8;
    }
    else
    {
      return (unsigned int)-2147467262;
    }
    return v8;
  }
}
