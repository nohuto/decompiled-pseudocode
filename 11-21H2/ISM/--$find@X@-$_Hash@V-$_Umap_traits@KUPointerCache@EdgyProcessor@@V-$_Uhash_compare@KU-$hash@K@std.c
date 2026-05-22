/*
 * XREFs of ??$find@X@?$_Hash@V?$_Umap_traits@KUPointerCache@EdgyProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUPointerCache@EdgyProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerCache@EdgyProcessor@@@std@@@std@@@std@@@1@AEBK@Z @ 0x1800BE564
 * Callers:
 *     ?DoConvergedHitTestCallback@Win32kInterop@@AEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@@Z @ 0x180016F50 (-DoConvergedHitTestCallback@Win32kInterop@@AEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResul.c)
 *     ?ProcessInputStreamEndedMessage@Win32kInterop@@AEAAXPEBUMIT_INPUTSTREAM_ENDED_MESSAGE@@@Z @ 0x180018A80 (-ProcessInputStreamEndedMessage@Win32kInterop@@AEAAXPEBUMIT_INPUTSTREAM_ENDED_MESSAGE@@@Z.c)
 *     ?OnDdiDeviceRemoved@SpatialRimDeviceCollection@@UEAAJK@Z @ 0x1800C10C0 (-OnDdiDeviceRemoved@SpatialRimDeviceCollection@@UEAAJK@Z.c)
 *     ?OnDdiDeviceUpdated@SpatialRimDeviceCollection@@UEAAJKAEBUMPCSourceDeviceInfo@@@Z @ 0x1800C11D0 (-OnDdiDeviceUpdated@SpatialRimDeviceCollection@@UEAAJKAEBUMPCSourceDeviceInfo@@@Z.c)
 *     ?SendDeviceUpdate@SpatialRimDeviceCollection@@UEAAJKAEBUMPCSourceDeviceInfo@@@Z @ 0x1800C1F00 (-SendDeviceUpdate@SpatialRimDeviceCollection@@UEAAJKAEBUMPCSourceDeviceInfo@@@Z.c)
 *     ?OnDeviceRemoval@MobileButtonDeviceCollection@@MEAAJK@Z @ 0x1800C4C80 (-OnDeviceRemoval@MobileButtonDeviceCollection@@MEAAJK@Z.c)
 *     ?OnInputReport@MobileButtonDeviceCollection@@MEAAJKPEAXK@Z @ 0x1800C4F00 (-OnInputReport@MobileButtonDeviceCollection@@MEAAJKPEAXK@Z.c)
 *     ?OnInvalidateInput@MobileButtonDeviceCollection@@UEAAJPEAX@Z @ 0x1800C5300 (-OnInvalidateInput@MobileButtonDeviceCollection@@UEAAJPEAX@Z.c)
 *     ?OnDeviceRemoval@ConsumerControlDeviceCollection@@MEAAJK@Z @ 0x1800C6280 (-OnDeviceRemoval@ConsumerControlDeviceCollection@@MEAAJK@Z.c)
 *     ?OnInputReport@ConsumerControlDeviceCollection@@MEAAJKPEAXK@Z @ 0x1800C64B0 (-OnInputReport@ConsumerControlDeviceCollection@@MEAAJKPEAXK@Z.c)
 *     ?OnDeviceRemoval@SystemControlDeviceCollection@@MEAAJK@Z @ 0x1800C6DD0 (-OnDeviceRemoval@SystemControlDeviceCollection@@MEAAJK@Z.c)
 *     ?OnInputReport@SystemControlDeviceCollection@@MEAAJKPEAXK@Z @ 0x1800C6FE0 (-OnInputReport@SystemControlDeviceCollection@@MEAAJKPEAXK@Z.c)
 *     ?OnInputReport@InjectionRawInputProvider@@QEAAJPEAVInputInjectionClientProxy@@AEAV?$vector@UTouchInjectionContact@Input@Internal@UI@Windows@@V?$allocator@UTouchInjectionContact@Input@Internal@UI@Windows@@@std@@@std@@@Z @ 0x1800CEE80 (-OnInputReport@InjectionRawInputProvider@@QEAAJPEAVInputInjectionClientProxy@@AEAV-$vector@UTouc.c)
 *     ?OnRemoveDevice@InjectionRawInputProvider@@QEAAJPEAVInputInjectionClientProxy@@@Z @ 0x1800CEFE8 (-OnRemoveDevice@InjectionRawInputProvider@@QEAAJPEAVInputInjectionClientProxy@@@Z.c)
 *     ?DeliverInputToAllTargets@Win32kInterop@@UEAAJPEAUInputInfo@@AEAV?$unordered_map@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@U?$hash@K@std@@U?$equal_to@K@5@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@@std@@@Z @ 0x1800DF220 (-DeliverInputToAllTargets@Win32kInterop@@UEAAJPEAUInputInfo@@AEAV-$unordered_map@KV-$ComPtr@UIIn.c)
 *     ?DeliverToContextualProcessing@Win32kInterop@@AEAAXPEAUInputInfo@@KV?$function@$$A6AXPEAVInputContext@@@Z@std@@V?$function@$$A6AXPEAUIInputTarget@@@Z@4@@Z @ 0x1800DF79C (-DeliverToContextualProcessing@Win32kInterop@@AEAAXPEAUInputInfo@@KV-$function@$$A6AXPEAVInputCo.c)
 *     ?CancelDrag@DragNDropProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z @ 0x18013DC40 (-CancelDrag@DragNDropProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z.c)
 *     ?FeedAnimationDataIfNeeded@DragNDropProcessor@@AEAAXKUtagPOINT@@UtagPOINTF@@_N@Z @ 0x18013EA54 (-FeedAnimationDataIfNeeded@DragNDropProcessor@@AEAAXKUtagPOINT@@UtagPOINTF@@_N@Z.c)
 *     ?GetVelocityForPointerId@DragNDropProcessor@@AEAA?AUtagPOINTF@@K@Z @ 0x18013F3D0 (-GetVelocityForPointerId@DragNDropProcessor@@AEAA-AUtagPOINTF@@K@Z.c)
 *     ?MakeContextualProcessingDecision@DragNDropProcessor@@AEAAXAEBV?$ComPtr@VManualDragAreaClientProxy@@@WRL@Microsoft@@KPEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x18013FD68 (-MakeContextualProcessingDecision@DragNDropProcessor@@AEAAXAEBV-$ComPtr@VManualDragAreaClientPro.c)
 *     ?OnInput@DragNDropProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x180140220 (-OnInput@DragNDropProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorRespon.c)
 *     ?SetupInteractionContext@DragNDropProcessor@@AEAAXKW4InputType@@PEAUHitTestResult@@UtagPOINT@@@Z @ 0x180140FC0 (-SetupInteractionContext@DragNDropProcessor@@AEAAXKW4InputType@@PEAUHitTestResult@@UtagPOINT@@@Z.c)
 *     ?StartAnimation@DragNDropProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z @ 0x1801411F8 (-StartAnimation@DragNDropProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z.c)
 *     ?StartDrag@DragNDropProcessor@@QEAAJK_KPEAVBamoDragManagerClientProxy@@@Z @ 0x180141668 (-StartDrag@DragNDropProcessor@@QEAAJK_KPEAVBamoDragManagerClientProxy@@@Z.c)
 *     ?StartManualDrag@DragNDropProcessor@@QEAAXKPEAVBamoManualDragAreaClientProxy@@@Z @ 0x180141AC8 (-StartManualDrag@DragNDropProcessor@@QEAAXKPEAVBamoManualDragAreaClientProxy@@@Z.c)
 *     ?CancelResize@ResizeProcessor@@QEAAJKPEAVBamoResizeControllerClientProxy@@@Z @ 0x180144DD4 (-CancelResize@ResizeProcessor@@QEAAJKPEAVBamoResizeControllerClientProxy@@@Z.c)
 *     ?FeedAnimationDataIfNeeded@ResizeProcessor@@AEAAXKUtagPOINT@@@Z @ 0x18014525C (-FeedAnimationDataIfNeeded@ResizeProcessor@@AEAAXKUtagPOINT@@@Z.c)
 *     ?OnInput@ResizeProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x180146060 (-OnInput@ResizeProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@.c)
 *     ?StartAnimation@ResizeProcessor@@QEAAJKPEAVBamoResizeControllerClientProxy@@@Z @ 0x180146B18 (-StartAnimation@ResizeProcessor@@QEAAJKPEAVBamoResizeControllerClientProxy@@@Z.c)
 *     ?StartGestureRecognition@ResizeProcessor@@AEAAXPEAUHitTestResult@@K@Z @ 0x180146FA8 (-StartGestureRecognition@ResizeProcessor@@AEAAXPEAUHitTestResult@@K@Z.c)
 *     ?StartManualResize@ResizeProcessor@@QEAAJKW4InputResizeRegion@Input@Internal@UI@Windows@@PEAVBamoManualResizeAreaClientProxy@@@Z @ 0x1801471F0 (-StartManualResize@ResizeProcessor@@QEAAJKW4InputResizeRegion@Input@Internal@UI@Windows@@PEAVBam.c)
 *     ?StartResize@ResizeProcessor@@QEAAJKPEAVBamoResizeControllerClientProxy@@@Z @ 0x1801475AC (-StartResize@ResizeProcessor@@QEAAJKPEAVBamoResizeControllerClientProxy@@@Z.c)
 *     ?CancelDrag@EdgyProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z @ 0x180148B24 (-CancelDrag@EdgyProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z.c)
 *     ?FeedAnimationDataIfNeeded@EdgyProcessor@@AEAAXKUtagPOINT@@UtagPOINTF@@_N@Z @ 0x180149788 (-FeedAnimationDataIfNeeded@EdgyProcessor@@AEAAXKUtagPOINT@@UtagPOINTF@@_N@Z.c)
 *     ?GetVelocityForPointerId@EdgyProcessor@@AEAA?AUtagPOINTF@@K@Z @ 0x180149A84 (-GetVelocityForPointerId@EdgyProcessor@@AEAA-AUtagPOINTF@@K@Z.c)
 *     ?OnInputDrag@EdgyProcessor@@AEAAXPEAUInputInfo@@AEAUtagPOINTER_INFO@@PEAUContextualProcessorResponse@@@Z @ 0x18014A30C (-OnInputDrag@EdgyProcessor@@AEAAXPEAUInputInfo@@AEAUtagPOINTER_INFO@@PEAUContextualProcessorResp.c)
 *     ?OnInputNotification@EdgyProcessor@@AEAAXPEAUInputInfo@@AEAUtagPOINTER_INFO@@PEAUContextualProcessorResponse@@@Z @ 0x18014AD38 (-OnInputNotification@EdgyProcessor@@AEAAXPEAUInputInfo@@AEAUtagPOINTER_INFO@@PEAUContextualProce.c)
 *     ?StartAnimation@EdgyProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z @ 0x18014AFD0 (-StartAnimation@EdgyProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z.c)
 *     ?StartGestureRecognition@EdgyProcessor@@AEAAXPEAUHitTestResult@@KUtagPOINT@@@Z @ 0x18014B438 (-StartGestureRecognition@EdgyProcessor@@AEAAXPEAUHitTestResult@@KUtagPOINT@@@Z.c)
 *     ?ClientRemoved@ControllerNavigationManager@@QEAAXPEAVBamoControllerNavigationClientProxy@@@Z @ 0x18017146C (-ClientRemoved@ControllerNavigationManager@@QEAAXPEAVBamoControllerNavigationClientProxy@@@Z.c)
 *     ?ClientStateChanged@ControllerNavigationManager@@QEAAXPEAVBamoControllerNavigationClientProxy@@@Z @ 0x180171524 (-ClientStateChanged@ControllerNavigationManager@@QEAAXPEAVBamoControllerNavigationClientProxy@@@.c)
 *     ?OnPointerCrossedClientBounds@ControllerNavigationManager@@QEAAXUtagPOINT@@@Z @ 0x1801720D4 (-OnPointerCrossedClientBounds@ControllerNavigationManager@@QEAAXUtagPOINT@@@Z.c)
 *     ?RegisterClient@ControllerNavigationManager@@MEAAJPEAVBamoControllerNavigationManagerStub@@PEAVBamoControllerNavigationClientProxy@@@Z @ 0x180172980 (-RegisterClient@ControllerNavigationManager@@MEAAJPEAVBamoControllerNavigationManagerStub@@PEAVB.c)
 *     ?RegisterControllerProcessor@ControllerNavigationManager@@QEAAJKPEAVControllerProcessor@@@Z @ 0x180172C44 (-RegisterControllerProcessor@ControllerNavigationManager@@QEAAJKPEAVControllerProcessor@@@Z.c)
 *     ?ValidatePointerInput@InputInfoValidator@@AEAAJPEAUPointerInputInfo@@_N@Z @ 0x180197174 (-ValidatePointerInput@InputInfoValidator@@AEAAJPEAUPointerInputInfo@@_N@Z.c)
 *     ?OnDeviceChange@DWMInputRouter@@IEAAJPEAUDeviceInfo@@_N@Z @ 0x18019AFD0 (-OnDeviceChange@DWMInputRouter@@IEAAJPEAUDeviceInfo@@_N@Z.c)
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x180080BA4 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ??$_Find_last@K@?$_Hash@V?$_Umap_traits@KV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBKV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@@std@@PEAX@std@@@1@AEBK_K@Z @ 0x1800B2754 (--$_Find_last@K@-$_Hash@V-$_Umap_traits@KV-$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Mi.c)
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<unsigned long,EdgyProcessor::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,EdgyProcessor::PointerCache>>,0>>::find<void>(
        _QWORD *a1,
        _QWORD *a2,
        const unsigned __int8 *a3)
{
  __int64 appended; // rax
  _DWORD *v6; // r11
  __int64 v7; // r8
  _QWORD v9[3]; // [rsp+20h] [rbp-18h] BYREF

  appended = std::_Fnv1a_append_bytes((__int64)a1, a3, 4uLL);
  v7 = std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<BamoControllerNavigationClientProxy>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<BamoControllerNavigationClientProxy>>>,0>>::_Find_last<unsigned long>(
         a1,
         v9,
         v6,
         appended)[1];
  if ( !v7 )
    v7 = a1[1];
  *a2 = v7;
  return a2;
}
