/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_q @ 0x1C0033A6C
 * Callers:
 *     ?ResolveInputSinkToINPUTDEST@CSpatialProcessor@@KA_NPEAXKPEAUtagINPUTDEST@@@Z @ 0x1C0001CF8 (-ResolveInputSinkToINPUTDEST@CSpatialProcessor@@KA_NPEAXKPEAUtagINPUTDEST@@@Z.c)
 *     NtUserReportInertia @ 0x1C0002E00 (NtUserReportInertia.c)
 *     RIMTransferInjectionDeviceDataFifoToDataBuffer @ 0x1C00042B8 (RIMTransferInjectionDeviceDataFifoToDataBuffer.c)
 *     ?SatisfyNonPointerInputSinkInfoRequest@CSpatialProcessor@@KAXAEBU_InputHitTestResult@@@Z @ 0x1C0006108 (-SatisfyNonPointerInputSinkInfoRequest@CSpatialProcessor@@KAXAEBU_InputHitTestResult@@@Z.c)
 *     ?ResolveDcompHitTestResultToInputDest@CSpatialProcessor@@CA?AVCInputDest@@AEBU_InputHitTestResult@@K_K@Z @ 0x1C0035090 (-ResolveDcompHitTestResultToInputDest@CSpatialProcessor@@CA-AVCInputDest@@AEBU_InputHitTestResul.c)
 *     xxxCreateThreadInfo @ 0x1C003911C (xxxCreateThreadInfo.c)
 *     EtwTraceUIPISystemError @ 0x1C0040CB0 (EtwTraceUIPISystemError.c)
 *     RIMOnPnpNotification @ 0x1C0042B50 (RIMOnPnpNotification.c)
 *     RIMReadInput @ 0x1C0043300 (RIMReadInput.c)
 *     RIMDeviceClassNotifyAsyncWorkItem @ 0x1C00454B0 (RIMDeviceClassNotifyAsyncWorkItem.c)
 *     RIMUnregisterForInput @ 0x1C0047ED0 (RIMUnregisterForInput.c)
 *     rimHandleAnyPnpRemovePendingDevices @ 0x1C0048DA8 (rimHandleAnyPnpRemovePendingDevices.c)
 *     RIMSignalAllPriorPnpWorkToCompleteWaiters @ 0x1C0049018 (RIMSignalAllPriorPnpWorkToCompleteWaiters.c)
 *     RawInputManagerObjectDelete @ 0x1C004926C (RawInputManagerObjectDelete.c)
 *     ?GatherDeviceInfoSummaryInformation@CBaseInput@@AEAAXPEAUDEVICEINFO@@PEAK1PEAH111@Z @ 0x1C004A5F0 (-GatherDeviceInfoSummaryInformation@CBaseInput@@AEAAXPEAUDEVICEINFO@@PEAK1PEAH111@Z.c)
 *     ?RIMDeviceCallback_Destroyed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C004E1A0 (-RIMDeviceCallback_Destroyed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     RIMFindSiblingPointerDeviceForMouse @ 0x1C0055EE4 (RIMFindSiblingPointerDeviceForMouse.c)
 *     RIMCreateHidDesc @ 0x1C0056014 (RIMCreateHidDesc.c)
 *     RIMRegisterForInputWithCallbacks @ 0x1C005E080 (RIMRegisterForInputWithCallbacks.c)
 *     ?GetMonitorId@CMonitorTopology@@CAXPEAUtagMONITOR@@PEAUMonitorId@1@@Z @ 0x1C0067D64 (-GetMonitorId@CMonitorTopology@@CAXPEAUtagMONITOR@@PEAUMonitorId@1@@Z.c)
 *     ??0CHMRefHwndByHandle@@QEAA@PEAUHWND__@@_N111@Z @ 0x1C007F760 (--0CHMRefHwndByHandle@@QEAA@PEAUHWND__@@_N111@Z.c)
 *     xxxSetProcessInitState @ 0x1C0099980 (xxxSetProcessInitState.c)
 *     RIMDoOnPnpNotification @ 0x1C00A1E80 (RIMDoOnPnpNotification.c)
 *     RIMDeliverDeviceResetRequest @ 0x1C00BEAB0 (RIMDeliverDeviceResetRequest.c)
 *     rimResetPnpRemovePendingStateBits @ 0x1C00C2EBC (rimResetPnpRemovePendingStateBits.c)
 *     ?dumpLeaks@@YAHPEAU_LIST_ENTRY@@PEAD@Z @ 0x1C00C4624 (-dumpLeaks@@YAHPEAU_LIST_ENTRY@@PEAD@Z.c)
 *     ?dumpRimDevLeaksAndCleanup@@YAHPEAU_LIST_ENTRY@@PEAD@Z @ 0x1C00C4674 (-dumpRimDevLeaksAndCleanup@@YAHPEAU_LIST_ENTRY@@PEAD@Z.c)
 *     _lambda_5c36fc9d148e2df7cc7307bbce248cb9_::operator() @ 0x1C00DBEA8 (_lambda_5c36fc9d148e2df7cc7307bbce248cb9_--operator().c)
 *     UserCreateBaseWindowHandle @ 0x1C0166410 (UserCreateBaseWindowHandle.c)
 *     UserDeleteBaseWindowHandle @ 0x1C0166AC0 (UserDeleteBaseWindowHandle.c)
 *     RIMIDERemoveInjectionDevice @ 0x1C01846E4 (RIMIDERemoveInjectionDevice.c)
 *     RIMOnAsyncPnpWorkNotification @ 0x1C0185330 (RIMOnAsyncPnpWorkNotification.c)
 *     RIMAllocateHidDesc @ 0x1C018A2D4 (RIMAllocateHidDesc.c)
 *     RIMFindSiblingMouseDevice @ 0x1C018B2A4 (RIMFindSiblingMouseDevice.c)
 *     RIMHidGetCaps @ 0x1C018B524 (RIMHidGetCaps.c)
 *     RIMHidGetPreparsedData @ 0x1C018BA5C (RIMHidGetPreparsedData.c)
 *     RIMMarkSiblingMouseDevice @ 0x1C018C290 (RIMMarkSiblingMouseDevice.c)
 *     RIMVirtAllocateHidDesc @ 0x1C018D358 (RIMVirtAllocateHidDesc.c)
 *     RIMVirtCreateHidDesc @ 0x1C018DB94 (RIMVirtCreateHidDesc.c)
 *     RIMAddToActiveDevices @ 0x1C018F660 (RIMAddToActiveDevices.c)
 *     RIMGetMaxCountFeatureDetails @ 0x1C0192AA4 (RIMGetMaxCountFeatureDetails.c)
 *     RIMGetPointerInputType @ 0x1C019369C (RIMGetPointerInputType.c)
 *     RIMRemoveFromActiveDevices @ 0x1C0194D44 (RIMRemoveFromActiveDevices.c)
 *     RIMIDECreateHIDDesc @ 0x1C019B10C (RIMIDECreateHIDDesc.c)
 *     rimGetCompleteFrameFromIVCompleteFrame @ 0x1C01A73A0 (rimGetCompleteFrameFromIVCompleteFrame.c)
 *     rimObsDeliverInputToObserver @ 0x1C01B3FC8 (rimObsDeliverInputToObserver.c)
 *     rimObsObserveNextInput @ 0x1C01B4A38 (rimObsObserveNextInput.c)
 *     rimObsPopInputMessage @ 0x1C01B4C8C (rimObsPopInputMessage.c)
 *     rimObsPushInputMessage @ 0x1C01B5084 (rimObsPushInputMessage.c)
 *     rimObsUpdateInputObserverRegistration @ 0x1C01B59EC (rimObsUpdateInputObserverRegistration.c)
 *     ?RIMOnTTMDeviceClose@@YAX_K@Z @ 0x1C01B7E40 (-RIMOnTTMDeviceClose@@YAX_K@Z.c)
 *     rimDeviceResetApc @ 0x1C01B88C0 (rimDeviceResetApc.c)
 *     ?CheckandDeliverContainerInput@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@HH@Z @ 0x1C01BFDA0 (-CheckandDeliverContainerInput@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@HH@Z.c)
 *     ?GetPointerInfoInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKKPEAUtagPOINTER_INFO@@@Z @ 0x1C01CB5F0 (-GetPointerInfoInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKKPEAUtagPOINTER_INFO@@@Z.c)
 *     ?ReferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C01D3598 (-ReferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ?UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C01D8878 (-UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ?RIMDeviceCallback_Reset@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C01DC980 (-RIMDeviceCallback_Reset@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?Set@CDesktopInputSink@@AEAA_NPEAXAEBU_LUID@@@Z @ 0x1C01E4998 (-Set@CDesktopInputSink@@AEAA_NPEAXAEBU_LUID@@@Z.c)
 *     ?OnDeviceRemoval@DelayZonePalmRejection@@QEAAXPEAX@Z @ 0x1C01E5FB0 (-OnDeviceRemoval@DelayZonePalmRejection@@QEAAXPEAX@Z.c)
 *     ?RemoveEdgeZonesForDevice@DelayZonePalmRejection@@QEAA_NPEAX@Z @ 0x1C01E6DF0 (-RemoveEdgeZonesForDevice@DelayZonePalmRejection@@QEAA_NPEAX@Z.c)
 *     ?GetMouseInputDataFromIVMouseInput@@YAXQEAU_MOUSE_INPUT_DATA@@QEAU_IVMouseInputData@@@Z @ 0x1C01EC8C0 (-GetMouseInputDataFromIVMouseInput@@YAXQEAU_MOUSE_INPUT_DATA@@QEAU_IVMouseInputData@@@Z.c)
 *     ?ivInitialSendPnpForChildPartition@CBaseInput@@IEAAXUCONTAINER_ID@@@Z @ 0x1C01EEEF8 (-ivInitialSendPnpForChildPartition@CBaseInput@@IEAAXUCONTAINER_ID@@@Z.c)
 *     ?ivOnChildPartitionConnected@CBaseInput@@KAXPEBXUCONTAINER_ID@@@Z @ 0x1C01EF320 (-ivOnChildPartitionConnected@CBaseInput@@KAXPEBXUCONTAINER_ID@@@Z.c)
 *     ?ivSendForegroundUpdate@IVForegroundSync@@YAXPEAUHWND__@@W4ACTIVATIONOBJECTSTATECHANGE_REASON@@@Z @ 0x1C01F1704 (-ivSendForegroundUpdate@IVForegroundSync@@YAXPEAUHWND__@@W4ACTIVATIONOBJECTSTATECHANGE_REASON@@@.c)
 *     ?StageMouseChunk@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@AEBVCInputDest@@@Z @ 0x1C01FC7A8 (-StageMouseChunk@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@AEBVCInputDes.c)
 *     InitCreateUserCrit @ 0x1C02E3F18 (InitCreateUserCrit.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_q @ 0x1C0033A6C
 * Reason: Hex-Rays returned no pseudocode for 0x1C0033A6C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0033A6C: mov     [rsp+arg_0], rbx
 * 00000001C0033A71: mov     [rsp+arg_8], rsi
 * 00000001C0033A76: push    rdi
 * 00000001C0033A77: sub     rsp, 40h
 * 00000001C0033A7B: movzx   ebx, [rsp+48h+arg_30]
 * 00000001C0033A83: mov     rsi, r9
 * 00000001C0033A86: mov     dil, r8b
 * 00000001C0033A89: test    dl, dl
 * 00000001C0033A8B: jnz     loc_1C00FC2F6
 * 00000001C0033A91: test    dil, dil
 * 00000001C0033A94: jz      short loc_1C0033AD8
 * 00000001C0033A96: and     [rsp+48h+var_10], 0
 * 00000001C0033A9C: lea     rax, [rsp+48h+arg_40]
 * 00000001C0033AA4: mov     r9, [rsp+48h+arg_38]
 * 00000001C0033AAC: mov     rcx, rsi
 * 00000001C0033AAF: mov     r8d, [rsp+48h+arg_28]
 * 00000001C0033AB4: movzx   edx, [rsp+48h+arg_20]
 * 00000001C0033AB9: mov     [rsp+48h+var_18], 8
 * 00000001C0033AC2: mov     [rsp+48h+var_20], rax
 * 00000001C0033AC7: mov     word ptr [rsp+48h+var_28], bx
 * 00000001C0033ACC: call    cs:__imp_WppAutoLogTrace
 * 00000001C0033AD3: nop     dword ptr [rax+rax+00h]
 * 00000001C0033AD8: mov     rbx, [rsp+48h+arg_0]
 * 00000001C0033ADD: mov     rsi, [rsp+48h+arg_8]
 * 00000001C0033AE2: add     rsp, 40h
 * 00000001C0033AE6: pop     rdi
 * 00000001C0033AE7: retn
 * 00000001C00FC2F6: and     [rsp+48h+var_18], 0
 * 00000001C00FC2FC: lea     rdx, [rsp+48h+arg_40]
 * 00000001C00FC304: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00FC30B: mov     r9d, ebx
 * 00000001C00FC30E: mov     r8, [rsp+48h+arg_38]
 * 00000001C00FC316: mov     [rsp+48h+var_20], 8
 * 00000001C00FC31F: mov     [rsp+48h+var_28], rdx
 * 00000001C00FC324: mov     edx, 2Bh ; '+'
 * 00000001C00FC329: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00FC32F: nop
 * 00000001C00FC330: jmp     loc_1C0033A91
 */
