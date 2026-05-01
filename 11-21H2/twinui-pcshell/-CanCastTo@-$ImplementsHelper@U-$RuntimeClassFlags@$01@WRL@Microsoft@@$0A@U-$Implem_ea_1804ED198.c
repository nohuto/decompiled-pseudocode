/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U?$ImplementsMarker@VCImmersiveShellComponentWithGITSite@@@Details@23@U?$ChainInterfaces@UISurfaceHubPositioner@@UIBasicPositioner@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIShellPositionerViewHandoff@@UIImmersiveMonitorNotification@@UIApplicationViewChangeListener@@UITabletModeChangeListener@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1804ED198
 * Callers:
 *     ??$MakeAndInitialize@VSurfaceHubPositioner@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1800D002C (--$MakeAndInitialize@VSurfaceHubPositioner@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnk.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18007EB00 (InlineIsEqualGUID.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00U?$ImplementsMarker@VCWRLObjectWithGITSite@@@Details@23@VCImmersiveShellComponent@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18007FED0 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00U-$ImplementsMarker@VCW.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIImmersiveMonitorNotification@@UIApplicationViewChangeListener@@UITabletModeChangeListener@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180130F4C (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIImmersiveMonitorNotif.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CImmersiveShellComponentWithGITSite>,Microsoft::WRL::ChainInterfaces<ISurfaceHubPositioner,IBasicPositioner,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IShellPositionerViewHandoff,IImmersiveMonitorNotification,IApplicationViewChangeListener,ITabletModeChangeListener>::CanCastTo(
        __int64 a1,
        int *a2,
        _QWORD *a3)
{
  unsigned int CanCastTo; // edx
  _QWORD *v5; // r8
  _DWORD *v6; // r11
  int v7; // eax
  BOOL IsEqualGUID; // eax
  _QWORD *v9; // r8
  __int64 v10; // r9
  _DWORD *v11; // r11

  CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithGITSite>,CImmersiveShellComponent>::CanCastTo(
                a1,
                a2,
                a3);
  if ( CanCastTo == -2147467262 )
  {
    if ( *v6 == -54125820 )
    {
      if ( v6[1] == *(_DWORD *)&GUID_fcc61b04_e266_4663_ae5d_88381aee8ab2.Data2
        && v6[2] == *(_DWORD *)GUID_fcc61b04_e266_4663_ae5d_88381aee8ab2.Data4 )
      {
        v7 = *(_DWORD *)&GUID_fcc61b04_e266_4663_ae5d_88381aee8ab2.Data4[4];
        goto LABEL_10;
      }
    }
    else if ( *v6 == 684124641
           && v6[1] == *(_DWORD *)&GUID_28c6e9e1_7ae2_4fd8_9f8f_a33610f81130.Data2
           && v6[2] == *(_DWORD *)GUID_28c6e9e1_7ae2_4fd8_9f8f_a33610f81130.Data4 )
    {
      v7 = *(_DWORD *)&GUID_28c6e9e1_7ae2_4fd8_9f8f_a33610f81130.Data4[4];
LABEL_10:
      if ( v6[3] == v7 )
      {
        *v5 = a1 + 104;
        return 0;
      }
    }
    IsEqualGUID = InlineIsEqualGUID(v6, &GUID_ee010e17_919a_4068_868b_675acf787303);
    CanCastTo = 0;
    if ( IsEqualGUID )
      *v9 = v10;
    else
      return (unsigned int)Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IImmersiveMonitorNotification,IApplicationViewChangeListener,ITabletModeChangeListener>::CanCastTo(
                             v10 + 8,
                             v11,
                             v9);
  }
  return CanCastTo;
}
