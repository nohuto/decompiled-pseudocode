/*
 * XREFs of ??1?$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ @ 0x1800BA8EC
 * Callers:
 *     _DWMInputTarget::DeliverDeviceAttach_::_1_::dtor$1 @ 0x18006BE74 (_DWMInputTarget--DeliverDeviceAttach_--_1_--dtor$1.c)
 *     _DWMInputTarget::DeliverDeviceEnumerationCompleted_::_1_::dtor$1 @ 0x18006C078 (_DWMInputTarget--DeliverDeviceEnumerationCompleted_--_1_--dtor$1.c)
 *     _VariableSizedPayloadStorage_InputInfo_::VariableSizedPayloadStorage_InputInfo__::_1_::dtor$0 @ 0x1800BA44F (_VariableSizedPayloadStorage_InputInfo_--VariableSizedPayloadStorage_InputInfo__--_1_--dtor$0.c)
 *     _MPCGestureHandler::InjectManipulationInput_::_1_::dtor$0 @ 0x1800BBC21 (_MPCGestureHandler--InjectManipulationInput_--_1_--dtor$0.c)
 *     GetRIMDeviceInstancePath @ 0x1800E59E8 (GetRIMDeviceInstancePath.c)
 *     _VariableSizedPayloadStorage_GazeInputInfo_::VariableSizedPayloadStorage_GazeInputInfo__::_1_::dtor$0 @ 0x1800E6083 (_VariableSizedPayloadStorage_GazeInputInfo_--VariableSizedPayloadStorage_GazeInputInfo__--_1_--d.c)
 *     ?TryGetDockInputReport@DockDevice@@QEAAJPEAUGetInputReportResult@@@Z @ 0x1800E7284 (-TryGetDockInputReport@DockDevice@@QEAAJPEAUGetInputReportResult@@@Z.c)
 *     ?OnInputReport@InjectionRawInputProvider@@QEAAJPEAVInputInjectionClientProxy@@AEAV?$vector@UTouchInjectionContact@Input@Internal@UI@Windows@@V?$allocator@UTouchInjectionContact@Input@Internal@UI@Windows@@@std@@@std@@@Z @ 0x1800E8538 (-OnInputReport@InjectionRawInputProvider@@QEAAJPEAVInputInjectionClientProxy@@AEAV-$vector@UTouc.c)
 *     _InjectionRawInputProvider::OnInputReport_::_1_::dtor$0 @ 0x1800E86AE (_InjectionRawInputProvider--OnInputReport_--_1_--dtor$0.c)
 *     _VariableSizedPayloadStorage_InputInfo_::VariableSizedPayloadStorage_InputInfo__::_1_::dtor$0_0 @ 0x1800ED14A (_VariableSizedPayloadStorage_InputInfo_--VariableSizedPayloadStorage_InputInfo__--_1_--dtor$0_0.c)
 *     _Win32kInterop::DeliverInputToAllTargets_::_1_::dtor$1 @ 0x1800F91DA (_Win32kInterop--DeliverInputToAllTargets_--_1_--dtor$1.c)
 *     _Win32kInterop::DeliverInputToTarget_::_1_::dtor$1 @ 0x1800F940E (_Win32kInterop--DeliverInputToTarget_--_1_--dtor$1.c)
 *     _Win32kInterop::DoConvergedMTCallback_::_1_::dtor$0 @ 0x1800F98B6 (_Win32kInterop--DoConvergedMTCallback_--_1_--dtor$0.c)
 *     _Win32kInterop::ProcessInputMessage_::_1_::dtor$0 @ 0x1800FA695 (_Win32kInterop--ProcessInputMessage_--_1_--dtor$0.c)
 *     _Win32kInterop::SendCancelNotificationToGestureTargeting_::_1_::dtor$0 @ 0x1800FB570 (_Win32kInterop--SendCancelNotificationToGestureTargeting_--_1_--dtor$0.c)
 *     _InputEventPayloadBuffer::InputEventPayloadBuffer_::_1_::dtor$0 @ 0x180140798 (_InputEventPayloadBuffer--InputEventPayloadBuffer_--_1_--dtor$0.c)
 *     _InputEventPayloadBuffer::InputEventPayloadBuffer_::_1_::dtor$0_0 @ 0x180140840 (_InputEventPayloadBuffer--InputEventPayloadBuffer_--_1_--dtor$0_0.c)
 *     _DragNDropProcessor::OnInput_::_1_::dtor$4 @ 0x18015FD34 (_DragNDropProcessor--OnInput_--_1_--dtor$4.c)
 *     ?InjectManipulationInput@ControllerProcessor@@UEAAJIPEAUtagPOINTER_TOUCH_INFO@@@Z @ 0x180196980 (-InjectManipulationInput@ControllerProcessor@@UEAAJIPEAUtagPOINTER_TOUCH_INFO@@@Z.c)
 *     _ControllerProcessor::InjectManipulationInput_::_1_::dtor$0 @ 0x180196AEA (_ControllerProcessor--InjectManipulationInput_--_1_--dtor$0.c)
 *     _PenInterface::PenInterface_::_1_::dtor$7 @ 0x1801A6983 (_PenInterface--PenInterface_--_1_--dtor$7.c)
 *     ?QueryTransducerPropertiesFeatureReport@PenInterface@@AEAAJPEAUTransducerPropertiesReport@1@@Z @ 0x1801A7304 (-QueryTransducerPropertiesFeatureReport@PenInterface@@AEAAJPEAUTransducerPropertiesReport@1@@Z.c)
 *     ?ExtractFeatureValue@HapticInterface@@AEAAJEGGGPEAH@Z @ 0x1801A93C0 (-ExtractFeatureValue@HapticInterface@@AEAAJEGGGPEAH@Z.c)
 *     _HapticInterface::ExtractFeatureValue_::_1_::dtor$0 @ 0x1801A9574 (_HapticInterface--ExtractFeatureValue_--_1_--dtor$0.c)
 *     ?FindHapticsCollection@HapticInterface@@AEAA_NPEAU_HIDP_PREPARSED_DATA@@PEAG@Z @ 0x1801A9588 (-FindHapticsCollection@HapticInterface@@AEAA_NPEAU_HIDP_PREPARSED_DATA@@PEAG@Z.c)
 *     ?QueryHardwareProperties@HapticInterface@@AEAAJXZ @ 0x1801A98AC (-QueryHardwareProperties@HapticInterface@@AEAAJXZ.c)
 *     _HapticInterface::QueryHardwareProperties_::_1_::dtor$0 @ 0x1801A9BCC (_HapticInterface--QueryHardwareProperties_--_1_--dtor$0.c)
 *     ?QueryIsHighLatencyDevice@HapticInterface@@AEAA_NAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1801A9BE0 (-QueryIsHighLatencyDevice@HapticInterface@@AEAA_NAEBV-$basic_string@GU-$char_traits@G@std@@V-$al.c)
 *     _HapticInterface::QueryIsHighLatencyDevice_::_1_::dtor$0 @ 0x1801A9D38 (_HapticInterface--QueryIsHighLatencyDevice_--_1_--dtor$0.c)
 *     ?SendHapticFeedbackInternal@HapticInterface@@AEAAJGMIII@Z @ 0x1801A9D4C (-SendHapticFeedbackInternal@HapticInterface@@AEAAJGMIII@Z.c)
 *     _MouseProcessor::ForwardInputReport_::_1_::dtor$0 @ 0x1801B2070 (_MouseProcessor--ForwardInputReport_--_1_--dtor$0.c)
 *     _MouseProcessor::OnMouseAsTouchAutoRepeat_::_1_::dtor$0 @ 0x1801B2352 (_MouseProcessor--OnMouseAsTouchAutoRepeat_--_1_--dtor$0.c)
 *     _std::vector_ContextualProcessorBuffer::InputSample_std::allocator_ContextualProcessorBuffer::InputSample___::_Emplace_reallocate_ContextualProcessorBuffer::InputSample__::_1_::dtor$0 @ 0x1801BECF0 (_std--vector_ContextualProcessorBuffer--InputSample_std--allocator_ContextualProcessorBuffer--In.c)
 *     _std::_Uninitialized_move_ContextualProcessorBuffer::InputSample___std::allocator_ContextualProcessorBuffer::InputSample____::_1_::dtor$1 @ 0x1801BF2D8 (_std--_Uninitialized_move_ContextualProcessorBuffer--InputSample___std--allocator_C_ea_1801BF2D8.c)
 *     ?DeliverInputToTarget@ContextualProcessorBuffer@@AEAAJPEAUInputInfo@@AEAV?$unordered_map@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@U?$hash@K@std@@U?$equal_to@K@5@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@@std@@1AEAV?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@4@@Z @ 0x1801C0928 (-DeliverInputToTarget@ContextualProcessorBuffer@@AEAAJPEAUInputInfo@@AEAV-$unordered_map@KV-$Com.c)
 *     _ContextualProcessorBuffer::DeliverInputToTarget_::_1_::dtor$2 @ 0x1801C0F26 (_ContextualProcessorBuffer--DeliverInputToTarget_--_1_--dtor$2.c)
 *     _ContextualProcessorBuffer::MakeContextualProcessorDecision_::_1_::dtor$2 @ 0x1801C1A41 (_ContextualProcessorBuffer--MakeContextualProcessorDecision_--_1_--dtor$2.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x180056D48 (--_V@YAXPEAX@Z.c)
 */

void __fastcall VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>(void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    operator delete[](v1);
}
