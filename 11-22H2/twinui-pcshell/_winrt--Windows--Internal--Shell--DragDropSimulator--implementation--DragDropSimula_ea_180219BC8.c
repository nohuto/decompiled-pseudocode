/*
 * XREFs of _winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::SimulateDrop$_ResumeCoro$1_::_1_::dtor$0 @ 0x180219BC8
 * Callers:
 *     <none>
 * Callees:
 *     ??1OnSimulateDrop@DragDropSimulatorTelemetryProvider@@QEAA@XZ @ 0x18062A648 (--1OnSimulateDrop@DragDropSimulatorTelemetryProvider@@QEAA@XZ.c)
 */

void __fastcall winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::SimulateDrop__ResumeCoro_1_::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 128) = *(_QWORD *)(a2 + 56) + 16LL;
  DragDropSimulatorTelemetryProvider::OnSimulateDrop::~OnSimulateDrop(*(DragDropSimulatorTelemetryProvider::OnSimulateDrop **)(a2 + 128));
}
