/*
 * XREFs of ??1?$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ @ 0x18001B9A0
 * Callers:
 *     ?LoadModule@GameInputModule@@AEAAJW4ModuleKind@1@AEBUGameInputVersion@@@Z @ 0x18004BB94 (-LoadModule@GameInputModule@@AEAAJW4ModuleKind@1@AEBUGameInputVersion@@@Z.c)
 *     ?ReceiveLampAttributesReport@HidLampArrayDevice@@AEAAJHPEAULampAttributesResponseDeviceReport@@@Z @ 0x180064998 (-ReceiveLampAttributesReport@HidLampArrayDevice@@AEAAJHPEAULampAttributesResponseDeviceReport@@@.c)
 *     _DWMInputTarget::DeliverDeviceAttach_::_1_::dtor$1 @ 0x18007F9C4 (_DWMInputTarget--DeliverDeviceAttach_--_1_--dtor$1.c)
 *     _DWMInputTarget::DeliverDeviceEnumerationCompleted_::_1_::dtor$1 @ 0x18007FC08 (_DWMInputTarget--DeliverDeviceEnumerationCompleted_--_1_--dtor$1.c)
 *     _VariableSizedPayloadStorage_InputInfo_::VariableSizedPayloadStorage_InputInfo__::_1_::dtor$0 @ 0x1800CB22F (_VariableSizedPayloadStorage_InputInfo_--VariableSizedPayloadStorage_InputInfo__--_1_--dtor$0.c)
 *     _MPCGestureHandler::InjectManipulationInput_::_1_::dtor$0 @ 0x1800CC9E1 (_MPCGestureHandler--InjectManipulationInput_--_1_--dtor$0.c)
 *     GetRIMDeviceInstancePath @ 0x1800F4948 (GetRIMDeviceInstancePath.c)
 *     _VariableSizedPayloadStorage_GazeInputInfo_::VariableSizedPayloadStorage_GazeInputInfo__::_1_::dtor$0 @ 0x1800F5003 (_VariableSizedPayloadStorage_GazeInputInfo_--VariableSizedPayloadStorage_GazeInputInfo__--_1_--d.c)
 *     ?TryGetDockInputReport@DockDevice@@QEAAJPEAUGetInputReportResult@@@Z @ 0x1800F6204 (-TryGetDockInputReport@DockDevice@@QEAAJPEAUGetInputReportResult@@@Z.c)
 *     ?OnInputReport@InjectionRawInputProvider@@QEAAJPEAVInputInjectionClientProxy@@AEAV?$vector@UTouchInjectionContact@Input@Internal@UI@Windows@@V?$allocator@UTouchInjectionContact@Input@Internal@UI@Windows@@@std@@@std@@@Z @ 0x1800F74B8 (-OnInputReport@InjectionRawInputProvider@@QEAAJPEAVInputInjectionClientProxy@@AEAV-$vector@UTouc.c)
 *     _InjectionRawInputProvider::OnInputReport_::_1_::dtor$0 @ 0x1800F762E (_InjectionRawInputProvider--OnInputReport_--_1_--dtor$0.c)
 *     _VariableSizedPayloadStorage_InputInfo_::VariableSizedPayloadStorage_InputInfo__::_1_::dtor$0_0 @ 0x1800FC25E (_VariableSizedPayloadStorage_InputInfo_--VariableSizedPayloadStorage_InputInfo__--_1_--dtor$0_0.c)
 *     ?SendLampArrayControlReport@HidLampArrayDevice@@AEAAJPEBULampArrayControlDeviceReport@@@Z @ 0x18010156C (-SendLampArrayControlReport@HidLampArrayDevice@@AEAAJPEBULampArrayControlDeviceReport@@@Z.c)
 *     ?SendLampAttributesRequest@HidLampArrayDevice@@AEAAJH@Z @ 0x180101740 (-SendLampAttributesRequest@HidLampArrayDevice@@AEAAJH@Z.c)
 *     ?SendLampMultiUpdateReport@HidLampArrayDevice@@QEAAJPEBULampMultiUpdateDeviceReport@@@Z @ 0x180101868 (-SendLampMultiUpdateReport@HidLampArrayDevice@@QEAAJPEBULampMultiUpdateDeviceReport@@@Z.c)
 *     ?SendLampRangeUpdateReport@HidLampArrayDevice@@QEAAJPEBULampRangeUpdateDeviceReport@@@Z @ 0x180101A2C (-SendLampRangeUpdateReport@HidLampArrayDevice@@QEAAJPEBULampRangeUpdateDeviceReport@@@Z.c)
 *     _Win32kInterop::DeliverInputToAllTargets_::_1_::dtor$1 @ 0x180107C5A (_Win32kInterop--DeliverInputToAllTargets_--_1_--dtor$1.c)
 *     _Win32kInterop::DeliverInputToTarget_::_1_::dtor$1 @ 0x180107E8E (_Win32kInterop--DeliverInputToTarget_--_1_--dtor$1.c)
 *     _Win32kInterop::DoConvergedMTCallback_::_1_::dtor$0 @ 0x180108336 (_Win32kInterop--DoConvergedMTCallback_--_1_--dtor$0.c)
 *     _Win32kInterop::ProcessInputMessage_::_1_::dtor$0 @ 0x180109121 (_Win32kInterop--ProcessInputMessage_--_1_--dtor$0.c)
 *     _Win32kInterop::SendCancelNotificationToGestureTargeting_::_1_::dtor$0 @ 0x18010A000 (_Win32kInterop--SendCancelNotificationToGestureTargeting_--_1_--dtor$0.c)
 *     _InputEventPayloadBuffer::InputEventPayloadBuffer_::_1_::dtor$0 @ 0x18014E848 (_InputEventPayloadBuffer--InputEventPayloadBuffer_--_1_--dtor$0.c)
 *     _InputEventPayloadBuffer::InputEventPayloadBuffer_::_1_::dtor$0_0 @ 0x18014E8F0 (_InputEventPayloadBuffer--InputEventPayloadBuffer_--_1_--dtor$0_0.c)
 *     _DragNDropProcessor::OnInput_::_1_::dtor$4 @ 0x18016DFB4 (_DragNDropProcessor--OnInput_--_1_--dtor$4.c)
 *     ?InjectManipulationInput@ControllerProcessor@@UEAAJIPEAUtagPOINTER_TOUCH_INFO@@@Z @ 0x1801A4890 (-InjectManipulationInput@ControllerProcessor@@UEAAJIPEAUtagPOINTER_TOUCH_INFO@@@Z.c)
 *     _ControllerProcessor::InjectManipulationInput_::_1_::dtor$0 @ 0x1801A49FA (_ControllerProcessor--InjectManipulationInput_--_1_--dtor$0.c)
 *     _PenInterface::PenInterface_::_1_::dtor$7 @ 0x1801B4963 (_PenInterface--PenInterface_--_1_--dtor$7.c)
 *     ?QueryTransducerPropertiesFeatureReport@PenInterface@@AEAAJPEAUTransducerPropertiesReport@1@@Z @ 0x1801B52E4 (-QueryTransducerPropertiesFeatureReport@PenInterface@@AEAAJPEAUTransducerPropertiesReport@1@@Z.c)
 *     ?ExtractFeatureValue@HapticInterface@@AEAAJEGGGPEAH@Z @ 0x1801B73A0 (-ExtractFeatureValue@HapticInterface@@AEAAJEGGGPEAH@Z.c)
 *     _HapticInterface::ExtractFeatureValue_::_1_::dtor$0 @ 0x1801B7554 (_HapticInterface--ExtractFeatureValue_--_1_--dtor$0.c)
 *     ?FindHapticsCollection@HapticInterface@@AEAA_NPEAU_HIDP_PREPARSED_DATA@@PEAG@Z @ 0x1801B7568 (-FindHapticsCollection@HapticInterface@@AEAA_NPEAU_HIDP_PREPARSED_DATA@@PEAG@Z.c)
 *     ?QueryHardwareProperties@HapticInterface@@AEAAJXZ @ 0x1801B788C (-QueryHardwareProperties@HapticInterface@@AEAAJXZ.c)
 *     _HapticInterface::QueryHardwareProperties_::_1_::dtor$0 @ 0x1801B7BAC (_HapticInterface--QueryHardwareProperties_--_1_--dtor$0.c)
 *     ?QueryIsHighLatencyDevice@HapticInterface@@AEAA_NAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1801B7BC0 (-QueryIsHighLatencyDevice@HapticInterface@@AEAA_NAEBV-$basic_string@GU-$char_traits@G@std@@V-$al.c)
 *     _HapticInterface::QueryIsHighLatencyDevice_::_1_::dtor$0 @ 0x1801B7D18 (_HapticInterface--QueryIsHighLatencyDevice_--_1_--dtor$0.c)
 *     ?SendHapticFeedbackInternal@HapticInterface@@AEAAJGMIII@Z @ 0x1801B7D2C (-SendHapticFeedbackInternal@HapticInterface@@AEAAJGMIII@Z.c)
 *     _MouseProcessor::ForwardInputReport_::_1_::dtor$0 @ 0x1801C0050 (_MouseProcessor--ForwardInputReport_--_1_--dtor$0.c)
 *     _MouseProcessor::OnMouseAsTouchAutoRepeat_::_1_::dtor$0 @ 0x1801C0332 (_MouseProcessor--OnMouseAsTouchAutoRepeat_--_1_--dtor$0.c)
 *     _std::vector_ContextualProcessorBuffer::InputSample_std::allocator_ContextualProcessorBuffer::InputSample___::_Emplace_reallocate_ContextualProcessorBuffer::InputSample__::_1_::dtor$0 @ 0x1801CC560 (_std--vector_ContextualProcessorBuffer--InputSample_std--allocator_ContextualProcessorBuffer--In.c)
 *     _std::_Uninitialized_move_ContextualProcessorBuffer::InputSample___std::allocator_ContextualProcessorBuffer::InputSample____::_1_::dtor$1 @ 0x1801CCB48 (_std--_Uninitialized_move_ContextualProcessorBuffer--InputSample___std--allocator_C_ea_1801CCB48.c)
 *     ?DeliverInputToTarget@ContextualProcessorBuffer@@AEAAJPEAUInputInfo@@AEAV?$unordered_map@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@U?$hash@K@std@@U?$equal_to@K@5@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@@std@@1AEAV?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@4@@Z @ 0x1801CE198 (-DeliverInputToTarget@ContextualProcessorBuffer@@AEAAJPEAUInputInfo@@AEAV-$unordered_map@KV-$Com.c)
 *     _ContextualProcessorBuffer::DeliverInputToTarget_::_1_::dtor$2 @ 0x1801CE796 (_ContextualProcessorBuffer--DeliverInputToTarget_--_1_--dtor$2.c)
 *     _ContextualProcessorBuffer::MakeContextualProcessorDecision_::_1_::dtor$2 @ 0x1801CF2B1 (_ContextualProcessorBuffer--MakeContextualProcessorDecision_--_1_--dtor$2.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x180057AD8 (--_V@YAXPEAX@Z.c)
 */

void __fastcall VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>(void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    operator delete[](v1);
}
