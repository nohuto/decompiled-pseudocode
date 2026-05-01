/*
 * XREFs of ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@UILauncherTipContextMenu@@UILauncherTipContextMenuSettingChangeListener@@UILauncherTipContextMenuMigration@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800CE510
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@UILauncherTipContextMenu@@UILauncherTipContextMenuSettingChangeListener@@UILauncherTipContextMenuMigration@@@Details@WRL@Microsoft@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802AC540 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1802AC540.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@UILauncherTipContextMenu@@UILauncherTipContextMenuSettingChangeListener@@UILauncherTipContextMenuMigration@@@Details@WRL@Microsoft@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802AC560 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1802AC560.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@UILauncherTipContextMenu@@UILauncherTipContextMenuSettingChangeListener@@UILauncherTipContextMenuMigration@@@Details@WRL@Microsoft@@WFI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802AC580 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1802AC580.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@UILauncherTipContextMenu@@UILauncherTipContextMenuSettingChangeListener@@UILauncherTipContextMenuMigration@@@Details@WRL@Microsoft@@WGA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802AC5A0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1802AC5A0.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@UILauncherTipContextMenu@@UILauncherTipContextMenuSettingChangeListener@@UILauncherTipContextMenuMigration@@@Details@WRL@Microsoft@@WGI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802AC5C0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1802AC5C0.c)
 * Callees:
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00U?$ImplementsMarker@VCWRLObjectWithSite@@@Details@23@VCImmersiveShellComponent@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800CBD50 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00U-$Impleme_ea_1800CBD50.c)
 *     InlineIsEqualGUID @ 0x1800CD110 (InlineIsEqualGUID.c)
 *     ?CastToUnknown@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U?$ImplementsMarker@VCWRLObjectWithSite@@@Details@23@UIDropFeedback@@UITemporaryAppVisual@@UIImmersiveApplicationNotification@@UITempAppVisualHost@@@Details@WRL@Microsoft@@IEAAPEAUIUnknown@@XZ @ 0x1800EB1E4 (-CastToUnknown@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U-$ImplementsMarke.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CImmersiveShellComponentWithSite,ILauncherTipContextMenu,ILauncherTipContextMenuSettingChangeListener,ILauncherTipContextMenuMigration>::QueryInterface(
        __int64 a1,
        _DWORD *a2,
        __int64 *a3)
{
  _QWORD *v5; // r8
  _DWORD *v6; // r11
  int CanCastTo; // ebx
  _DWORD *v8; // r11
  __int64 v9; // r8
  int v10; // r9d
  _DWORD *v11; // r11
  __int64 v12; // r8
  __int64 v14; // rax

  *a3 = 0LL;
  if ( InlineIsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    v14 = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithSite>,IDropFeedback,ITemporaryAppVisual,IImmersiveApplicationNotification,ITempAppVisualHost>::CastToUnknown(a1);
    *a3 = v14;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
    return 0;
  }
  CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithSite>,CImmersiveShellComponent>::CanCastTo(
                a1,
                v6,
                v5);
  if ( CanCastTo == -2147467262 )
  {
    if ( InlineIsEqualGUID(v8, &GUID_b8c1db5f_cbb3_48bc_afd9_ce6b880c79ed) )
    {
      *a3 = v9;
      CanCastTo = 0;
      goto LABEL_10;
    }
    v12 = v9 + 8;
    if ( *v11 == 1549888188
      && v11[1] == *(_DWORD *)&GUID_5c616abc_7341_4100_950b_69f3b00f548c.Data2
      && v11[2] == *(_DWORD *)GUID_5c616abc_7341_4100_950b_69f3b00f548c.Data4
      && v11[3] == *(_DWORD *)&GUID_5c616abc_7341_4100_950b_69f3b00f548c.Data4[4]
      || (v12 += 8LL, *v11 == -1013690902)
      && v11[1] == *(_DWORD *)&GUID_c3944dea_7320_4b6f_871d_3c414eb61070.Data2
      && v11[2] == *(_DWORD *)GUID_c3944dea_7320_4b6f_871d_3c414eb61070.Data4
      && v11[3] == *(_DWORD *)&GUID_c3944dea_7320_4b6f_871d_3c414eb61070.Data4[4] )
    {
      *a3 = v12;
      CanCastTo = 0;
    }
    else
    {
      CanCastTo = v10;
    }
  }
  if ( CanCastTo >= 0 )
LABEL_10:
    (*(void (__fastcall **)(__int64))(*(_QWORD *)*a3 + 8LL))(*a3);
  return (unsigned int)CanCastTo;
}
