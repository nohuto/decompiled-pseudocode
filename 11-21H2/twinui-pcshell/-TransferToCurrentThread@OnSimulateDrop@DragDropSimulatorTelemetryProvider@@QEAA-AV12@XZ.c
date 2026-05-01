/*
 * XREFs of ?TransferToCurrentThread@OnSimulateDrop@DragDropSimulatorTelemetryProvider@@QEAA?AV12@XZ @ 0x18056E878
 * Callers:
 *     ??R_lambda_5412139df090f220eeb5e1a31b6fef59_@@QEBAXXZ @ 0x18056C814 (--R_lambda_5412139df090f220eeb5e1a31b6fef59_@@QEBAXXZ.c)
 * Callees:
 *     ??0?$ActivityBase@VDragDropSimulatorTraceLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@_N@Z @ 0x18056C0F4 (--0-$ActivityBase@VDragDropSimulatorTraceLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorT.c)
 */

struct wil::details::IFailureCallback *__fastcall DragDropSimulatorTelemetryProvider::OnSimulateDrop::TransferToCurrentThread(
        __int64 a1,
        struct wil::details::IFailureCallback *a2)
{
  wil::ActivityBase<DragDropSimulatorTraceLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<DragDropSimulatorTraceLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>(
    a2,
    a1,
    **(_DWORD **)(a1 + 48) == 1);
  *(_QWORD *)a2 = &DragDropSimulatorTelemetryProvider::OnSimulateDrop::`vftable';
  return a2;
}
