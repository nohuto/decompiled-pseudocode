/*
 * XREFs of ??R_lambda_5412139df090f220eeb5e1a31b6fef59_@@QEBAXXZ @ 0x18056C814
 * Callers:
 *     winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::SimulateDrop$_ResumeCoro$1 @ 0x1801B95F0 (winrt--Windows--Internal--Shell--DragDropSimulator--implementation--DragDropSimulat_ea_1801B95F0.c)
 *     ??1?$ScopeExitFn@V_lambda_5412139df090f220eeb5e1a31b6fef59_@@@details@wil@@QEAA@XZ @ 0x18056C4D8 (--1-$ScopeExitFn@V_lambda_5412139df090f220eeb5e1a31b6fef59_@@@details@wil@@QEAA@XZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ??1OnSimulateDrop@DragDropSimulatorTelemetryProvider@@QEAA@XZ @ 0x18056C5EC (--1OnSimulateDrop@DragDropSimulatorTelemetryProvider@@QEAA@XZ.c)
 *     ??4OnSimulateDrop@DragDropSimulatorTelemetryProvider@@QEAAAEAV01@$$QEAV01@@Z @ 0x18056C6D8 (--4OnSimulateDrop@DragDropSimulatorTelemetryProvider@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?TransferToCurrentThread@OnSimulateDrop@DragDropSimulatorTelemetryProvider@@QEAA?AV12@XZ @ 0x18056E878 (-TransferToCurrentThread@OnSimulateDrop@DragDropSimulatorTelemetryProvider@@QEAA-AV12@XZ.c)
 */

void __fastcall _lambda_5412139df090f220eeb5e1a31b6fef59_::operator()(__int64 *a1)
{
  __int64 v2; // rax
  _BYTE v3[320]; // [rsp+20h] [rbp-158h] BYREF

  v2 = DragDropSimulatorTelemetryProvider::OnSimulateDrop::TransferToCurrentThread(a1[1], v3);
  DragDropSimulatorTelemetryProvider::OnSimulateDrop::operator=(*a1, v2);
  DragDropSimulatorTelemetryProvider::OnSimulateDrop::~OnSimulateDrop((DragDropSimulatorTelemetryProvider::OnSimulateDrop *)v3);
}
