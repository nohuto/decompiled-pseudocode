/*
 * XREFs of ?VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ @ 0x18001ABBC
 * Callers:
 *     ?GetLuid@BamoActivationControllerProxy@@UEAAAEBU_LUID@@XZ @ 0x18001AB90 (-GetLuid@BamoActivationControllerProxy@@UEAAAEBU_LUID@@XZ.c)
 *     ?OnActivationObjectNotification@ForegroundManager@@AEAAXPEBU_tagActivationObjectNotification@@@Z @ 0x18001D11C (-OnActivationObjectNotification@ForegroundManager@@AEAAXPEBU_tagActivationObjectNotification@@@Z.c)
 *     ?GetInputSinkData@BamoShellGesturesClientProxy@@UEAAAEBUInputSinkData@@XZ @ 0x18004D090 (-GetInputSinkData@BamoShellGesturesClientProxy@@UEAAAEBUInputSinkData@@XZ.c)
 *     ?GetShellHandwritingHostServer@BamoInputSystemProxy@@UEAAPEAVBamoShellHandwritingHostServerProxy@@XZ @ 0x18006F780 (-GetShellHandwritingHostServer@BamoInputSystemProxy@@UEAAPEAVBamoShellHandwritingHostServerProxy.c)
 *     ?GetOcclusionRects@BamoSystemContextEndpointStub@@UEAAPEAVBamoList_DisplayOcclusionRect_Proxy@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@XZ @ 0x1800B1360 (-GetOcclusionRects@BamoSystemContextEndpointStub@@UEAAPEAVBamoList_DisplayOcclusionRect_Proxy@IS.c)
 *     ?GetTouchpadRects@BamoSystemContextEndpointStub@@UEAAPEAVBamoList_VirtualTouchpadRect_Proxy@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@XZ @ 0x1800B1390 (-GetTouchpadRects@BamoSystemContextEndpointStub@@UEAAPEAVBamoList_VirtualTouchpadRect_Proxy@ISMB.c)
 *     ?find_and_remove_if@ActivationWatcherBamoPrincipal@@AEAAJV?$function@$$A6A_NPEAVActivatableEntityBamoPrincipal@@@Z@std@@@Z @ 0x1800B80AC (-find_and_remove_if@ActivationWatcherBamoPrincipal@@AEAAJV-$function@$$A6A_NPEAVActivatableEntit.c)
 *     ?GetCallbacks@BamoMPCConstantManagerClientStub@@UEAAPEAVBamoMPCConstantManagerClientCallbacksProxy@@XZ @ 0x1800BDED0 (-GetCallbacks@BamoMPCConstantManagerClientStub@@UEAAPEAVBamoMPCConstantManagerClientCallbacksPro.c)
 *     ?CreateDataSource@AnimationDataProvider@@UEBA?AV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@I@Z @ 0x18011E170 (-CreateDataSource@AnimationDataProvider@@UEBA-AV-$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@I.c)
 *     ?GetBamoDataSourceStub@AnimationDataProvider@@UEBA?AV?$ComPtr@VBamoDataSourceStub@@@WRL@Microsoft@@V?$ComPtr@VDataSourcePrincipal@@@34@@Z @ 0x18011E5E0 (-GetBamoDataSourceStub@AnimationDataProvider@@UEBA-AV-$ComPtr@VBamoDataSourceStub@@@WRL@Microsof.c)
 *     ?GetActivationWatcher@BamoInputSystemProxy@@UEAAPEAVBamoActivationWatcherProxy@@XZ @ 0x180132BB0 (-GetActivationWatcher@BamoInputSystemProxy@@UEAAPEAVBamoActivationWatcherProxy@@XZ.c)
 *     ?GetContainerGuid@BamoContainerInfoInputObjectProxy@@UEAAAEBU_GUID@@XZ @ 0x180132C60 (-GetContainerGuid@BamoContainerInfoInputObjectProxy@@UEAAAEBU_GUID@@XZ.c)
 *     ?GetContainerId@BamoContainerInfoInputObjectProxy@@UEAAAEBUCONTAINER_ID@@XZ @ 0x180132C90 (-GetContainerId@BamoContainerInfoInputObjectProxy@@UEAAAEBUCONTAINER_ID@@XZ.c)
 *     ?GetControlPoints@BamoDragSourceClientProxy@@UEAAXPEAPEBUtagPOINT@@PEAI@Z @ 0x180132CC0 (-GetControlPoints@BamoDragSourceClientProxy@@UEAAXPEAPEBUtagPOINT@@PEAI@Z.c)
 *     ?GetControlPoints@BamoEdgyDragSourceClientProxy@@UEAAXPEAPEBUtagPOINT@@PEAI@Z @ 0x180132D10 (-GetControlPoints@BamoEdgyDragSourceClientProxy@@UEAAXPEAPEBUtagPOINT@@PEAI@Z.c)
 *     ?GetControllerNavigationManager@BamoInputSystemProxy@@UEAAPEAVBamoControllerNavigationManagerProxy@@XZ @ 0x180132D60 (-GetControllerNavigationManager@BamoInputSystemProxy@@UEAAPEAVBamoControllerNavigationManagerPro.c)
 *     ?GetDeviceDockServer@BamoInputSystemProxy@@UEAAPEAVBamoDeviceDockServerProxy@@XZ @ 0x180132D90 (-GetDeviceDockServer@BamoInputSystemProxy@@UEAAPEAVBamoDeviceDockServerProxy@@XZ.c)
 *     ?GetDeviceId@BamoDockableDeviceProxy@@UEAAAEBUDockableDeviceIdentity@@XZ @ 0x180132DC0 (-GetDeviceId@BamoDockableDeviceProxy@@UEAAAEBUDockableDeviceIdentity@@XZ.c)
 *     ?GetDisplayOcclusionLogicalRange@BamoDockDeviceProxy@@UEAAAEBUtagRECT@@XZ @ 0x180132E30 (-GetDisplayOcclusionLogicalRange@BamoDockDeviceProxy@@UEAAAEBUtagRECT@@XZ.c)
 *     ?GetEdgyControllerServer@BamoInputSystemProxy@@UEAAPEAVBamoEdgyControllerServerProxy@@XZ @ 0x180132EE0 (-GetEdgyControllerServer@BamoInputSystemProxy@@UEAAPEAVBamoEdgyControllerServerProxy@@XZ.c)
 *     ?GetEndpointId@BamoUIAHitTestInputObjectProxy@@UEAAAEBU_GUID@@XZ @ 0x180132F90 (-GetEndpointId@BamoUIAHitTestInputObjectProxy@@UEAAAEBU_GUID@@XZ.c)
 *     ?GetGestureDirection@BamoEdgyGestureRecognitionConfigurationProxy@@UEAAAEBUVector2@Numerics@Foundation@Windows@@XZ @ 0x180133000 (-GetGestureDirection@BamoEdgyGestureRecognitionConfigurationProxy@@UEAAAEBUVector2@Numerics@Foun.c)
 *     ?GetGestureRecognitionConfiguration@BamoEdgyDragSourceClientProxy@@UEAAPEAVBamoEdgyGestureRecognitionConfigurationProxy@@XZ @ 0x180133070 (-GetGestureRecognitionConfiguration@BamoEdgyDragSourceClientProxy@@UEAAPEAVBamoEdgyGestureRecogn.c)
 *     ?GetGestureRecognitionConfiguration@BamoEdgyNotificationSourceClientProxy@@UEAAPEAVBamoEdgyGestureRecognitionConfigurationProxy@@XZ @ 0x1801330A0 (-GetGestureRecognitionConfiguration@BamoEdgyNotificationSourceClientProxy@@UEAAPEAVBamoEdgyGestu.c)
 *     ?GetGestureServices@BamoInputSystemProxy@@UEAAPEAVBamoGestureServicesProxy@@XZ @ 0x1801330D0 (-GetGestureServices@BamoInputSystemProxy@@UEAAPEAVBamoGestureServicesProxy@@XZ.c)
 *     ?GetHaptics@BamoPenDeviceProxy@@UEAAPEAVBamoSimpleHapticsControllerProxy@@XZ @ 0x180133140 (-GetHaptics@BamoPenDeviceProxy@@UEAAPEAVBamoSimpleHapticsControllerProxy@@XZ.c)
 *     ?GetHeatGripService@BamoInputSystemProxy@@UEAAPEAVBamoHeatGripServiceProxy@@XZ @ 0x180133170 (-GetHeatGripService@BamoInputSystemProxy@@UEAAPEAVBamoHeatGripServiceProxy@@XZ.c)
 *     ?GetInputDeliveryServer@BamoInputSystemProxy@@UEAAPEAVBamoInputDeliveryServerProxy@@XZ @ 0x1801332E0 (-GetInputDeliveryServer@BamoInputSystemProxy@@UEAAPEAVBamoInputDeliveryServerProxy@@XZ.c)
 *     ?GetInputObserverManager@BamoInputSystemProxy@@UEAAPEAVBamoInputObserverManagerProxy@@XZ @ 0x180133310 (-GetInputObserverManager@BamoInputSystemProxy@@UEAAPEAVBamoInputObserverManagerProxy@@XZ.c)
 *     ?GetInputProcessManager@BamoInputSystemInternalProxy@@UEAAPEAVBamoInputProcessManagerProxy@@XZ @ 0x180133340 (-GetInputProcessManager@BamoInputSystemInternalProxy@@UEAAPEAVBamoInputProcessManagerProxy@@XZ.c)
 *     ?GetInputSiteManager@BamoInputSystemProxy@@UEAAPEAVBamoInputSiteManagerProxy@@XZ @ 0x180133370 (-GetInputSiteManager@BamoInputSystemProxy@@UEAAPEAVBamoInputSiteManagerProxy@@XZ.c)
 *     ?GetInputSpace@BamoInputSpacePayloadProxy@@UEAAAEBUINPUT_SPACE@@XZ @ 0x1801333A0 (-GetInputSpace@BamoInputSpacePayloadProxy@@UEAAAEBUINPUT_SPACE@@XZ.c)
 *     ?GetInterfacePath@BamoDockableDeviceProxy@@UEAAPEBGXZ @ 0x1801333D0 (-GetInterfacePath@BamoDockableDeviceProxy@@UEAAPEBGXZ.c)
 *     ?GetPanelId@BamoDockDeviceProxy@@UEAAPEBGXZ @ 0x180133550 (-GetPanelId@BamoDockDeviceProxy@@UEAAPEBGXZ.c)
 *     ?GetPenDeviceManager@BamoInputSystemProxy@@UEAAPEAVBamoPenDeviceManagerProxy@@XZ @ 0x1801335C0 (-GetPenDeviceManager@BamoInputSystemProxy@@UEAAPEAVBamoPenDeviceManagerProxy@@XZ.c)
 *     ?GetPenEventsDispatcher@BamoInputSystemProxy@@UEAAPEAVBamoPenEventsDispatcherProxy@@XZ @ 0x1801335F0 (-GetPenEventsDispatcher@BamoInputSystemProxy@@UEAAPEAVBamoPenEventsDispatcherProxy@@XZ.c)
 *     ?GetRegions@BamoInputSpacePayloadProxy@@UEAAXPEAPEBUINPUT_SPACE_REGION@@PEAI@Z @ 0x1801336E0 (-GetRegions@BamoInputSpacePayloadProxy@@UEAAXPEAPEBUINPUT_SPACE_REGION@@PEAI@Z.c)
 *     ?GetResizeContextualProcessor@BamoInputSystemProxy@@UEAAPEAVBamoResizeContextualProcessorProxy@@XZ @ 0x180133730 (-GetResizeContextualProcessor@BamoInputSystemProxy@@UEAAPEAVBamoResizeContextualProcessorProxy@@.c)
 *     ?GetSupportedFeedback@BamoSimpleHapticsControllerProxy@@UEAAPEAVBamoList_SimpleHapticsControllerFeedback_Proxy@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@XZ @ 0x180133840 (-GetSupportedFeedback@BamoSimpleHapticsControllerProxy@@UEAAPEAVBamoList_SimpleHapticsController.c)
 *     ?GetSystemContextManager@BamoInputSystemInternalProxy@@UEAAPEAVBamoSystemContextManagerProxy@@XZ @ 0x1801338B0 (-GetSystemContextManager@BamoInputSystemInternalProxy@@UEAAPEAVBamoSystemContextManagerProxy@@XZ.c)
 *     ?GetSystemCursorController@BamoInputSystemProxy@@UEAAPEAVBamoSystemCursorControllerProxy@@XZ @ 0x1801338E0 (-GetSystemCursorController@BamoInputSystemProxy@@UEAAPEAVBamoSystemCursorControllerProxy@@XZ.c)
 *     ?GetTestCommands@BamoInputSystemProxy@@UEAAPEAVBamoTestCommandsProxy@@XZ @ 0x180133910 (-GetTestCommands@BamoInputSystemProxy@@UEAAPEAVBamoTestCommandsProxy@@XZ.c)
 *     ?GetType@BamoDragAreaClientProxy@@UEAAAEBU_GUID@@XZ @ 0x180133940 (-GetType@BamoDragAreaClientProxy@@UEAAAEBU_GUID@@XZ.c)
 *     ?GetType@BamoDragSourceClientProxy@@UEAAAEBU_GUID@@XZ @ 0x180133970 (-GetType@BamoDragSourceClientProxy@@UEAAAEBU_GUID@@XZ.c)
 *     ?GetType@BamoDropTargetClientProxy@@UEAAAEBU_GUID@@XZ @ 0x1801339A0 (-GetType@BamoDropTargetClientProxy@@UEAAAEBU_GUID@@XZ.c)
 *     ?GetType@BamoEdgyDragSourceClientProxy@@UEAAAEBU_GUID@@XZ @ 0x1801339D0 (-GetType@BamoEdgyDragSourceClientProxy@@UEAAAEBU_GUID@@XZ.c)
 *     ?GetType@BamoInputForwardAreaInputObjectProxy@@UEAAAEBU_GUID@@XZ @ 0x180133A00 (-GetType@BamoInputForwardAreaInputObjectProxy@@UEAAAEBU_GUID@@XZ.c)
 *     ?GetType@BamoInputForwardTargetInputObjectProxy@@UEAAAEBU_GUID@@XZ @ 0x180133A30 (-GetType@BamoInputForwardTargetInputObjectProxy@@UEAAAEBU_GUID@@XZ.c)
 *     ?GetType@BamoResizeAreaClientProxy@@UEAAAEBU_GUID@@XZ @ 0x180133A60 (-GetType@BamoResizeAreaClientProxy@@UEAAAEBU_GUID@@XZ.c)
 *     ?GetType@BamoResizeControllerClientProxy@@UEAAAEBU_GUID@@XZ @ 0x180133A90 (-GetType@BamoResizeControllerClientProxy@@UEAAAEBU_GUID@@XZ.c)
 *     ?GetUIAHitTest@BamoInputSystemProxy@@UEAAPEAVBamoUIAHitTestProxy@@XZ @ 0x180133AC0 (-GetUIAHitTest@BamoInputSystemProxy@@UEAAPEAVBamoUIAHitTestProxy@@XZ.c)
 *     ?GetUniqueId@BamoPenDeviceProxy@@UEAAAEBU_GUID@@XZ @ 0x180133AF0 (-GetUniqueId@BamoPenDeviceProxy@@UEAAAEBU_GUID@@XZ.c)
 *     ?GetPrimaryClickZone@BamoVirtualTouchpadControllerProxy@@UEAAAEBUPhysicalClickZone@Input@Internal@UI@Windows@@XZ @ 0x1801529E0 (-GetPrimaryClickZone@BamoVirtualTouchpadControllerProxy@@UEAAAEBUPhysicalClickZone@Input@Interna.c)
 *     ?GetSecondaryClickZone@BamoVirtualTouchpadControllerProxy@@UEAAAEBUPhysicalClickZone@Input@Internal@UI@Windows@@XZ @ 0x180152A10 (-GetSecondaryClickZone@BamoVirtualTouchpadControllerProxy@@UEAAAEBUPhysicalClickZone@Input@Inter.c)
 *     ?GetSize@BamoVirtualTouchpadControllerProxy@@UEAAAEBUVirtualTouchpadSize@Input@Internal@UI@Windows@@XZ @ 0x180152A40 (-GetSize@BamoVirtualTouchpadControllerProxy@@UEAAAEBUVirtualTouchpadSize@Input@Internal@UI@Windo.c)
 *     ??$GetStructAt@UDisplayOcclusionRect@@@Bamo@Microsoft@@YAAEBUDisplayOcclusionRect@@PEAVBaseBamoConnection@01@AEAV?$vector@UDisplayOcclusionRect@@V?$allocator@UDisplayOcclusionRect@@@std@@@std@@I@Z @ 0x1801574F0 (--$GetStructAt@UDisplayOcclusionRect@@@Bamo@Microsoft@@YAAEBUDisplayOcclusionRect@@PEAVBaseBamoC.c)
 *     ??$GetStructAt@UVirtualTouchpadRect@@@Bamo@Microsoft@@YAAEBUVirtualTouchpadRect@@PEAVBaseBamoConnection@01@AEAV?$vector@UVirtualTouchpadRect@@V?$allocator@UVirtualTouchpadRect@@@std@@@std@@I@Z @ 0x1801588E8 (--$GetStructAt@UVirtualTouchpadRect@@@Bamo@Microsoft@@YAAEBUVirtualTouchpadRect@@PEAVBaseBamoCon.c)
 *     ?GetSourceType@BamoDragManagerClientProxy@@UEAAAEBU_GUID@@XZ @ 0x180163A00 (-GetSourceType@BamoDragManagerClientProxy@@UEAAAEBU_GUID@@XZ.c)
 *     ?GetData@BamoAnimationTargetClientProxy@@UEAAAEBUGestureAnimationData@Input@Internal@UI@Windows@@XZ @ 0x180163F20 (-GetData@BamoAnimationTargetClientProxy@@UEAAAEBUGestureAnimationData@Input@Internal@UI@Windows@.c)
 *     ?GetType@BamoManualDragAreaClientProxy@@UEAAAEBU_GUID@@XZ @ 0x180167B80 (-GetType@BamoManualDragAreaClientProxy@@UEAAAEBU_GUID@@XZ.c)
 *     ?GetType@BamoManualResizeAreaClientProxy@@UEAAAEBU_GUID@@XZ @ 0x18016F9C0 (-GetType@BamoManualResizeAreaClientProxy@@UEAAAEBU_GUID@@XZ.c)
 *     ?GetGestureDirection@BamoEdgyControllerClientProxy@@UEAAAEBUD2D_VECTOR_2F@@XZ @ 0x180178F50 (-GetGestureDirection@BamoEdgyControllerClientProxy@@UEAAAEBUD2D_VECTOR_2F@@XZ.c)
 *     ?GetVertex0@BamoEdgyControllerClientProxy@@UEAAAEBUD2D_VECTOR_2F@@XZ @ 0x180179040 (-GetVertex0@BamoEdgyControllerClientProxy@@UEAAAEBUD2D_VECTOR_2F@@XZ.c)
 *     ?GetVertex1@BamoEdgyControllerClientProxy@@UEAAAEBUD2D_VECTOR_2F@@XZ @ 0x180179070 (-GetVertex1@BamoEdgyControllerClientProxy@@UEAAAEBUD2D_VECTOR_2F@@XZ.c)
 *     ?GetMPCConstantManagerClient@BamoMPCManagerProxy@@UEAAPEAVBamoMPCConstantManagerClientProxy@@XZ @ 0x180187AB0 (-GetMPCConstantManagerClient@BamoMPCManagerProxy@@UEAAPEAVBamoMPCConstantManagerClientProxy@@XZ.c)
 *     ?GetBounds@BamoControllerNavigationClientProxy@@UEAAAEBUtagRECT@@XZ @ 0x1801A0D60 (-GetBounds@BamoControllerNavigationClientProxy@@UEAAAEBUtagRECT@@XZ.c)
 *     ?GetBounds@BamoControllerNavigationOverrideProxy@@UEAAAEBUtagRECT@@XZ @ 0x1801A0D90 (-GetBounds@BamoControllerNavigationOverrideProxy@@UEAAAEBUtagRECT@@XZ.c)
 *     ?GetResumePosition@BamoControllerNavigationOverrideProxy@@UEAAAEBUtagPOINT@@XZ @ 0x1801A0EF0 (-GetResumePosition@BamoControllerNavigationOverrideProxy@@UEAAAEBUtagPOINT@@XZ.c)
 *     ?GetStartPosition@BamoControllerNavigationClientProxy@@UEAAAEBUtagPOINT@@XZ @ 0x1801A0F20 (-GetStartPosition@BamoControllerNavigationClientProxy@@UEAAAEBUtagPOINT@@XZ.c)
 *     ?RemoveRIMDevice@PenDeviceManager@@QEAAXPEAX@Z @ 0x1801B409C (-RemoveRIMDevice@PenDeviceManager@@QEAAXPEAX@Z.c)
 *     ?InjectTouchInput@InputInjectionClientProxy@@MEAAJPEAVBamoList_TouchInjectionContact_Proxy@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@@Z @ 0x1801C3DD0 (-InjectTouchInput@InputInjectionClientProxy@@MEAAJPEAVBamoList_TouchInjectionContact_Proxy@ISMBa.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18005907C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall Microsoft::BamoImpl::BaseBamoConnectionImpl::VerifyLockHeldIfOffThread(
        Microsoft::BamoImpl::BaseBamoConnectionImpl *this)
{
  DWORD CurrentThreadId; // edi
  const char *v3; // r9
  int v4; // eax
  int v5; // eax
  const char *v6; // r9
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v9; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_QWORD *)this + 8) )
  {
    CurrentThreadId = GetCurrentThreadId();
    if ( *((_DWORD *)this + 46) != CurrentThreadId )
    {
      v4 = *((_DWORD *)this + 6);
      if ( v4 )
      {
        if ( v4 != CurrentThreadId )
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0x8F5,
            (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
            v3);
      }
      else
      {
        v5 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 7) + 88LL))(*((_QWORD *)this + 7), &v9);
        if ( v5 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x8FF,
            (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
            (const char *)(unsigned int)v5,
            v7);
        if ( CurrentThreadId != v9 )
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0x901,
            (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
            v6);
      }
    }
  }
}
