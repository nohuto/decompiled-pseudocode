/*
 * XREFs of ?InternalAddRef@?$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x18012E618
 * Callers:
 *     ?DeliverToApps@?$CBaseInputObserverServer@$0M@@@UEBAXV?$function@$$A6AXAEBV?$ComPtr@VBamoInputObserverClientProxy@@@WRL@Microsoft@@@Z@std@@@Z @ 0x18012E3C0 (-DeliverToApps@-$CBaseInputObserverServer@$0M@@@UEBAXV-$function@$$A6AXAEBV-$ComPtr@VBamoInputOb.c)
 *     ?RegisterObserverClient@?$CBaseInputObserverServer@$0M@@@UEAAJPEAVBamoInputObserverManagerStub@@PEAVBamoInputObserverClientProxy@@@Z @ 0x18012E730 (-RegisterObserverClient@-$CBaseInputObserverServer@$0M@@@UEAAJPEAVBamoInputObserverManagerStub@@.c)
 *     ?_Do_call@?$_Func_impl_no_alloc@V_lambda_3cfa35e9c796ca0beab8e1187c70cfaf_@@XAEBV?$ComPtr@VBamoInputObserverClientProxy@@@WRL@Microsoft@@@std@@EEAAXAEBV?$ComPtr@VBamoInputObserverClientProxy@@@WRL@Microsoft@@@Z @ 0x18012E950 (-_Do_call@-$_Func_impl_no_alloc@V_lambda_3cfa35e9c796ca0beab8e1187c70cfaf_@@XAEBV-$ComPtr@VBamoI.c)
 *     ??$GetAttachedObject@UIDragManagerClientProxy@@VBamoDragManagerClientProxy@@@InputSite@@QEAA?AV?$ComPtr@VBamoDragManagerClientProxy@@@WRL@Microsoft@@XZ @ 0x18013B254 (--$GetAttachedObject@UIDragManagerClientProxy@@VBamoDragManagerClientProxy@@@InputSite@@QEAA-AV-.c)
 *     ??$GetAttachedObject@UIDragSourceClientProxy@@VBamoDragSourceClientProxy@@@InputSite@@QEAA?AV?$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@XZ @ 0x18013B2E8 (--$GetAttachedObject@UIDragSourceClientProxy@@VBamoDragSourceClientProxy@@@InputSite@@QEAA-AV-$C.c)
 *     ??4?$ComPtr@VBamoDragManagerClientProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18013D9B8 (--4-$ComPtr@VBamoDragManagerClientProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??4?$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18013DA08 (--4-$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?CancelDrag@DragNDropProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z @ 0x18013DC40 (-CancelDrag@DragNDropProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z.c)
 *     ?GetDragSourceInputSite@DragNDropProcessor@@AEAAXUtagPOINT@@W4InputType@@PEAVBamoDragManagerClientProxy@@PEAPEAVBamoDragSourceClientProxy@@PEAPEAVInputSite@@@Z @ 0x18013F140 (-GetDragSourceInputSite@DragNDropProcessor@@AEAAXUtagPOINT@@W4InputType@@PEAVBamoDragManagerClie.c)
 *     ?HitTest@DragNDropProcessor@@AEAAJUtagPOINT@@W4InputType@@U_GUID@@_NPEAUHitTestResult@@PEAU2@PEA_K6PEAPEAXPEAPEAVBamoDragSourceClientProxy@@PEAPEAVBamoDragManagerClientProxy@@PEAPEAVInputSite@@PEAPEAV8@@Z @ 0x18013F578 (-HitTest@DragNDropProcessor@@AEAAJUtagPOINT@@W4InputType@@U_GUID@@_NPEAUHitTestResult@@PEAU2@PEA.c)
 *     ?StartDrag@DragNDropProcessor@@QEAAJK_KPEAVBamoDragManagerClientProxy@@@Z @ 0x180141668 (-StartDrag@DragNDropProcessor@@QEAAJK_KPEAVBamoDragManagerClientProxy@@@Z.c)
 *     ??$GetAttachedObject@UIResizeControllerClientProxy@@VBamoResizeControllerClientProxy@@@InputSite@@QEAA?AV?$ComPtr@VBamoResizeControllerClientProxy@@@WRL@Microsoft@@XZ @ 0x180143DDC (--$GetAttachedObject@UIResizeControllerClientProxy@@VBamoResizeControllerClientProxy@@@InputSite.c)
 *     ?CancelResize@ResizeProcessor@@QEAAJKPEAVBamoResizeControllerClientProxy@@@Z @ 0x180144DD4 (-CancelResize@ResizeProcessor@@QEAAJKPEAVBamoResizeControllerClientProxy@@@Z.c)
 *     ?GetControllerForManualResize@ResizeProcessor@@AEAAXPEAVBamoManualResizeAreaClientProxy@@PEAPEAVBamoResizeControllerClientProxy@@PEAPEAVInputSite@@@Z @ 0x1801455A4 (-GetControllerForManualResize@ResizeProcessor@@AEAAXPEAVBamoManualResizeAreaClientProxy@@PEAPEAV.c)
 *     ?HitTest@ResizeProcessor@@AEAAXPEAUHitTestResult@@PEAW4InputResizeRegion@Input@Internal@UI@Windows@@PEAPEAVBamoResizeControllerClientProxy@@PEAPEAVInputSite@@@Z @ 0x1801458E8 (-HitTest@ResizeProcessor@@AEAAXPEAUHitTestResult@@PEAW4InputResizeRegion@Input@Internal@UI@Windo.c)
 *     ?StartResize@ResizeProcessor@@QEAAJKPEAVBamoResizeControllerClientProxy@@@Z @ 0x1801475AC (-StartResize@ResizeProcessor@@QEAAJKPEAVBamoResizeControllerClientProxy@@@Z.c)
 *     ?CancelDrag@EdgyProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z @ 0x180148B24 (-CancelDrag@EdgyProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z.c)
 *     ?HitTest@EdgyProcessor@@AEAAXPEAUHitTestResult@@PEAPEAVBamoEdgyDragSourceClientProxy@@PEAPEAVBamoDragManagerClientProxy@@PEAPEAVInputSite@@3@Z @ 0x180149ADC (-HitTest@EdgyProcessor@@AEAAXPEAUHitTestResult@@PEAPEAVBamoEdgyDragSourceClientProxy@@PEAPEAVBam.c)
 *     ?HitTest@EdgyProcessor@@AEAAXPEAUHitTestResult@@PEAPEAVBamoEdgyNotificationSourceClientProxy@@PEAPEAVInputSite@@@Z @ 0x180149D5C (-HitTest@EdgyProcessor@@AEAAXPEAUHitTestResult@@PEAPEAVBamoEdgyNotificationSourceClientProxy@@PE.c)
 *     ?StartGestureRecognition@EdgyProcessor@@AEAAXPEAUHitTestResult@@KUtagPOINT@@@Z @ 0x18014B438 (-StartGestureRecognition@EdgyProcessor@@AEAAXPEAUHitTestResult@@KUtagPOINT@@@Z.c)
 *     ??4?$ComPtr@VSystemButtonEventController@@@WRL@Microsoft@@QEAAAEAV012@PEAVSystemButtonEventController@@@Z @ 0x180152B2C (--4-$ComPtr@VSystemButtonEventController@@@WRL@Microsoft@@QEAAAEAV012@PEAVSystemButtonEventContr.c)
 *     ?RegisterController@SystemButtonEventControllerManager@@QEAAXPEAVSystemButtonEventController@@@Z @ 0x180152C10 (-RegisterController@SystemButtonEventControllerManager@@QEAAXPEAVSystemButtonEventController@@@Z.c)
 *     ?UnregisterController@SystemButtonEventControllerManager@@QEAAXPEAVSystemButtonEventController@@@Z @ 0x180152CA0 (-UnregisterController@SystemButtonEventControllerManager@@QEAAXPEAVSystemButtonEventController@@.c)
 *     ?OnDisconnected@InputAttemptedDeliveryClientProxy@@UEAAJXZ @ 0x1801534A0 (-OnDisconnected@InputAttemptedDeliveryClientProxy@@UEAAJXZ.c)
 *     ?RegisterInputAttemptedClient@InputDeliveryServer@@MEAAJPEAVBamoInputDeliveryServerStub@@PEAVBamoInputAttemptedDeliveryClientProxy@@@Z @ 0x180153F30 (-RegisterInputAttemptedClient@InputDeliveryServer@@MEAAJPEAVBamoInputDeliveryServerStub@@PEAVBam.c)
 *     ??$_Emplace_reallocate@AEBV?$ComPtr@VBamoInputAttemptedDeliveryClientProxy@@@WRL@Microsoft@@@?$vector@V?$ComPtr@VBamoInputAttemptedDeliveryClientProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VBamoInputAttemptedDeliveryClientProxy@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@VBamoInputAttemptedDeliveryClientProxy@@@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x1801549A0 (--$_Emplace_reallocate@AEBV-$ComPtr@VBamoInputAttemptedDeliveryClientProxy@@@WRL@Microsoft@@@-$v.c)
 *     std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_BamoControllerNavigationOverrideProxy_________lambda_9df4cfb49f9aeda31819750223cddec6___ @ 0x180171044 (std--remove_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--WRL--ComPtr_.c)
 *     ?OverrideStateChanged@ControllerNavigationManager@@QEAAXPEAVBamoControllerNavigationOverrideProxy@@@Z @ 0x180172278 (-OverrideStateChanged@ControllerNavigationManager@@QEAAXPEAVBamoControllerNavigationOverrideProx.c)
 *     ?RegisterClient@ControllerNavigationManager@@MEAAJPEAVBamoControllerNavigationManagerStub@@PEAVBamoControllerNavigationClientProxy@@@Z @ 0x180172980 (-RegisterClient@ControllerNavigationManager@@MEAAJPEAVBamoControllerNavigationManagerStub@@PEAVB.c)
 *     ?RegisterControllerProcessor@ControllerNavigationManager@@QEAAJKPEAVControllerProcessor@@@Z @ 0x180172C44 (-RegisterControllerProcessor@ControllerNavigationManager@@QEAAJKPEAVControllerProcessor@@@Z.c)
 *     ?RegisterOverride@ControllerNavigationManager@@MEAAJPEAVBamoControllerNavigationManagerStub@@PEAVBamoControllerNavigationOverrideProxy@@@Z @ 0x180173050 (-RegisterOverride@ControllerNavigationManager@@MEAAJPEAVBamoControllerNavigationManagerStub@@PEA.c)
 *     ?SetCurrentStateWithOverride@ControllerNavigationManager@@AEAAXPEAVBamoControllerNavigationOverrideProxy@@@Z @ 0x180173270 (-SetCurrentStateWithOverride@ControllerNavigationManager@@AEAAXPEAVBamoControllerNavigationOverr.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::InternalAddRef(
        __int64 (__fastcall ****a1)(_QWORD))
{
  __int64 (__fastcall ***v1)(_QWORD); // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (**v1)(v1);
  return result;
}
