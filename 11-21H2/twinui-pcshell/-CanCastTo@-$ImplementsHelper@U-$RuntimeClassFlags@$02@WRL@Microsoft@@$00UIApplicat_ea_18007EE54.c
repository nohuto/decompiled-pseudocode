/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIApplicationFrameEventHandler@@UIImmersiveLayoutChanges@@UIImmersiveWindowMessageNotification@@UITouchKeyboardExperienceManager@@UITabletModeChangeListener@@UIApplicationStateChangeHandler@@UILightDismissNotification@@UIGlobalRudeWindowNotifications@@UIClipboardViewLauncher@DataTransfer@Internal@ApplicationModel@Windows@@UIDWMStoryboardListener@@UITextInputHostInfoProvider@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18007EE54
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UIApplicationFrameEventHandler@@UIImmersiveLayoutChanges@@UIImmersiveWindowMessageNotification@@UITouchKeyboardExperienceManager@@UITabletModeChangeListener@@UIApplicationStateChangeHandler@@UILightDismissNotification@@UIGlobalRudeWindowNotifications@@UIClipboardViewLauncher@DataTransfer@Internal@ApplicationModel@Windows@@UIDWMStoryboardListener@@UITextInputHostInfoProvider@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180082EE0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_180082EE0.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$0A@UIInspectable@@VCImmersiveShellComponentWithGITSite@@UIWeakReferenceSource@@UIApplicationFrameEventHandler@@UIImmersiveLayoutChanges@@UIImmersiveWindowMessageNotification@@UITouchKeyboardExperienceManager@@UITabletModeChangeListener@@UIApplicationStateChangeHandler@@UILightDismissNotification@@UIGlobalRudeWindowNotifications@@UIClipboardViewLauncher@DataTransfer@Internal@ApplicationModel@Windows@@UIDWMStoryboardListener@@UITextInputHostInfoProvider@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18045CDE0 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$0A@UIInspect_ea_18045CDE0.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18007EB00 (InlineIsEqualGUID.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IApplicationFrameEventHandler,IImmersiveLayoutChanges,IImmersiveWindowMessageNotification,ITouchKeyboardExperienceManager,ITabletModeChangeListener,IApplicationStateChangeHandler,ILightDismissNotification,IGlobalRudeWindowNotifications,Windows::ApplicationModel::Internal::DataTransfer::IClipboardViewLauncher,IDWMStoryboardListener,ITextInputHostInfoProvider,Microsoft::WRL::FtmBase>::CanCastTo(
        __int64 a1,
        _DWORD *a2)
{
  _DWORD *v2; // rcx
  _QWORD *v3; // r8
  __int64 v4; // r11
  _DWORD *v5; // rcx
  _QWORD *v6; // r8
  unsigned int v7; // r9d
  __int64 v8; // r11
  _DWORD *v9; // rcx
  _DWORD *v10; // rcx
  _DWORD *v11; // rcx
  _DWORD *v12; // rcx
  _DWORD *v13; // rcx
  _DWORD *v14; // rcx
  _DWORD *v15; // rcx
  _DWORD *v16; // r10
  __int64 v17; // rcx
  int v19; // eax

  if ( !InlineIsEqualGUID(a2, &GUID_ea5d0de4_770d_4da0_a9f8_d7f9a140ff79) )
  {
    if ( InlineIsEqualGUID(v2, &GUID_6a5e657d_223a_4875_838b_c311ed73523b)
      || InlineIsEqualGUID(v5, &GUID_f4b0e171_08a9_413c_b179_71d7602d8ef0)
      || InlineIsEqualGUID(v9, &GUID_9516d866_ca0f_40ca_8997_efa618b50f99)
      || InlineIsEqualGUID(v10, &GUID_86fb57a6_3c81_4f40_a971_6280be4e526e)
      || InlineIsEqualGUID(v11, &GUID_b755e6e0_b048_49cc_8911_11a041216f5f)
      || InlineIsEqualGUID(v12, &GUID_8d4d1ec2_4740_4fc5_b4b1_6dc3722a2eeb)
      || InlineIsEqualGUID(v13, &GUID_22ba7cc0_8e75_484f_844e_0b6d74105413)
      || InlineIsEqualGUID(v14, &GUID_c9969d8d_c814_50fd_9f55_84a54e9453fc)
      || InlineIsEqualGUID(v15, &GUID_ad6daf0f_d2b6_4728_8fb8_30a1d1e2142e) )
    {
      *v6 = v8;
      return v7;
    }
    v17 = v8 + 8;
    if ( *v16 == -977681168
      && v16[1] == *(_DWORD *)&GUID_c5b9c4f0_4906_4a75_a1db_edcf89a57cb7.Data2
      && v16[2] == *(_DWORD *)GUID_c5b9c4f0_4906_4a75_a1db_edcf89a57cb7.Data4
      && v16[3] == *(_DWORD *)&GUID_c5b9c4f0_4906_4a75_a1db_edcf89a57cb7.Data4[4] )
    {
      goto LABEL_20;
    }
    v17 = v8 + 16;
    if ( *v16 == -1796592748 )
    {
      if ( v16[1] != *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data2
        || v16[2] != *(_DWORD *)GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4 )
      {
        return (unsigned int)-2147467262;
      }
      v19 = *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4[4];
    }
    else
    {
      if ( *v16 != 3
        || v16[1] != *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data2
        || v16[2] != *(_DWORD *)GUID_00000003_0000_0000_c000_000000000046.Data4 )
      {
        return (unsigned int)-2147467262;
      }
      v19 = *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data4[4];
    }
    if ( v16[3] == v19 )
    {
LABEL_20:
      *v6 = v17;
      return v7;
    }
    return (unsigned int)-2147467262;
  }
  *v3 = v4;
  return 0LL;
}
