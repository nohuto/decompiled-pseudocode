/*
 * XREFs of ?CanCastTo@?$ChainInterfaces@UIApplicationViewStatePositioner@@UIBasicPositioner@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800CF8FC
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@U?$ChainInterfaces@UITabletModePositioner@@UIBasicPositioner@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@U?$ChainInterfaces@UIApplicationViewStatePositioner@@UIBasicPositioner@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UITabletModePositionerInternal@@UITabletModePositionerPriv@@UIStartDismissalPolicy@@UIShellPositionerViewHandoff@@UIApplicationViewChangeListener@@UITabletModeChangeListener@@UIImmersiveMonitorNotification@@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIShellPositionerWindowingDelegationHandler@@UIImmersiveShellHookNotification@@UIMultitaskingViewVisibilityNotification@@UIShellTargetingChangeNotification@@UIFullScreenPositionerPrivateNotification@@UITransitionNotification@@@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800CE630 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1800CE630.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithGITSite@@U?$ChainInterfaces@UIVoiceAssistantPositioner@@UIBasicPositioner@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@U?$ChainInterfaces@UIApplicationViewStatePositioner@@UIBasicPositioner@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIShellPositionerViewHandoff@@UIImmersiveMonitorNotification@@UIInputHostLayoutChanges@@UIAppSwitcherNotification@@UIApplicationViewChangeListener@@UIWindowManagementShowMoveSizeEvents@@UIPrivilegedOperationsConsumer@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800CF9D0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1800CF9D0.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00U?$ChainInterfaces@UIDesktopPositioner@@UIBasicPositioner@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@U?$ChainInterfaces@UIDragDropViewCreationHandler@@UIBasicPositioner@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@U?$ChainInterfaces@UIApplicationViewStatePositioner@@UIBasicPositioner@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@U?$ChainInterfaces@UIShellPositionerViewHandoffWithShowCommand@@UIShellPositionerViewHandoff@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIShellPositionerWithSnapActivation@@UIImmersiveMonitorNotification@@UIApplicationViewChangeListener@@UITabletModeChangeListener@@UIPrivilegedOperationsConsumer@@UIWindowManagementShowMoveSizeEvents@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180211AAC (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00U-$ChainInterfaces@UIDe.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::ChainInterfaces<IApplicationViewStatePositioner,IBasicPositioner,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::CanCastTo(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  if ( (*a2 != 849159280
     || a2[1] != *(_DWORD *)&GUID_329d2470_eefd_4972_9d8a_9e7cffe3b767.Data2
     || a2[2] != *(_DWORD *)GUID_329d2470_eefd_4972_9d8a_9e7cffe3b767.Data4
     || a2[3] != *(_DWORD *)&GUID_329d2470_eefd_4972_9d8a_9e7cffe3b767.Data4[4])
    && (*a2 != 684124641
     || a2[1] != *(_DWORD *)&GUID_28c6e9e1_7ae2_4fd8_9f8f_a33610f81130.Data2
     || a2[2] != *(_DWORD *)GUID_28c6e9e1_7ae2_4fd8_9f8f_a33610f81130.Data4
     || a2[3] != *(_DWORD *)&GUID_28c6e9e1_7ae2_4fd8_9f8f_a33610f81130.Data4[4]) )
  {
    return 2147500034LL;
  }
  *a3 = a1;
  return 0LL;
}
