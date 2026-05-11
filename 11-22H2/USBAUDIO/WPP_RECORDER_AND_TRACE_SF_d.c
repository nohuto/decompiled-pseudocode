/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_d @ 0x1C0005BE8
 * Callers:
 *     ?StreamSuspend@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C0005CA4 (-StreamSuspend@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetPinFromPinsInUseList@CSidebandDevice@@AEAAJKPEAPEAU_KSPIN@@@Z @ 0x1C00061A4 (-GetPinFromPinsInUseList@CSidebandDevice@@AEAAJKPEAPEAU_KSPIN@@@Z.c)
 *     ?GetPinFromEpIndex@CSidebandDevice@@AEAAJKPEAKPEAPEAU_KSPIN_DESCRIPTOR_EX@@@Z @ 0x1C000633C (-GetPinFromEpIndex@CSidebandDevice@@AEAAJKPEAKPEAPEAU_KSPIN_DESCRIPTOR_EX@@@Z.c)
 *     ?GetVolumeImmediate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C0007734 (-GetVolumeImmediate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     SidebandDispatchIrp @ 0x1C0007C88 (SidebandDispatchIrp.c)
 *     DeInitSideband @ 0x1C00080F8 (DeInitSideband.c)
 *     ?SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C00082F0 (-SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     InitializeSideband @ 0x1C000B83C (InitializeSideband.c)
 *     ?AddFileToOpenHandles@CSidebandDevice@@AEAAJPEAU_FILE_OBJECT@@@Z @ 0x1C000C124 (-AddFileToOpenHandles@CSidebandDevice@@AEAAJPEAU_FILE_OBJECT@@@Z.c)
 *     ?CancelPendingIrps@CSidebandDevice@@UEAAJXZ @ 0x1C000C3B0 (-CancelPendingIrps@CSidebandDevice@@UEAAJXZ.c)
 *     ?CloseAllPinInstances@CSidebandDevice@@UEAAJXZ @ 0x1C000C4D0 (-CloseAllPinInstances@CSidebandDevice@@UEAAJXZ.c)
 *     ?CreateKsPin@CSidebandDevice@@AEAAJKPEATKSDATAFORMAT@@PEAPEAU_KSPIN@@@Z @ 0x1C000C680 (-CreateKsPin@CSidebandDevice@@AEAAJKPEATKSDATAFORMAT@@PEAPEAU_KSPIN@@@Z.c)
 *     ?DeInitIoQueue@CSidebandDevice@@UEAAJXZ @ 0x1C000CD10 (-DeInitIoQueue@CSidebandDevice@@UEAAJXZ.c)
 *     ?GetBridgePinForDataPin@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@KPEAK@Z @ 0x1C000D080 (-GetBridgePinForDataPin@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@KPEAK@Z.c)
 *     ?GetDeviceContainerId@CSidebandDevice@@AEAAJPEAU_GUID@@@Z @ 0x1C000D220 (-GetDeviceContainerId@CSidebandDevice@@AEAAJPEAU_GUID@@@Z.c)
 *     ?GetEndpointCapabilities@CSidebandDevice@@AEAAJKPEAU_SIDEBANDAUDIO_ENDPOINT_CAPABILITIES@@@Z @ 0x1C000D5AC (-GetEndpointCapabilities@CSidebandDevice@@AEAAJKPEAU_SIDEBANDAUDIO_ENDPOINT_CAPABILITIES@@@Z.c)
 *     ?GetFilterInstance@CSidebandDevice@@AEAAJPEAPEAX@Z @ 0x1C000DBB8 (-GetFilterInstance@CSidebandDevice@@AEAAJPEAPEAX@Z.c)
 *     ?GetMuteImmediate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000DF84 (-GetMuteImmediate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetMutePropertyBasicSupport@CSidebandDevice@@AEAAJKPEAKPEAX@Z @ 0x1C000E4D4 (-GetMutePropertyBasicSupport@CSidebandDevice@@AEAAJKPEAKPEAX@Z.c)
 *     ?GetNodeOfType@CSidebandDevice@@SAJKKPEAU_KSFILTER_DESCRIPTOR@@PEBU_GUID@@PEAK@Z @ 0x1C000E838 (-GetNodeOfType@CSidebandDevice@@SAJKKPEAU_KSFILTER_DESCRIPTOR@@PEBU_GUID@@PEAK@Z.c)
 *     ?GetNodesInPath@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@KKPEAU_LIST_ENTRY@@@Z @ 0x1C000EABC (-GetNodesInPath@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@KKPEAU_LIST_ENTRY@@@Z.c)
 *     ?GetNumberOfEndpointsInDevice@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@PEAK@Z @ 0x1C000EC98 (-GetNumberOfEndpointsInDevice@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@PEAK@Z.c)
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
 *     ?IsSupportedSidebandTopology@CSidebandDevice@@SAHPEAU_KSFILTER_DESCRIPTOR@@@Z @ 0x1C0010B94 (-IsSupportedSidebandTopology@CSidebandDevice@@SAHPEAU_KSFILTER_DESCRIPTOR@@@Z.c)
 *     ?PublishInterface@CSidebandDevice@@UEAAJXZ @ 0x1C0011000 (-PublishInterface@CSidebandDevice@@UEAAJXZ.c)
 *     ?StartIoQueueThread@CSidebandDevice@@AEAAJXZ @ 0x1C00113E0 (-StartIoQueueThread@CSidebandDevice@@AEAAJXZ.c)
 *     ?TraverseBackward@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@PEBUKSTOPOLOGY_CONNECTION@@KPEAU_LIST_ENTRY@@@Z @ 0x1C00116B8 (-TraverseBackward@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@PEBUKSTOPOLOGY_CONNECTION@@KPEAU.c)
 *     ?TraverseForward@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@PEBUKSTOPOLOGY_CONNECTION@@KPEAU_LIST_ENTRY@@@Z @ 0x1C0011AA8 (-TraverseForward@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@PEBUKSTOPOLOGY_CONNECTION@@KPEAU_.c)
 *     ?TraverseToCaptureBridgePin@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@PEBUKSTOPOLOGY_CONNECTION@@PEAK@Z @ 0x1C0011EAC (-TraverseToCaptureBridgePin@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@PEBUKSTOPOLOGY_CONNECT.c)
 *     ?TraverseToTerminalForDataFlowInPin@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@PEBUKSTOPOLOGY_CONNECTION@@PEAK@Z @ 0x1C0012108 (-TraverseToTerminalForDataFlowInPin@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@PEBUKSTOPOLOGY.c)
 *     ?TraverseToTerminalForDataFlowOutPin@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@PEBUKSTOPOLOGY_CONNECTION@@PEAK@Z @ 0x1C0012368 (-TraverseToTerminalForDataFlowOutPin@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@PEBUKSTOPOLOG.c)
 *     ?ValidateSupportedSidebandTopologyEndpointCategory@CSidebandDevice@@SAHPEAU_KSFILTER_DESCRIPTOR@@K@Z @ 0x1C00125C8 (-ValidateSupportedSidebandTopologyEndpointCategory@CSidebandDevice@@SAHPEAU_KSFILTER_DESCRIPTOR@.c)
 *     ?ValidateSupportedSidebandTopologyPathNodes@CSidebandDevice@@SAHPEAU_KSFILTER_DESCRIPTOR@@KK@Z @ 0x1C00127B0 (-ValidateSupportedSidebandTopologyPathNodes@CSidebandDevice@@SAHPEAU_KSFILTER_DESCRIPTOR@@KK@Z.c)
 *     _lambda_1ab46f8d786e437f5124283015cdf2a7_::operator() @ 0x1C0012DE8 (_lambda_1ab46f8d786e437f5124283015cdf2a7_--operator().c)
 *     _lambda_383040ae3a0fb7f5886c9fa7f22d00f0_::operator() @ 0x1C0012EA4 (_lambda_383040ae3a0fb7f5886c9fa7f22d00f0_--operator().c)
 *     _lambda_54b590da5451504ad188b607302821f2_::operator() @ 0x1C0012F60 (_lambda_54b590da5451504ad188b607302821f2_--operator().c)
 *     _lambda_669f6e3777d049d3571e84c335d39a8d_::operator() @ 0x1C001301C (_lambda_669f6e3777d049d3571e84c335d39a8d_--operator().c)
 *     _lambda_816a228c8b7d8639ab7e561e4adfa3ec_::operator() @ 0x1C00130D8 (_lambda_816a228c8b7d8639ab7e561e4adfa3ec_--operator().c)
 *     _lambda_9623573e77ecd9e21901cd71a385e3bc_::operator() @ 0x1C0013194 (_lambda_9623573e77ecd9e21901cd71a385e3bc_--operator().c)
 *     _lambda_9941f52df6e4fe84e0488a5695633101_::operator() @ 0x1C0013250 (_lambda_9941f52df6e4fe84e0488a5695633101_--operator().c)
 *     _lambda_fc1b195165d1d50f985f4c2976c13440_::operator() @ 0x1C001330C (_lambda_fc1b195165d1d50f985f4c2976c13440_--operator().c)
 *     ?GetDeviceDescriptor@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C00133C8 (-GetDeviceDescriptor@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetEndpointDescriptor@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C00136C0 (-GetEndpointDescriptor@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetErrorStatusUpdate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C0013D18 (-GetErrorStatusUpdate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetSiop@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C00146C4 (-GetSiop@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetStreamStatusUpdate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C0014D04 (-GetStreamStatusUpdate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetSupportedFormats@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C0014FB0 (-GetSupportedFormats@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?SetMute@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C00159E4 (-SetMute@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?SetSidetone@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C00160EC (-SetSidetone@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?SetSiop@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C00166A8 (-SetSiop@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?SetVolume@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C0016B28 (-SetVolume@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?StreamClose@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C00170B0 (-StreamClose@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?StreamOpen@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C001740C (-StreamOpen@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?StreamStart@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C0017714 (-StreamStart@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     DeviceStart @ 0x1C002A450 (DeviceStart.c)
 *     IsSidebandSupported @ 0x1C002B038 (IsSidebandSupported.c)
 *     PropertySetBoolean @ 0x1C002F9D0 (PropertySetBoolean.c)
 *     PropertySetFeatureValue @ 0x1C002FF80 (PropertySetFeatureValue.c)
 *     USBDeviceGetControllerInfo @ 0x1C00317E0 (USBDeviceGetControllerInfo.c)
 *     USBDeviceIsBehindHub @ 0x1C00319F8 (USBDeviceIsBehindHub.c)
 *     USBHwGetOffloadCapability @ 0x1C0032540 (USBHwGetOffloadCapability.c)
 *     USBHwSelectStreamingAudioInterfaceSideband @ 0x1C0032A24 (USBHwSelectStreamingAudioInterfaceSideband.c)
 *     USBHwSetTransportResources @ 0x1C0033420 (USBHwSetTransportResources.c)
 *     UsbAudioIrpDispatcher @ 0x1C0037970 (UsbAudioIrpDispatcher.c)
 *     PropertyGetBoolean @ 0x1C0039D40 (PropertyGetBoolean.c)
 *     PropertyGetDbLevel @ 0x1C0039FB0 (PropertyGetDbLevel.c)
 *     USBHwGetTransportResources @ 0x1C003B6A0 (USBHwGetTransportResources.c)
 *     PropertySetDbLevel @ 0x1C003E370 (PropertySetDbLevel.c)
 *     USBCntrlGetSetBoolean @ 0x1C003EA50 (USBCntrlGetSetBoolean.c)
 *     USBCntrlGetSetDbLevel @ 0x1C003EC70 (USBCntrlGetSetDbLevel.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001A000 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_d @ 0x1C0005BE8
 * Reason: Hex-Rays returned no pseudocode for 0x1C0005BE8
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0005BE8: mov     [rsp+arg_0], rbx
 * 00000001C0005BED: mov     [rsp+arg_8], rsi
 * 00000001C0005BF2: push    rdi
 * 00000001C0005BF3: sub     rsp, 40h
 * 00000001C0005BF7: movzx   ebx, [rsp+48h+arg_30]
 * 00000001C0005BFF: mov     rsi, r9
 * 00000001C0005C02: mov     dil, r8b
 * 00000001C0005C05: test    dl, dl
 * 00000001C0005C07: jnz     short loc_1C0005C5E
 * 00000001C0005C09: test    dil, dil
 * 00000001C0005C0C: jz      short loc_1C0005C4D
 * 00000001C0005C0E: and     [rsp+48h+var_10], 0
 * 00000001C0005C14: lea     rax, [rsp+48h+arg_40]
 * 00000001C0005C1C: mov     r9, [rsp+48h+arg_38]
 * 00000001C0005C24: xor     edx, edx
 * 00000001C0005C26: mov     r8d, [rsp+48h+arg_28]
 * 00000001C0005C2B: mov     rcx, rsi
 * 00000001C0005C2E: mov     [rsp+48h+var_18], 4
 * 00000001C0005C37: mov     [rsp+48h+var_20], rax
 * 00000001C0005C3C: mov     word ptr [rsp+48h+var_28], bx
 * 00000001C0005C41: call    cs:__imp_WppAutoLogTrace
 * 00000001C0005C48: nop     dword ptr [rax+rax+00h]
 * 00000001C0005C4D: mov     rbx, [rsp+48h+arg_0]
 * 00000001C0005C52: mov     rsi, [rsp+48h+arg_8]
 * 00000001C0005C57: add     rsp, 40h
 * 00000001C0005C5B: pop     rdi
 * 00000001C0005C5C: retn
 * 00000001C0005C5E: and     [rsp+48h+var_18], 0
 * 00000001C0005C64: lea     rdx, [rsp+48h+arg_40]
 * 00000001C0005C6C: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0005C73: mov     r9d, ebx
 * 00000001C0005C76: mov     r8, [rsp+48h+arg_38]
 * 00000001C0005C7E: mov     [rsp+48h+var_20], 4
 * 00000001C0005C87: mov     [rsp+48h+var_28], rdx
 * 00000001C0005C8C: mov     edx, 2Bh ; '+'
 * 00000001C0005C91: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0005C97: jmp     loc_1C0005C09
 */
