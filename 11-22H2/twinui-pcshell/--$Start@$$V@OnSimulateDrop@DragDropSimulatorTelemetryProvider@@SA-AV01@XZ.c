/*
 * XREFs of ??$Start@$$V@OnSimulateDrop@DragDropSimulatorTelemetryProvider@@SA?AV01@XZ @ 0x180629A8C
 * Callers:
 *     winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::SimulateDrop$_ResumeCoro$1 @ 0x1802194D0 (winrt--Windows--Internal--Shell--DragDropSimulator--implementation--DragDropSimulat_ea_1802194D0.c)
 * Callees:
 *     ??0?$ActivityBase@VDragDropSimulatorTraceLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18062A2C4 (--0-$ActivityBase@VDragDropSimulatorTraceLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U__ea_18062A2C4.c)
 *     ?StartActivity@OnSimulateDrop@DragDropSimulatorTelemetryProvider@@QEAAXXZ @ 0x18062C218 (-StartActivity@OnSimulateDrop@DragDropSimulatorTelemetryProvider@@QEAAXXZ.c)
 */

DragDropSimulatorTelemetryProvider::OnSimulateDrop *__fastcall DragDropSimulatorTelemetryProvider::OnSimulateDrop::Start<>(
        DragDropSimulatorTelemetryProvider::OnSimulateDrop *this)
{
  wil::ActivityBase<DragDropSimulatorTraceLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<DragDropSimulatorTraceLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>(this);
  *(_QWORD *)this = &DragDropSimulatorTelemetryProvider::OnSimulateDrop::`vftable';
  DragDropSimulatorTelemetryProvider::OnSimulateDrop::StartActivity(this);
  return this;
}
