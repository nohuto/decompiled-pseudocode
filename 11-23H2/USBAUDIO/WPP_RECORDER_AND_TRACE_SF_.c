/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_ @ 0x1C000956C
 * Callers:
 *     IsSidebandIrp @ 0x1C0003170 (IsSidebandIrp.c)
 *     USBCaptureCompleteCallback @ 0x1C0003590 (USBCaptureCompleteCallback.c)
 *     USBType1CompleteCallback @ 0x1C0003930 (USBType1CompleteCallback.c)
 *     ?StreamSuspend@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C0005CA4 (-StreamSuspend@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetPinFromPinsInUseList@CSidebandDevice@@AEAAJKPEAPEAU_KSPIN@@@Z @ 0x1C00061A4 (-GetPinFromPinsInUseList@CSidebandDevice@@AEAAJKPEAPEAU_KSPIN@@@Z.c)
 *     ?GetPinFromEpIndex@CSidebandDevice@@AEAAJKPEAKPEAPEAU_KSPIN_DESCRIPTOR_EX@@@Z @ 0x1C000633C (-GetPinFromEpIndex@CSidebandDevice@@AEAAJKPEAKPEAPEAU_KSPIN_DESCRIPTOR_EX@@@Z.c)
 *     ?IoQueueThread@CSidebandDevice@@AEAAXXZ @ 0x1C000689C (-IoQueueThread@CSidebandDevice@@AEAAXXZ.c)
 *     ?GetVolumeImmediate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C0007734 (-GetVolumeImmediate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     SidebandDispatchIrp @ 0x1C0007C88 (SidebandDispatchIrp.c)
 *     DeInitSideband @ 0x1C00080F8 (DeInitSideband.c)
 *     ?SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C00082F0 (-SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     InitializeSideband @ 0x1C000B83C (InitializeSideband.c)
 *     IsDeviceInSidebandMode @ 0x1C000BB98 (IsDeviceInSidebandMode.c)
 *     ?AddFileToOpenHandles@CSidebandDevice@@AEAAJPEAU_FILE_OBJECT@@@Z @ 0x1C000C124 (-AddFileToOpenHandles@CSidebandDevice@@AEAAJPEAU_FILE_OBJECT@@@Z.c)
 *     ?CancelPendingIrps@CSidebandDevice@@UEAAJXZ @ 0x1C000C3B0 (-CancelPendingIrps@CSidebandDevice@@UEAAJXZ.c)
 *     ?CloseAllPinInstances@CSidebandDevice@@UEAAJXZ @ 0x1C000C4D0 (-CloseAllPinInstances@CSidebandDevice@@UEAAJXZ.c)
 *     ?CreateKsPin@CSidebandDevice@@AEAAJKPEATKSDATAFORMAT@@PEAPEAU_KSPIN@@@Z @ 0x1C000C680 (-CreateKsPin@CSidebandDevice@@AEAAJKPEATKSDATAFORMAT@@PEAPEAU_KSPIN@@@Z.c)
 *     ?CsqCompleteCanceledIrp@CSidebandDevice@@AEAAXPEAU_IO_CSQ@@PEAU_IRP@@@Z @ 0x1C000CC50 (-CsqCompleteCanceledIrp@CSidebandDevice@@AEAAXPEAU_IO_CSQ@@PEAU_IRP@@@Z.c)
 *     ?DeInitIoQueue@CSidebandDevice@@UEAAJXZ @ 0x1C000CD10 (-DeInitIoQueue@CSidebandDevice@@UEAAJXZ.c)
 *     ?EmptyAndCancelIrpsInQueue@CSidebandDevice@@AEAAJPEAU_LIST_ENTRY@@@Z @ 0x1C000CF0C (-EmptyAndCancelIrpsInQueue@CSidebandDevice@@AEAAJPEAU_LIST_ENTRY@@@Z.c)
 *     ?GetBridgePinForDataPin@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@KPEAK@Z @ 0x1C000D080 (-GetBridgePinForDataPin@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@KPEAK@Z.c)
 *     ?GetEndpointCapabilities@CSidebandDevice@@AEAAJKPEAU_SIDEBANDAUDIO_ENDPOINT_CAPABILITIES@@@Z @ 0x1C000D5AC (-GetEndpointCapabilities@CSidebandDevice@@AEAAJKPEAU_SIDEBANDAUDIO_ENDPOINT_CAPABILITIES@@@Z.c)
 *     ?GetFilterInstance@CSidebandDevice@@AEAAJPEAPEAX@Z @ 0x1C000DBB8 (-GetFilterInstance@CSidebandDevice@@AEAAJPEAPEAX@Z.c)
 *     ?GetMuteImmediate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000DF84 (-GetMuteImmediate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetMutePropertyBasicSupport@CSidebandDevice@@AEAAJKPEAKPEAX@Z @ 0x1C000E4D4 (-GetMutePropertyBasicSupport@CSidebandDevice@@AEAAJKPEAKPEAX@Z.c)
 *     ?GetNodeOfType@CSidebandDevice@@SAJKKPEAU_KSFILTER_DESCRIPTOR@@PEBU_GUID@@PEAK@Z @ 0x1C000E838 (-GetNodeOfType@CSidebandDevice@@SAJKKPEAU_KSFILTER_DESCRIPTOR@@PEBU_GUID@@PEAK@Z.c)
 *     ?GetNodesInPath@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@KKPEAU_LIST_ENTRY@@@Z @ 0x1C000EABC (-GetNodesInPath@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@KKPEAU_LIST_ENTRY@@@Z.c)
 *     ?GetSidetoneImmediate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000EDA0 (-GetSidetoneImmediate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetSidetoneNodes@CSidebandDevice@@SAJKPEAU_KSFILTER_DESCRIPTOR@@PEAK1@Z @ 0x1C000F1E8 (-GetSidetoneNodes@CSidebandDevice@@SAJKPEAU_KSFILTER_DESCRIPTOR@@PEAK1@Z.c)
 *     ?GetSidetoneVolumePropertyBasicSupport@CSidebandDevice@@AEAAJKPEAKPEAX@Z @ 0x1C000F59C (-GetSidetoneVolumePropertyBasicSupport@CSidebandDevice@@AEAAJKPEAKPEAX@Z.c)
 *     ?GetVolumePropertyBasicSupport@CSidebandDevice@@AEAAJKPEAKPEAX@Z @ 0x1C000F95C (-GetVolumePropertyBasicSupport@CSidebandDevice@@AEAAJKPEAKPEAX@Z.c)
 *     ?InitializeIoQueue@CSidebandDevice@@UEAAJXZ @ 0x1C000FCC0 (-InitializeIoQueue@CSidebandDevice@@UEAAJXZ.c)
 *     ?IntersectDataFormatsWithDataRange@CSidebandDevice@@AEAAJPEAPEATKSDATAFORMAT@@KPEAU_KSPIN_DESCRIPTOR_EX@@PEAEPEAK3@Z @ 0x1C000FEB8 (-IntersectDataFormatsWithDataRange@CSidebandDevice@@AEAAJPEAPEATKSDATAFORMAT@@KPEAU_KSPIN_DESCRI.c)
 *     ?IrpMJCloseHandler@CSidebandDevice@@UEAAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C0010130 (-IrpMJCloseHandler@CSidebandDevice@@UEAAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 *     ?IrpMJCreateHandler@CSidebandDevice@@UEAAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C0010290 (-IrpMJCreateHandler@CSidebandDevice@@UEAAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 *     ?IrpMJInternalIoControlHandler@CSidebandDevice@@UEAAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C00103F0 (-IrpMJInternalIoControlHandler@CSidebandDevice@@UEAAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 *     ?IrpMJIoControlHandler@CSidebandDevice@@UEAAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C00105E0 (-IrpMJIoControlHandler@CSidebandDevice@@UEAAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 *     ?IsFeedbackSupported@CSidebandDevice@@AEAAJPEAU_KSDEVICE@@KPEAH@Z @ 0x1C0010858 (-IsFeedbackSupported@CSidebandDevice@@AEAAJPEAU_KSDEVICE@@KPEAH@Z.c)
 *     ?PublishInterface@CSidebandDevice@@UEAAJXZ @ 0x1C0011000 (-PublishInterface@CSidebandDevice@@UEAAJXZ.c)
 *     ?RemoveFileFromOpenHandles@CSidebandDevice@@AEAAJPEAU_FILE_OBJECT@@@Z @ 0x1C00112C4 (-RemoveFileFromOpenHandles@CSidebandDevice@@AEAAJPEAU_FILE_OBJECT@@@Z.c)
 *     ?StopIoQueueThread@CSidebandDevice@@AEAAJXZ @ 0x1C0011530 (-StopIoQueueThread@CSidebandDevice@@AEAAJXZ.c)
 *     ?GetDeviceDescriptor@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C00133C8 (-GetDeviceDescriptor@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetSiop@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C00146C4 (-GetSiop@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?SetMute@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C00159E4 (-SetMute@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?SetSidebandClaimed@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C0015F6C (-SetSidebandClaimed@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?SetSidetone@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C00160EC (-SetSidetone@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?SetSiop@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C00166A8 (-SetSiop@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?SetVolume@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C0016B28 (-SetVolume@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?StreamClose@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C00170B0 (-StreamClose@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?StreamOpen@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C001740C (-StreamOpen@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?StreamStart@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C0017714 (-StreamStart@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     IsClassDriverOnly @ 0x1C002ADA4 (IsClassDriverOnly.c)
 *     IsSidebandSupported @ 0x1C002B038 (IsSidebandSupported.c)
 *     SidebandCapableDeferredFilterFactoryCreate @ 0x1C002B330 (SidebandCapableDeferredFilterFactoryCreate.c)
 *     USBDeviceGetControllerInfo @ 0x1C00317E0 (USBDeviceGetControllerInfo.c)
 *     USBHwSelectStreamingAudioInterfaceSideband @ 0x1C0032A24 (USBHwSelectStreamingAudioInterfaceSideband.c)
 *     USBHwSetTransportResources @ 0x1C0033420 (USBHwSetTransportResources.c)
 *     USBCntrlGetSetGEQ @ 0x1C0036480 (USBCntrlGetSetGEQ.c)
 *     UsbAudioIrpDispatcher @ 0x1C0037970 (UsbAudioIrpDispatcher.c)
 *     USBHwSelectStreamingAudioInterface @ 0x1C003850C (USBHwSelectStreamingAudioInterface.c)
 *     USBHwGetTransportResources @ 0x1C003B6A0 (USBHwGetTransportResources.c)
 *     PinReset @ 0x1C003D7A0 (PinReset.c)
 *     PinCreate @ 0x1C003DF00 (PinCreate.c)
 *     USBCntrlGetSetBoolean @ 0x1C003EA50 (USBCntrlGetSetBoolean.c)
 *     USBCntrlGetSetDbLevel @ 0x1C003EC70 (USBCntrlGetSetDbLevel.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001A000 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_ @ 0x1C000956C
 * Reason: Hex-Rays returned no pseudocode for 0x1C000956C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C000956C: mov     [rsp+arg_0], rbx
 * 00000001C0009571: mov     [rsp+arg_8], rsi
 * 00000001C0009576: push    rdi
 * 00000001C0009577: sub     rsp, 30h
 * 00000001C000957B: movzx   ebx, [rsp+38h+arg_30]
 * 00000001C0009580: mov     rsi, r9
 * 00000001C0009583: mov     dil, r8b
 * 00000001C0009586: test    dl, dl
 * 00000001C0009588: jz      short loc_1C00095AA
 * 00000001C000958A: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0009591: mov     r9d, ebx
 * 00000001C0009594: and     [rsp+38h+var_18], 0
 * 00000001C000959A: mov     edx, 2Bh ; '+'
 * 00000001C000959F: mov     r8, [rsp+38h+arg_38]
 * 00000001C00095A4: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00095AA: test    dil, dil
 * 00000001C00095AD: jz      short loc_1C00095D5
 * 00000001C00095AF: and     [rsp+38h+var_10], 0
 * 00000001C00095B5: xor     edx, edx
 * 00000001C00095B7: mov     r9, [rsp+38h+arg_38]
 * 00000001C00095BC: mov     rcx, rsi
 * 00000001C00095BF: mov     r8d, [rsp+38h+arg_28]
 * 00000001C00095C4: mov     word ptr [rsp+38h+var_18], bx
 * 00000001C00095C9: call    cs:__imp_WppAutoLogTrace
 * 00000001C00095D0: nop     dword ptr [rax+rax+00h]
 * 00000001C00095D5: mov     rbx, [rsp+38h+arg_0]
 * 00000001C00095DA: mov     rsi, [rsp+38h+arg_8]
 * 00000001C00095DF: add     rsp, 30h
 * 00000001C00095E3: pop     rdi
 * 00000001C00095E4: retn
 */
