/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIBroadcastDVRCommand@@VCImmersiveShellComponentWithGITSite@@UIImmersiveApplicationNotification@@UIApplicationViewChangeListener@@UIImmersiveSessionIdleNotification@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800D0148
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIBroadcastDVRComponent@@UIBroadcastDVRCommand@@VCImmersiveShellComponentWithGITSite@@UIImmersiveApplicationNotification@@UIApplicationViewChangeListener@@UIImmersiveSessionIdleNotification@@@23@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIImmersiveShellHookNotification@@UIGameFocusNotificationService@@VFtmBase@23@@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800CEDA0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1800CEDA0.c)
 * Callees:
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00U?$ImplementsMarker@VCWRLObjectWithGITSite@@@Details@23@VCImmersiveShellComponent@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800CBBA0 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00U-$ImplementsMarker@VCW.c)
 *     InlineIsEqualGUID @ 0x1800CD110 (InlineIsEqualGUID.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IBroadcastDVRCommand,CImmersiveShellComponentWithGITSite,IImmersiveApplicationNotification,IApplicationViewChangeListener,IImmersiveSessionIdleNotification>::CanCastTo(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  __int64 v4; // rdi
  _DWORD *v5; // rdx
  unsigned int CanCastTo; // r8d
  _DWORD *v7; // r11
  BOOL IsEqualGUID; // eax
  _DWORD *v10; // rcx
  __int64 v11; // r9
  __int64 v12; // r9
  unsigned int v13; // r10d

  if ( *a2 == 1514951409
    && a2[1] == *(_DWORD *)&GUID_5a4c52f1_92a1_4f7d_9010_60dc2a06d6af.Data2
    && a2[2] == *(_DWORD *)GUID_5a4c52f1_92a1_4f7d_9010_60dc2a06d6af.Data4
    && a2[3] == *(_DWORD *)&GUID_5a4c52f1_92a1_4f7d_9010_60dc2a06d6af.Data4[4] )
  {
    *a3 = a1;
    return 0LL;
  }
  else
  {
    v4 = a1 + 8;
    CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithGITSite>,CImmersiveShellComponent>::CanCastTo(
                  a1 + 8,
                  a2,
                  a3);
    if ( CanCastTo == -2147467262 )
    {
      if ( *v5 == 751684338
        && v5[1] == *(_DWORD *)&GUID_2ccdcaf2_ca4f_45b0_940b_d5b78a628060.Data2
        && v5[2] == *(_DWORD *)GUID_2ccdcaf2_ca4f_45b0_940b_d5b78a628060.Data4
        && v5[3] == *(_DWORD *)&GUID_2ccdcaf2_ca4f_45b0_940b_d5b78a628060.Data4[4] )
      {
        *a3 = v4 + 104;
        return 0;
      }
      else
      {
        IsEqualGUID = InlineIsEqualGUID(v7, &GUID_727f9e97_76ee_497b_a942_b6371328485c);
        CanCastTo = 0;
        if ( IsEqualGUID )
        {
          *a3 = v11;
        }
        else if ( InlineIsEqualGUID(v10, &GUID_985c98a3_21f6_4585_9e13_f708cb0de4f2) )
        {
          *a3 = v12 + 8;
        }
        else
        {
          return v13;
        }
      }
    }
    return CanCastTo;
  }
}
