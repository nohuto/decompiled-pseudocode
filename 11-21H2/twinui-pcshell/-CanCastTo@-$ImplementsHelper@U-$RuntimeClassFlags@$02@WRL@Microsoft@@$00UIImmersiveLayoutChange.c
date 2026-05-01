/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIImmersiveLayoutChanges@@UIApplicationFrameEventHandler@@UIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@UIGameBarWindowManager@789@UIImmersiveWindowMessageNotification@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180130948
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UIImmersiveLayoutChanges@@UIApplicationFrameEventHandler@@UIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@UIGameBarWindowManager@89Windows@@UIImmersiveWindowMessageNotification@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180130850 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_180130850.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$0A@UIInspectable@@VCImmersiveShellComponentWithGITSite@@UIWeakReferenceSource@@UIImmersiveLayoutChanges@@UIApplicationFrameEventHandler@@UIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@UIGameBarWindowManager@GamingOverlay@Internal@Windows@@UIImmersiveWindowMessageNotification@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18032D790 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$0A@UIInspect_ea_18032D790.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18007EB00 (InlineIsEqualGUID.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IImmersiveLayoutChanges,IApplicationFrameEventHandler,Windows::Internal::GamingOverlay::IGamingOverlayExperienceManager,Windows::Internal::GamingOverlay::IGameBarWindowManager,IImmersiveWindowMessageNotification,Microsoft::WRL::FtmBase>::CanCastTo(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  BOOL IsEqualGUID; // eax
  _DWORD *v4; // rcx
  _DWORD *v5; // r9
  _QWORD *v6; // r10
  __int64 v7; // r11
  unsigned int v8; // r8d
  _DWORD *v9; // rcx
  _DWORD *v10; // rcx
  _DWORD *v11; // rcx

  if ( *a2 == 1784571261
    && a2[1] == *(_DWORD *)&GUID_6a5e657d_223a_4875_838b_c311ed73523b.Data2
    && a2[2] == *(_DWORD *)GUID_6a5e657d_223a_4875_838b_c311ed73523b.Data4
    && a2[3] == *(_DWORD *)&GUID_6a5e657d_223a_4875_838b_c311ed73523b.Data4[4] )
  {
    *a3 = a1;
    return 0LL;
  }
  else
  {
    IsEqualGUID = InlineIsEqualGUID(a2, &GUID_ea5d0de4_770d_4da0_a9f8_d7f9a140ff79);
    v8 = 0;
    if ( IsEqualGUID
      || (v7 += 8LL, *v5 == -1002155792)
      && v5[1] == *(_DWORD *)&GUID_c44450f0_731e_4fdb_95fe_d031838a5b14.Data2
      && v5[2] == *(_DWORD *)GUID_c44450f0_731e_4fdb_95fe_d031838a5b14.Data4
      && v5[3] == *(_DWORD *)&GUID_c44450f0_731e_4fdb_95fe_d031838a5b14.Data4[4]
      || InlineIsEqualGUID(v4, &GUID_22d2bed2_535d_5ac7_a0a0_1af47032e0a1)
      || InlineIsEqualGUID(v9, &GUID_f4b0e171_08a9_413c_b179_71d7602d8ef0)
      || InlineIsEqualGUID(v10, &GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90)
      || InlineIsEqualGUID(v11, &GUID_00000003_0000_0000_c000_000000000046) )
    {
      *v6 = v7;
    }
    else
    {
      return (unsigned int)-2147467262;
    }
    return v8;
  }
}
