/*
 * XREFs of ??1OnSimulateDrop@DragDropSimulatorTelemetryProvider@@QEAA@XZ @ 0x18056C5EC
 * Callers:
 *     winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::SimulateDrop$_ResumeCoro$1 @ 0x1801B95F0 (winrt--Windows--Internal--Shell--DragDropSimulator--implementation--DragDropSimulat_ea_1801B95F0.c)
 *     _winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::SimulateDrop$_ResumeCoro$1_::_1_::dtor$0 @ 0x1801B9EDC (_winrt--Windows--Internal--Shell--DragDropSimulator--implementation--DragDropSimula_ea_1801B9EDC.c)
 *     _winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::SimulateDrop$_ResumeCoro$1_::_1_::dtor$3 @ 0x1801B9F60 (_winrt--Windows--Internal--Shell--DragDropSimulator--implementation--DragDropSimula_ea_1801B9F60.c)
 *     _winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::SimulateDrop$_ResumeCoro$1_::_1_::dtor$8 @ 0x1801BA010 (_winrt--Windows--Internal--Shell--DragDropSimulator--implementation--DragDropSimula_ea_1801BA010.c)
 *     ??4OnSimulateDrop@DragDropSimulatorTelemetryProvider@@QEAAAEAV01@$$QEAV01@@Z @ 0x18056C6D8 (--4OnSimulateDrop@DragDropSimulatorTelemetryProvider@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??R_lambda_5412139df090f220eeb5e1a31b6fef59_@@QEBAXXZ @ 0x18056C814 (--R_lambda_5412139df090f220eeb5e1a31b6fef59_@@QEBAXXZ.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VDragDropSimulatorTraceLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18056CC20 (-Destroy@-$ActivityBase@VDragDropSimulatorTraceLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgRefl.c)
 */

void __fastcall DragDropSimulatorTelemetryProvider::OnSimulateDrop::~OnSimulateDrop(
        DragDropSimulatorTelemetryProvider::OnSimulateDrop *this)
{
  *(_QWORD *)this = &DragDropSimulatorTelemetryProvider::OnSimulateDrop::`vftable';
  wil::ActivityBase<DragDropSimulatorTraceLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<DragDropSimulatorTraceLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<DragDropSimulatorTraceLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
