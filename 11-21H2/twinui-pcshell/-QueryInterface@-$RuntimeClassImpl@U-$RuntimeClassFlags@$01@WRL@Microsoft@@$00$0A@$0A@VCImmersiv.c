/*
 * XREFs of ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@UIWindowManagementJointResizeEvents@@UIApplicationViewChangeListener@@UIImmersiveSettingsCacheNotification@@UIImmersiveRawInputKeyboardNotification@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18007DB70
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@UIWindowManagementJointResizeEvents@@UIApplicationViewChangeListener@@UIImmersiveSettingsCacheNotification@@UIImmersiveRawInputKeyboardNotification@@@Details@WRL@Microsoft@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18020C1D0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_18020C1D0.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@UIWindowManagementJointResizeEvents@@UIApplicationViewChangeListener@@UIImmersiveSettingsCacheNotification@@UIImmersiveRawInputKeyboardNotification@@@Details@WRL@Microsoft@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18020C1F0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_18020C1F0.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@UIWindowManagementJointResizeEvents@@UIApplicationViewChangeListener@@UIImmersiveSettingsCacheNotification@@UIImmersiveRawInputKeyboardNotification@@@Details@WRL@Microsoft@@WFI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18020C210 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_18020C210.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@UIWindowManagementJointResizeEvents@@UIApplicationViewChangeListener@@UIImmersiveSettingsCacheNotification@@UIImmersiveRawInputKeyboardNotification@@@Details@WRL@Microsoft@@WGA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18020C230 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_18020C230.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@UIWindowManagementJointResizeEvents@@UIApplicationViewChangeListener@@UIImmersiveSettingsCacheNotification@@UIImmersiveRawInputKeyboardNotification@@@Details@WRL@Microsoft@@WGI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18020C250 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_18020C250.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@UIWindowManagementJointResizeEvents@@UIApplicationViewChangeListener@@UIImmersiveSettingsCacheNotification@@UIImmersiveRawInputKeyboardNotification@@@Details@WRL@Microsoft@@WHA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18020C270 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_18020C270.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18007EB00 (InlineIsEqualGUID.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00U?$ImplementsMarker@VCWRLObjectWithSite@@@Details@23@VCImmersiveShellComponent@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800803B0 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00U-$Impleme_ea_1800803B0.c)
 *     ?CastToUnknown@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U?$ImplementsMarker@VCWRLObjectWithSite@@@Details@23@UIDropFeedback@@UITemporaryAppVisual@@UIImmersiveApplicationNotification@@UITempAppVisualHost@@@Details@WRL@Microsoft@@IEAAPEAUIUnknown@@XZ @ 0x1800B0FBC (-CastToUnknown@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U-$ImplementsMarke.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CImmersiveShellComponentWithSite,IWindowManagementJointResizeEvents,IApplicationViewChangeListener,IImmersiveSettingsCacheNotification,IImmersiveRawInputKeyboardNotification>::QueryInterface(
        __int64 a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 v5; // r11
  int CanCastTo; // ebx
  __int64 v7; // r11
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r8
  int v11; // r9d
  _DWORD *v12; // r11
  __int64 v13; // rcx
  __int64 v15; // rax

  *a3 = 0LL;
  if ( (unsigned int)InlineIsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    v15 = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithSite>,IDropFeedback,ITemporaryAppVisual,IImmersiveApplicationNotification,ITempAppVisualHost>::CastToUnknown(a1);
    *a3 = v15;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
    return 0;
  }
  CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithSite>,CImmersiveShellComponent>::CanCastTo(
                a1,
                v5);
  if ( CanCastTo == -2147467262 )
  {
    if ( (unsigned int)InlineIsEqualGUID(v7, &GUID_cec651ad_cb9c_486a_a421_2461291e9789) )
    {
      *a3 = v9;
      CanCastTo = 0;
      goto LABEL_10;
    }
    if ( (unsigned int)InlineIsEqualGUID(v8, &GUID_727f9e97_76ee_497b_a942_b6371328485c) )
    {
      *a3 = v10;
    }
    else
    {
      v13 = v10 + 8;
      if ( *v12 != 188802278
        || v12[1] != *(_DWORD *)&GUID_0b40e4e6_2749_461f_9a84_29491c297f86.Data2
        || v12[2] != *(_DWORD *)GUID_0b40e4e6_2749_461f_9a84_29491c297f86.Data4
        || v12[3] != *(_DWORD *)&GUID_0b40e4e6_2749_461f_9a84_29491c297f86.Data4[4] )
      {
        v13 = v10 + 16;
        if ( *v12 != -1717070075
          || v12[1] != *(_DWORD *)&GUID_99a79705_bfc0_4c43_be58_a929322ee203.Data2
          || v12[2] != *(_DWORD *)GUID_99a79705_bfc0_4c43_be58_a929322ee203.Data4
          || v12[3] != *(_DWORD *)&GUID_99a79705_bfc0_4c43_be58_a929322ee203.Data4[4] )
        {
          CanCastTo = v11;
          goto LABEL_8;
        }
      }
      *a3 = v13;
    }
    CanCastTo = 0;
  }
LABEL_8:
  if ( CanCastTo >= 0 )
LABEL_10:
    (*(void (__fastcall **)(__int64))(*(_QWORD *)*a3 + 8LL))(*a3);
  return (unsigned int)CanCastTo;
}
