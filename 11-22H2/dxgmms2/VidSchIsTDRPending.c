/*
 * XREFs of VidSchIsTDRPending @ 0x1C000B500
 * Callers:
 *     VidSchiSwitchFromSuspendedDevices @ 0x1C00046B0 (VidSchiSwitchFromSuspendedDevices.c)
 *     VidSchiCompleteAllPendingCommand @ 0x1C0046E10 (VidSchiCompleteAllPendingCommand.c)
 *     VidSchSwitchFromContext @ 0x1C0086300 (VidSchSwitchFromContext.c)
 *     VidSchWaitForCompletionEvent @ 0x1C0087E2C (VidSchWaitForCompletionEvent.c)
 *     VidSchSwitchFromDevice @ 0x1C0087FD0 (VidSchSwitchFromDevice.c)
 *     VidSchiSubmitRenderVirtualCommand @ 0x1C00AD180 (VidSchiSubmitRenderVirtualCommand.c)
 *     VidSchiWaitForSchedulerEvents @ 0x1C00AE030 (VidSchiWaitForSchedulerEvents.c)
 *     VidSchiCheckHwProgress @ 0x1C00AE3E0 (VidSchiCheckHwProgress.c)
 *     VidSchiDrainFlipQueue @ 0x1C00B55E0 (VidSchiDrainFlipQueue.c)
 *     VidSchiRun_PriorityTable @ 0x1C00B7870 (VidSchiRun_PriorityTable.c)
 *     VidSchiPreemptEngineNodes @ 0x1C01060D0 (VidSchiPreemptEngineNodes.c)
 *     VidSchiPrepareToResetEngine @ 0x1C010621C (VidSchiPrepareToResetEngine.c)
 *     VidSchiResetEngines @ 0x1C0106348 (VidSchiResetEngines.c)
 *     VidSchiSubmitPagingCommand @ 0x1C01064F4 (VidSchiSubmitPagingCommand.c)
 *     VidSchiSubmitQueueCommand @ 0x1C0106878 (VidSchiSubmitQueueCommand.c)
 *     VidSchiSubmitRenderCommand @ 0x1C01069AC (VidSchiSubmitRenderCommand.c)
 *     VidSchFlushAdapter @ 0x1C01070F0 (VidSchFlushAdapter.c)
 *     VidSchSubmitPagingCommand @ 0x1C0108678 (VidSchSubmitPagingCommand.c)
 * Callees:
 *     <none>
 */

bool __fastcall VidSchIsTDRPending(__int64 a1)
{
  return *(_DWORD *)(a1 + 3012) != 0;
}
