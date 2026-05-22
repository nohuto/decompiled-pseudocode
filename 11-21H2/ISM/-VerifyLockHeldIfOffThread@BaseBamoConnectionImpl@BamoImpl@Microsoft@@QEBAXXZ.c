/*
 * XREFs of ?VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ @ 0x18004C968
 * Callers:
 *     ?OnActivationObjectNotification@ForegroundManager@@AEAAXPEBU_tagActivationObjectNotification@@@Z @ 0x180012230 (-OnActivationObjectNotification@ForegroundManager@@AEAAXPEBU_tagActivationObjectNotification@@@Z.c)
 *     ?find_and_return_if@ActivationWatcherBamoPrincipal@@AEAA?AV?$com_ptr_t@VActivatableEntityBamoPrincipal@@Uerr_exception_policy@wil@@@wil@@V?$function@$$A6A_NPEAVActivatableEntityBamoPrincipal@@@Z@std@@@Z @ 0x18004CB20 (-find_and_return_if@ActivationWatcherBamoPrincipal@@AEAA-AV-$com_ptr_t@VActivatableEntityBamoPri.c)
 *     ?GetOcclusionRects@BamoSystemContextEndpointStub@@UEAAPEAVBamoList_DisplayOcclusionRect_Proxy@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@XZ @ 0x180087C20 (-GetOcclusionRects@BamoSystemContextEndpointStub@@UEAAPEAVBamoList_DisplayOcclusionRect_Proxy@IS.c)
 *     ?GetTouchpadRects@BamoSystemContextEndpointStub@@UEAAPEAVBamoList_VirtualTouchpadRect_Proxy@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@XZ @ 0x180087C50 (-GetTouchpadRects@BamoSystemContextEndpointStub@@UEAAPEAVBamoList_VirtualTouchpadRect_Proxy@ISMB.c)
 *     ?find_and_remove_if@ActivationWatcherBamoPrincipal@@AEAAJV?$function@$$A6A_NPEAVActivatableEntityBamoPrincipal@@@Z@std@@@Z @ 0x18008EA24 (-find_and_remove_if@ActivationWatcherBamoPrincipal@@AEAAJV-$function@$$A6A_NPEAVActivatableEntit.c)
 *     ?GetCallbacks@BamoMPCConstantManagerClientStub@@UEAAPEAVBamoMPCConstantManagerClientCallbacksProxy@@XZ @ 0x1800950B0 (-GetCallbacks@BamoMPCConstantManagerClientStub@@UEAAPEAVBamoMPCConstantManagerClientCallbacksPro.c)
 *     ?CreateDataSource@AnimationDataProvider@@UEBA?AV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@I@Z @ 0x1800F5830 (-CreateDataSource@AnimationDataProvider@@UEBA-AV-$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@I.c)
 *     ?GetBamoDataSourceStub@AnimationDataProvider@@UEBA?AV?$ComPtr@VBamoDataSourceStub@@@WRL@Microsoft@@V?$ComPtr@VDataSourcePrincipal@@@34@@Z @ 0x1800F5AB0 (-GetBamoDataSourceStub@AnimationDataProvider@@UEBA-AV-$ComPtr@VBamoDataSourceStub@@@WRL@Microsof.c)
 *     ?GetActivationWatcher@BamoInputSystemProxy@@UEAAPEAVBamoActivationWatcherProxy@@XZ @ 0x180109860 (-GetActivationWatcher@BamoInputSystemProxy@@UEAAPEAVBamoActivationWatcherProxy@@XZ.c)
 *     ?GetContainerGuid@BamoContainerInfoInputObjectProxy@@UEAAAEBU_GUID@@XZ @ 0x180109910 (-GetContainerGuid@BamoContainerInfoInputObjectProxy@@UEAAAEBU_GUID@@XZ.c)
 *     ?GetContainerId@BamoContainerInfoInputObjectProxy@@UEAAAEBUCONTAINER_ID@@XZ @ 0x180109940 (-GetContainerId@BamoContainerInfoInputObjectProxy@@UEAAAEBUCONTAINER_ID@@XZ.c)
 *     ?GetControlPoints@BamoDragSourceClientProxy@@UEAAXPEAPEBUtagPOINT@@PEAI@Z @ 0x180109970 (-GetControlPoints@BamoDragSourceClientProxy@@UEAAXPEAPEBUtagPOINT@@PEAI@Z.c)
 *     ?GetControlPoints@BamoEdgyDragSourceClientProxy@@UEAAXPEAPEBUtagPOINT@@PEAI@Z @ 0x1801099C0 (-GetControlPoints@BamoEdgyDragSourceClientProxy@@UEAAXPEAPEBUtagPOINT@@PEAI@Z.c)
 *     ?GetControllerNavigationManager@BamoInputSystemProxy@@UEAAPEAVBamoControllerNavigationManagerProxy@@XZ @ 0x180109A10 (-GetControllerNavigationManager@BamoInputSystemProxy@@UEAAPEAVBamoControllerNavigationManagerPro.c)
 *     ?GetDeviceDockServer@BamoInputSystemProxy@@UEAAPEAVBamoDeviceDockServerProxy@@XZ @ 0x180109A40 (-GetDeviceDockServer@BamoInputSystemProxy@@UEAAPEAVBamoDeviceDockServerProxy@@XZ.c)
 *     ?GetDeviceId@BamoDockableDeviceProxy@@UEAAAEBUDockableDeviceIdentity@@XZ @ 0x180109A70 (-GetDeviceId@BamoDockableDeviceProxy@@UEAAAEBUDockableDeviceIdentity@@XZ.c)
 *     ?GetDisplayOcclusionLogicalRange@BamoDockDeviceProxy@@UEAAAEBUtagRECT@@XZ @ 0x180109AE0 (-GetDisplayOcclusionLogicalRange@BamoDockDeviceProxy@@UEAAAEBUtagRECT@@XZ.c)
 *     ?GetDragProcessorManager@BamoInputSystemProxy@@UEAAPEAVBamoDragProcessorManagerProxy@@XZ @ 0x180109B50 (-GetDragProcessorManager@BamoInputSystemProxy@@UEAAPEAVBamoDragProcessorManagerProxy@@XZ.c)
 *     ?GetEdgyControllerServer@BamoInputSystemProxy@@UEAAPEAVBamoEdgyControllerServerProxy@@XZ @ 0x180109BC0 (-GetEdgyControllerServer@BamoInputSystemProxy@@UEAAPEAVBamoEdgyControllerServerProxy@@XZ.c)
 *     ?GetEndpointId@BamoUIAHitTestInputObjectProxy@@UEAAAEBU_GUID@@XZ @ 0x180109C70 (-GetEndpointId@BamoUIAHitTestInputObjectProxy@@UEAAAEBU_GUID@@XZ.c)
 *     ?GetGestureDirection@BamoEdgyGestureRecognitionConfigurationProxy@@UEAAAEBUVector2@Numerics@Foundation@Windows@@XZ @ 0x180109CE0 (-GetGestureDirection@BamoEdgyGestureRecognitionConfigurationProxy@@UEAAAEBUVector2@Numerics@Foun.c)
 *     ?GetGestureRecognitionConfiguration@BamoEdgyDragSourceClientProxy@@UEAAPEAVBamoEdgyGestureRecognitionConfigurationProxy@@XZ @ 0x180109D50 (-GetGestureRecognitionConfiguration@BamoEdgyDragSourceClientProxy@@UEAAPEAVBamoEdgyGestureRecogn.c)
 *     ?GetGestureRecognitionConfiguration@BamoEdgyNotificationSourceClientProxy@@UEAAPEAVBamoEdgyGestureRecognitionConfigurationProxy@@XZ @ 0x180109D80 (-GetGestureRecognitionConfiguration@BamoEdgyNotificationSourceClientProxy@@UEAAPEAVBamoEdgyGestu.c)
 *     ?GetHaptics@BamoPenDeviceProxy@@UEAAPEAVBamoSimpleHapticsControllerProxy@@XZ @ 0x180109E30 (-GetHaptics@BamoPenDeviceProxy@@UEAAPEAVBamoSimpleHapticsControllerProxy@@XZ.c)
 *     ?GetHeatGripService@BamoInputSystemProxy@@UEAAPEAVBamoHeatGripServiceProxy@@XZ @ 0x180109E60 (-GetHeatGripService@BamoInputSystemProxy@@UEAAPEAVBamoHeatGripServiceProxy@@XZ.c)
 *     ?GetInputDeliveryServer@BamoInputSystemProxy@@UEAAPEAVBamoInputDeliveryServerProxy@@XZ @ 0x180109FD0 (-GetInputDeliveryServer@BamoInputSystemProxy@@UEAAPEAVBamoInputDeliveryServerProxy@@XZ.c)
 *     ?GetInputObserverManager@BamoInputSystemProxy@@UEAAPEAVBamoInputObserverManagerProxy@@XZ @ 0x18010A000 (-GetInputObserverManager@BamoInputSystemProxy@@UEAAPEAVBamoInputObserverManagerProxy@@XZ.c)
 *     ?GetInputProcessManager@BamoInputSystemInternalProxy@@UEAAPEAVBamoInputProcessManagerProxy@@XZ @ 0x18010A030 (-GetInputProcessManager@BamoInputSystemInternalProxy@@UEAAPEAVBamoInputProcessManagerProxy@@XZ.c)
 *     ?GetInputSiteManager@BamoInputSystemProxy@@UEAAPEAVBamoInputSiteManagerProxy@@XZ @ 0x18010A060 (-GetInputSiteManager@BamoInputSystemProxy@@UEAAPEAVBamoInputSiteManagerProxy@@XZ.c)
 *     ?GetInputSpace@BamoInputSpacePayloadProxy@@UEAAAEBUINPUT_SPACE@@XZ @ 0x18010A090 (-GetInputSpace@BamoInputSpacePayloadProxy@@UEAAAEBUINPUT_SPACE@@XZ.c)
 *     ?GetInterfacePath@BamoDockableDeviceProxy@@UEAAPEBGXZ @ 0x18010A0C0 (-GetInterfacePath@BamoDockableDeviceProxy@@UEAAPEBGXZ.c)
 *     ?GetPanelId@BamoDockDeviceProxy@@UEAAPEBGXZ @ 0x18010A240 (-GetPanelId@BamoDockDeviceProxy@@UEAAPEBGXZ.c)
 *     ?GetPenDeviceManager@BamoInputSystemProxy@@UEAAPEAVBamoPenDeviceManagerProxy@@XZ @ 0x18010A2B0 (-GetPenDeviceManager@BamoInputSystemProxy@@UEAAPEAVBamoPenDeviceManagerProxy@@XZ.c)
 *     ?GetPenEventsDispatcher@BamoInputSystemProxy@@UEAAPEAVBamoPenEventsDispatcherProxy@@XZ @ 0x18010A2E0 (-GetPenEventsDispatcher@BamoInputSystemProxy@@UEAAPEAVBamoPenEventsDispatcherProxy@@XZ.c)
 *     ?GetRegions@BamoInputSpacePayloadProxy@@UEAAXPEAPEBUINPUT_SPACE_REGION@@PEAI@Z @ 0x18010A3D0 (-GetRegions@BamoInputSpacePayloadProxy@@UEAAXPEAPEBUINPUT_SPACE_REGION@@PEAI@Z.c)
 *     ?GetResizeContextualProcessor@BamoInputSystemProxy@@UEAAPEAVBamoResizeContextualProcessorProxy@@XZ @ 0x18010A420 (-GetResizeContextualProcessor@BamoInputSystemProxy@@UEAAPEAVBamoResizeContextualProcessorProxy@@.c)
 *     ?GetSourceType@BamoDragManagerClientProxy@@UEAAAEBU_GUID@@XZ @ 0x18010A530 (-GetSourceType@BamoDragManagerClientProxy@@UEAAAEBU_GUID@@XZ.c)
 *     ?GetSupportedFeedback@BamoSimpleHapticsControllerProxy@@UEAAPEAVBamoList_SimpleHapticsControllerFeedback_Proxy@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@XZ @ 0x18010A560 (-GetSupportedFeedback@BamoSimpleHapticsControllerProxy@@UEAAPEAVBamoList_SimpleHapticsController.c)
 *     ?GetSystemContextManager@BamoInputSystemInternalProxy@@UEAAPEAVBamoSystemContextManagerProxy@@XZ @ 0x18010A5D0 (-GetSystemContextManager@BamoInputSystemInternalProxy@@UEAAPEAVBamoSystemContextManagerProxy@@XZ.c)
 *     ?GetSystemCursorController@BamoInputSystemProxy@@UEAAPEAVBamoSystemCursorControllerProxy@@XZ @ 0x18010A600 (-GetSystemCursorController@BamoInputSystemProxy@@UEAAPEAVBamoSystemCursorControllerProxy@@XZ.c)
 *     ?GetTestCommands@BamoInputSystemProxy@@UEAAPEAVBamoTestCommandsProxy@@XZ @ 0x18010A630 (-GetTestCommands@BamoInputSystemProxy@@UEAAPEAVBamoTestCommandsProxy@@XZ.c)
 *     ?GetType@BamoDragAreaClientProxy@@UEAAAEBU_GUID@@XZ @ 0x18010A660 (-GetType@BamoDragAreaClientProxy@@UEAAAEBU_GUID@@XZ.c)
 *     ?GetType@BamoDragSourceClientProxy@@UEAAAEBU_GUID@@XZ @ 0x18010A690 (-GetType@BamoDragSourceClientProxy@@UEAAAEBU_GUID@@XZ.c)
 *     ?GetType@BamoDropTargetClientProxy@@UEAAAEBU_GUID@@XZ @ 0x18010A6C0 (-GetType@BamoDropTargetClientProxy@@UEAAAEBU_GUID@@XZ.c)
 *     ?GetType@BamoEdgyDragSourceClientProxy@@UEAAAEBU_GUID@@XZ @ 0x18010A6F0 (-GetType@BamoEdgyDragSourceClientProxy@@UEAAAEBU_GUID@@XZ.c)
 *     ?GetType@BamoInputForwardAreaInputObjectProxy@@UEAAAEBU_GUID@@XZ @ 0x18010A720 (-GetType@BamoInputForwardAreaInputObjectProxy@@UEAAAEBU_GUID@@XZ.c)
 *     ?GetType@BamoInputForwardTargetInputObjectProxy@@UEAAAEBU_GUID@@XZ @ 0x18010A750 (-GetType@BamoInputForwardTargetInputObjectProxy@@UEAAAEBU_GUID@@XZ.c)
 *     ?GetType@BamoResizeAreaClientProxy@@UEAAAEBU_GUID@@XZ @ 0x18010A780 (-GetType@BamoResizeAreaClientProxy@@UEAAAEBU_GUID@@XZ.c)
 *     ?GetType@BamoResizeControllerClientProxy@@UEAAAEBU_GUID@@XZ @ 0x18010A7B0 (-GetType@BamoResizeControllerClientProxy@@UEAAAEBU_GUID@@XZ.c)
 *     ?GetUIAHitTest@BamoInputSystemProxy@@UEAAPEAVBamoUIAHitTestProxy@@XZ @ 0x18010A7E0 (-GetUIAHitTest@BamoInputSystemProxy@@UEAAPEAVBamoUIAHitTestProxy@@XZ.c)
 *     ?GetUniqueId@BamoPenDeviceProxy@@UEAAAEBU_GUID@@XZ @ 0x18010A810 (-GetUniqueId@BamoPenDeviceProxy@@UEAAAEBU_GUID@@XZ.c)
 *     ?GetPrimaryClickZone@BamoVirtualTouchpadControllerProxy@@UEAAAEBUPhysicalClickZone@Input@Internal@UI@Windows@@XZ @ 0x18012A010 (-GetPrimaryClickZone@BamoVirtualTouchpadControllerProxy@@UEAAAEBUPhysicalClickZone@Input@Interna.c)
 *     ?GetSecondaryClickZone@BamoVirtualTouchpadControllerProxy@@UEAAAEBUPhysicalClickZone@Input@Internal@UI@Windows@@XZ @ 0x18012A040 (-GetSecondaryClickZone@BamoVirtualTouchpadControllerProxy@@UEAAAEBUPhysicalClickZone@Input@Inter.c)
 *     ?GetSize@BamoVirtualTouchpadControllerProxy@@UEAAAEBUVirtualTouchpadSize@Input@Internal@UI@Windows@@XZ @ 0x18012A070 (-GetSize@BamoVirtualTouchpadControllerProxy@@UEAAAEBUVirtualTouchpadSize@Input@Internal@UI@Windo.c)
 *     ??$GetStructAt@UDisplayOcclusionRect@@@Bamo@Microsoft@@YAAEBUDisplayOcclusionRect@@PEAVBaseBamoConnection@01@AEAV?$vector@UDisplayOcclusionRect@@V?$allocator@UDisplayOcclusionRect@@@std@@@std@@I@Z @ 0x18012EBA0 (--$GetStructAt@UDisplayOcclusionRect@@@Bamo@Microsoft@@YAAEBUDisplayOcclusionRect@@PEAVBaseBamoC.c)
 *     ??$GetStructAt@UVirtualTouchpadRect@@@Bamo@Microsoft@@YAAEBUVirtualTouchpadRect@@PEAVBaseBamoConnection@01@AEAV?$vector@UVirtualTouchpadRect@@V?$allocator@UVirtualTouchpadRect@@@std@@@std@@I@Z @ 0x180130030 (--$GetStructAt@UVirtualTouchpadRect@@@Bamo@Microsoft@@YAAEBUVirtualTouchpadRect@@PEAVBaseBamoCon.c)
 *     ?GetType@BamoManualDragAreaClientProxy@@UEAAAEBU_GUID@@XZ @ 0x180139960 (-GetType@BamoManualDragAreaClientProxy@@UEAAAEBU_GUID@@XZ.c)
 *     ?GetType@BamoManualResizeAreaClientProxy@@UEAAAEBU_GUID@@XZ @ 0x1801429A0 (-GetType@BamoManualResizeAreaClientProxy@@UEAAAEBU_GUID@@XZ.c)
 *     ?GetGestureDirection@BamoEdgyControllerClientProxy@@UEAAAEBUD2D_VECTOR_2F@@XZ @ 0x18014C480 (-GetGestureDirection@BamoEdgyControllerClientProxy@@UEAAAEBUD2D_VECTOR_2F@@XZ.c)
 *     ?GetVertex0@BamoEdgyControllerClientProxy@@UEAAAEBUD2D_VECTOR_2F@@XZ @ 0x18014C570 (-GetVertex0@BamoEdgyControllerClientProxy@@UEAAAEBUD2D_VECTOR_2F@@XZ.c)
 *     ?GetVertex1@BamoEdgyControllerClientProxy@@UEAAAEBUD2D_VECTOR_2F@@XZ @ 0x18014C5A0 (-GetVertex1@BamoEdgyControllerClientProxy@@UEAAAEBUD2D_VECTOR_2F@@XZ.c)
 *     ?GetInputSinkData@BamoShellGesturesClientProxy@@UEAAAEBUInputSinkData@@XZ @ 0x18014F710 (-GetInputSinkData@BamoShellGesturesClientProxy@@UEAAAEBUInputSinkData@@XZ.c)
 *     ?GetMPCConstantManagerClient@BamoMPCManagerProxy@@UEAAPEAVBamoMPCConstantManagerClientProxy@@XZ @ 0x18015AA50 (-GetMPCConstantManagerClient@BamoMPCManagerProxy@@UEAAPEAVBamoMPCConstantManagerClientProxy@@XZ.c)
 *     ?GetBounds@BamoControllerNavigationClientProxy@@UEAAAEBUtagRECT@@XZ @ 0x180173CF0 (-GetBounds@BamoControllerNavigationClientProxy@@UEAAAEBUtagRECT@@XZ.c)
 *     ?GetBounds@BamoControllerNavigationOverrideProxy@@UEAAAEBUtagRECT@@XZ @ 0x180173D20 (-GetBounds@BamoControllerNavigationOverrideProxy@@UEAAAEBUtagRECT@@XZ.c)
 *     ?GetResumePosition@BamoControllerNavigationOverrideProxy@@UEAAAEBUtagPOINT@@XZ @ 0x180173E80 (-GetResumePosition@BamoControllerNavigationOverrideProxy@@UEAAAEBUtagPOINT@@XZ.c)
 *     ?GetStartPosition@BamoControllerNavigationClientProxy@@UEAAAEBUtagPOINT@@XZ @ 0x180173EB0 (-GetStartPosition@BamoControllerNavigationClientProxy@@UEAAAEBUtagPOINT@@XZ.c)
 *     ?RemoveRIMDevice@PenDeviceManager@@QEAAXPEAX@Z @ 0x180187B44 (-RemoveRIMDevice@PenDeviceManager@@QEAAXPEAX@Z.c)
 *     ?InjectTouchInput@InputInjectionClientProxy@@MEAAJPEAVBamoList_TouchInjectionContact_Proxy@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@@Z @ 0x1801986A0 (-InjectTouchInput@InputInjectionClientProxy@@MEAAJPEAVBamoList_TouchInjectionContact_Proxy@ISMBa.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
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
            (void *)0x885,
            (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
            v3);
      }
      else
      {
        v5 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 7) + 88LL))(*((_QWORD *)this + 7), &v9);
        if ( v5 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x88F,
            (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
            (const char *)(unsigned int)v5,
            v7);
        if ( CurrentThreadId != v9 )
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0x891,
            (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
            v6);
      }
    }
  }
}
