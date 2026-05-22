/*
 * XREFs of ??1?$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ @ 0x1800A2EF0
 * Callers:
 *     _DWMInputTarget::DeliverDeviceAttach_::_1_::dtor$1 @ 0x18005829B (_DWMInputTarget--DeliverDeviceAttach_--_1_--dtor$1.c)
 *     _DWMInputTarget::DeliverDeviceEnumerationCompleted_::_1_::dtor$1 @ 0x180058419 (_DWMInputTarget--DeliverDeviceEnumerationCompleted_--_1_--dtor$1.c)
 *     _VariableSizedPayloadStorage_InputInfo_::VariableSizedPayloadStorage_InputInfo__::_1_::dtor$0 @ 0x1800A2A4F (_VariableSizedPayloadStorage_InputInfo_--VariableSizedPayloadStorage_InputInfo__--_1_--dtor$0.c)
 *     _MPCGestureHandler::InjectManipulationInput_::_1_::dtor$0 @ 0x1800A4240 (_MPCGestureHandler--InjectManipulationInput_--_1_--dtor$0.c)
 *     _VariableSizedPayloadStorage_GazeInputInfo_::VariableSizedPayloadStorage_GazeInputInfo__::_1_::dtor$0 @ 0x1800CCA6B (_VariableSizedPayloadStorage_GazeInputInfo_--VariableSizedPayloadStorage_GazeInputInfo__--_1_--d.c)
 *     _InjectionRawInputProvider::OnInputReport_::_1_::dtor$0 @ 0x1800CEFD3 (_InjectionRawInputProvider--OnInputReport_--_1_--dtor$0.c)
 *     _VariableSizedPayloadStorage_InputInfo_::VariableSizedPayloadStorage_InputInfo__::_1_::dtor$0_0 @ 0x1800D352A (_VariableSizedPayloadStorage_InputInfo_--VariableSizedPayloadStorage_InputInfo__--_1_--dtor$0_0.c)
 *     _Win32kInterop::DeliverInputToAllTargets_::_1_::dtor$1 @ 0x1800DF554 (_Win32kInterop--DeliverInputToAllTargets_--_1_--dtor$1.c)
 *     _Win32kInterop::DeliverInputToTarget_::_1_::dtor$1 @ 0x1800DF787 (_Win32kInterop--DeliverInputToTarget_--_1_--dtor$1.c)
 *     _Win32kInterop::DoConvergedMTCallback_::_1_::dtor$0 @ 0x1800DFC69 (_Win32kInterop--DoConvergedMTCallback_--_1_--dtor$0.c)
 *     _Win32kInterop::ProcessInputMessage_::_1_::dtor$0 @ 0x1800E0DFF (_Win32kInterop--ProcessInputMessage_--_1_--dtor$0.c)
 *     _Win32kInterop::SendCancelNotificationToGestureTargeting_::_1_::dtor$0 @ 0x1800E1DFA (_Win32kInterop--SendCancelNotificationToGestureTargeting_--_1_--dtor$0.c)
 *     _InputEventPayloadBuffer::InputEventPayloadBuffer_::_1_::dtor$0 @ 0x180126134 (_InputEventPayloadBuffer--InputEventPayloadBuffer_--_1_--dtor$0.c)
 *     _InputEventPayloadBuffer::InputEventPayloadBuffer_::_1_::dtor$0_0 @ 0x1801261DC (_InputEventPayloadBuffer--InputEventPayloadBuffer_--_1_--dtor$0_0.c)
 *     _DragNDropProcessor::OnInput_::_1_::dtor$4 @ 0x180140E2F (_DragNDropProcessor--OnInput_--_1_--dtor$4.c)
 *     _ControllerProcessor::InjectManipulationInput_::_1_::dtor$0 @ 0x1801776AF (_ControllerProcessor--InjectManipulationInput_--_1_--dtor$0.c)
 *     _PenInterface::PenInterface_::_1_::dtor$7 @ 0x18018885D (_PenInterface--PenInterface_--_1_--dtor$7.c)
 *     _HapticInterface::ExtractFeatureValue_::_1_::dtor$0 @ 0x18018B405 (_HapticInterface--ExtractFeatureValue_--_1_--dtor$0.c)
 *     _HapticInterface::QueryHardwareProperties_::_1_::dtor$0 @ 0x18018BA37 (_HapticInterface--QueryHardwareProperties_--_1_--dtor$0.c)
 *     _HapticInterface::QueryIsHighLatencyDevice_::_1_::dtor$0 @ 0x18018BB93 (_HapticInterface--QueryIsHighLatencyDevice_--_1_--dtor$0.c)
 *     _MouseProcessor::ForwardInputReport_::_1_::dtor$0 @ 0x180194160 (_MouseProcessor--ForwardInputReport_--_1_--dtor$0.c)
 *     _MouseProcessor::OnMouseAsTouchAutoRepeat_::_1_::dtor$0 @ 0x180194441 (_MouseProcessor--OnMouseAsTouchAutoRepeat_--_1_--dtor$0.c)
 *     _std::vector_ContextualProcessorBuffer::InputSample_std::allocator_ContextualProcessorBuffer::InputSample___::_Emplace_reallocate_ContextualProcessorBuffer::InputSample__::_1_::dtor$0 @ 0x1801A0C40 (_std--vector_ContextualProcessorBuffer--InputSample_std--allocator_ContextualProcessorBuffer--In.c)
 *     _std::_Uninitialized_move_ContextualProcessorBuffer::InputSample___std::allocator_ContextualProcessorBuffer::InputSample____::_1_::dtor$1 @ 0x1801A121C (_std--_Uninitialized_move_ContextualProcessorBuffer--InputSample___std--allocator_C_ea_1801A121C.c)
 *     _ContextualProcessorBuffer::DeliverInputToTarget_::_1_::dtor$2 @ 0x1801A3041 (_ContextualProcessorBuffer--DeliverInputToTarget_--_1_--dtor$2.c)
 *     _ContextualProcessorBuffer::MakeContextualProcessorDecision_::_1_::dtor$2 @ 0x1801A3B31 (_ContextualProcessorBuffer--MakeContextualProcessorDecision_--_1_--dtor$2.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x18004AF4C (--_V@YAXPEAX@Z.c)
 */

void __fastcall VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>(void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    operator delete[](v1);
}
