/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIImmersiveSystemMode@@UIImmersiveSystemModeInternal@@UIActiveZBand@@VIImmersiveSystemModeNotificationServicePrivate@@VIActiveZBandNotificationServicePrivate@@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIImmersiveMonitorNotification@@UIDesktopVisibilityService@@UIDesktopVisibilityChangesNotification@@@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800B6B78
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@VCWRLObjectWithGITSite@@UIActiveZBand@@UIImmersiveSystemMode@@UIImmersiveSystemModeInternal@@U6@VIImmersiveSystemModeNotificationServicePrivate@@VIActiveZBandNotificationServicePrivate@@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIImmersiveMonitorNotification@@UIDesktopVisibilityService@@UIDesktopVisibilityChangesNotification@@@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800B6A50 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1800B6A50.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18007EB00 (InlineIsEqualGUID.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IImmersiveSystemMode,IImmersiveSystemModeInternal,IActiveZBand,IImmersiveSystemModeNotificationServicePrivate,IActiveZBandNotificationServicePrivate,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IImmersiveMonitorNotification,IDesktopVisibilityService,IDesktopVisibilityChangesNotification>>::CanCastTo(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  __int64 v3; // rcx
  BOOL IsEqualGUID; // eax
  _DWORD *v5; // rcx
  _QWORD *v6; // r10
  __int64 v7; // r11
  unsigned int v8; // r8d
  _DWORD *v9; // rcx
  _DWORD *v10; // rcx
  _DWORD *v11; // rcx
  _DWORD *v12; // rcx
  _QWORD *v13; // r10
  __int64 v14; // r11

  if ( *a2 == -358962051
    && a2[1] == *(_DWORD *)&GUID_ea9aac7d_0cac_4ceb_981c_4545a28bada2.Data2
    && a2[2] == *(_DWORD *)GUID_ea9aac7d_0cac_4ceb_981c_4545a28bada2.Data4
    && a2[3] == *(_DWORD *)&GUID_ea9aac7d_0cac_4ceb_981c_4545a28bada2.Data4[4] )
  {
    *a3 = a1;
    return 0LL;
  }
  else
  {
    v3 = a1 + 8;
    if ( *a2 == 1688863789
      && a2[1] == *(_DWORD *)&GUID_64aa042d_4144_4c88_afb9_aed881c0ffee.Data2
      && a2[2] == *(_DWORD *)GUID_64aa042d_4144_4c88_afb9_aed881c0ffee.Data4
      && a2[3] == *(_DWORD *)&GUID_64aa042d_4144_4c88_afb9_aed881c0ffee.Data4[4] )
    {
      *a3 = v3;
      return 0;
    }
    else
    {
      IsEqualGUID = InlineIsEqualGUID(a2, &GUID_d97a25b9_e3df_444c_afc6_2d12c0ffee84);
      v8 = 0;
      if ( IsEqualGUID
        || InlineIsEqualGUID(v5, &GUID_ac2af908_82b1_40b3_a94d_18c2c0ffee84)
        || InlineIsEqualGUID(v9, &GUID_7c7b88e3_43d0_4574_a0bd_8f8bc0ffee84)
        || InlineIsEqualGUID(v10, &GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270)
        || InlineIsEqualGUID(v11, &GUID_2af0421a_a7bc_4b7e_be85_7e17c0ffee84) )
      {
        *v6 = v7;
      }
      else
      {
        if ( InlineIsEqualGUID(v12, &GUID_fc413902_2a24_4522_ad1f_2d27c0ffee84) )
          *v13 = v14 + 8;
        else
          v8 = -2147467262;
        if ( v8 == -2147467262 )
          return (unsigned int)-2147467262;
      }
    }
    return v8;
  }
}
