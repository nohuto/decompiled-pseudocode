/*
 * XREFs of ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@U?$ChainInterfaces@UITabletModeViewManagerInternal@@UITabletModeViewManager@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIEdgeUiTouchInvocation@@UIEdgeUiMouseInvocation@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180085600
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@U?$ChainInterfaces@UITabletModeViewManagerInternal@@UITabletModeViewManager@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIEdgeUiTouchInvocation@@UIEdgeUiMouseInvocation@@@Details@WRL@Microsoft@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18020B570 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_18020B570.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@U?$ChainInterfaces@UITabletModeViewManagerInternal@@UITabletModeViewManager@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIEdgeUiTouchInvocation@@UIEdgeUiMouseInvocation@@@Details@WRL@Microsoft@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18020B590 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_18020B590.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@U?$ChainInterfaces@UITabletModeViewManagerInternal@@UITabletModeViewManager@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIEdgeUiTouchInvocation@@UIEdgeUiMouseInvocation@@@Details@WRL@Microsoft@@WFI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18020B5B0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_18020B5B0.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@U?$ChainInterfaces@UITabletModeViewManagerInternal@@UITabletModeViewManager@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIEdgeUiTouchInvocation@@UIEdgeUiMouseInvocation@@@Details@WRL@Microsoft@@WGA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18020B5D0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_18020B5D0.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@U?$ChainInterfaces@UITabletModeViewManagerInternal@@UITabletModeViewManager@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIEdgeUiTouchInvocation@@UIEdgeUiMouseInvocation@@@Details@WRL@Microsoft@@WGI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18020B5F0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_18020B5F0.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18007EB00 (InlineIsEqualGUID.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00U?$ImplementsMarker@VCWRLObjectWithSite@@@Details@23@VCImmersiveShellComponent@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800803B0 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00U-$Impleme_ea_1800803B0.c)
 *     ?CastToUnknown@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U?$ImplementsMarker@VCWRLObjectWithSite@@@Details@23@UIDropFeedback@@UITemporaryAppVisual@@UIImmersiveApplicationNotification@@UITempAppVisualHost@@@Details@WRL@Microsoft@@IEAAPEAUIUnknown@@XZ @ 0x1800B0FBC (-CastToUnknown@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U-$ImplementsMarke.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CImmersiveShellComponentWithSite,Microsoft::WRL::ChainInterfaces<ITabletModeViewManagerInternal,ITabletModeViewManager,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IEdgeUiTouchInvocation,IEdgeUiMouseInvocation>::QueryInterface(
        __int64 a1,
        _DWORD *a2,
        __int64 *a3)
{
  _QWORD *v5; // r8
  int *v6; // r11
  int CanCastTo; // ebx
  _DWORD *v8; // r11
  __int64 v9; // r8
  int v10; // r9d
  _DWORD *v11; // r11
  __int64 v13; // rax
  int v14; // eax

  *a3 = 0LL;
  if ( InlineIsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    v13 = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithSite>,IDropFeedback,ITemporaryAppVisual,IImmersiveApplicationNotification,ITempAppVisualHost>::CastToUnknown(a1);
    *a3 = v13;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
    return 0;
  }
  CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithSite>,CImmersiveShellComponent>::CanCastTo(
                a1,
                v6,
                v5);
  if ( CanCastTo == -2147467262 )
  {
    v9 = a1 + 88;
    if ( *v8 == -2079748236 )
    {
      if ( v8[1] != *(_DWORD *)&GUID_84098f74_87a7_4582_b398_f6c3178e9dd6.Data2
        || v8[2] != *(_DWORD *)GUID_84098f74_87a7_4582_b398_f6c3178e9dd6.Data4 )
      {
        goto LABEL_5;
      }
      v14 = *(_DWORD *)&GUID_84098f74_87a7_4582_b398_f6c3178e9dd6.Data4[4];
    }
    else
    {
      if ( *v8 != 926832335
        || v8[1] != *(_DWORD *)&GUID_373e56cf_0a1b_4b4a_a1a4_a46b25ffd7e3.Data2
        || v8[2] != *(_DWORD *)GUID_373e56cf_0a1b_4b4a_a1a4_a46b25ffd7e3.Data4 )
      {
        goto LABEL_5;
      }
      v14 = *(_DWORD *)&GUID_373e56cf_0a1b_4b4a_a1a4_a46b25ffd7e3.Data4[4];
    }
    if ( v8[3] == v14 )
    {
LABEL_12:
      *a3 = v9;
      CanCastTo = 0;
      goto LABEL_8;
    }
LABEL_5:
    if ( !InlineIsEqualGUID(v8, &GUID_7e567aed_92f2_4ad4_be89_4be989ec6cef) )
    {
      v9 += 8LL;
      if ( *v11 != -1370471653
        || v11[1] != *(_DWORD *)&GUID_ae50431b_f86a_4c3c_b11d_2910d9407613.Data2
        || v11[2] != *(_DWORD *)GUID_ae50431b_f86a_4c3c_b11d_2910d9407613.Data4
        || v11[3] != *(_DWORD *)&GUID_ae50431b_f86a_4c3c_b11d_2910d9407613.Data4[4] )
      {
        CanCastTo = v10;
        goto LABEL_8;
      }
    }
    goto LABEL_12;
  }
LABEL_8:
  if ( CanCastTo >= 0 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)*a3 + 8LL))(*a3);
  return (unsigned int)CanCastTo;
}
