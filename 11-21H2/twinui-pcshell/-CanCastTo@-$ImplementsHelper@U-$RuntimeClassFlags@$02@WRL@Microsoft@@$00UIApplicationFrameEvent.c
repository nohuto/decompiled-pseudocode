/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIApplicationFrameEventHandler@@UIImmersiveLayoutChanges@@UIWnfCallback@@UIEyeControlManager@Input@Internal@UI@Windows@@UIInputDeviceWatcherOwner@@UIPrivilegedOperationsConsumer@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18007DD74
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UIApplicationFrameEventHandler@@UIImmersiveLayoutChanges@@UIWnfCallback@@UIEyeControlManager@Input@Internal@UI@Windows@@UIInputDeviceWatcherOwner@@UIPrivilegedOperationsConsumer@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800849D0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_1800849D0.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$0A@UIInspectable@@VCImmersiveShellComponentWithGITSite@@UIWeakReferenceSource@@UIApplicationFrameEventHandler@@UIImmersiveLayoutChanges@@UIWnfCallback@@UIEyeControlManager@Input@Internal@UI@Windows@@UIInputDeviceWatcherOwner@@UIPrivilegedOperationsConsumer@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1804877C0 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$0A@UIInspect_ea_1804877C0.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18007EB00 (InlineIsEqualGUID.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IApplicationFrameEventHandler,IImmersiveLayoutChanges,IWnfCallback,Windows::UI::Internal::Input::IEyeControlManager,IInputDeviceWatcherOwner,IPrivilegedOperationsConsumer,Microsoft::WRL::FtmBase>::CanCastTo(
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
  __int64 v13; // rcx

  IsEqualGUID = InlineIsEqualGUID(a2, &GUID_ea5d0de4_770d_4da0_a9f8_d7f9a140ff79);
  v7 = 0;
  if ( IsEqualGUID )
  {
    *v4 = v6;
    return 0LL;
  }
  else
  {
    v8 = v6 + 8;
    if ( *v5 == 1784571261
      && v5[1] == *(_DWORD *)&GUID_6a5e657d_223a_4875_838b_c311ed73523b.Data2
      && v5[2] == *(_DWORD *)GUID_6a5e657d_223a_4875_838b_c311ed73523b.Data4
      && v5[3] == *(_DWORD *)&GUID_6a5e657d_223a_4875_838b_c311ed73523b.Data4[4]
      || (unsigned int)InlineIsEqualGUID(v3, &GUID_326a2a2b_1237_4b24_8d66_3a12716d64fa)
      || (unsigned int)InlineIsEqualGUID(v9, &GUID_5e575f11_41b8_4e5f_a100_ceaab370f70c)
      || (unsigned int)InlineIsEqualGUID(v10, &GUID_fbd5d9e9_e560_4560_8b72_872e1d434569)
      || (unsigned int)InlineIsEqualGUID(v11, &GUID_b7c623c4_971b_4c3e_96fe_89de6651d7db)
      || (unsigned int)InlineIsEqualGUID(v12, &GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90)
      || (unsigned int)InlineIsEqualGUID(v13, &GUID_00000003_0000_0000_c000_000000000046) )
    {
      *v4 = v8;
    }
    else
    {
      return (unsigned int)-2147467262;
    }
    return v7;
  }
}
