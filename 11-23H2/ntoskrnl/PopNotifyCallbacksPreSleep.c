/*
 * XREFs of PopNotifyCallbacksPreSleep @ 0x14098BC7C
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140AA8F60 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     ExNotifyCallback @ 0x14033C1D0 (ExNotifyCallback.c)
 *     PopDiagTraceEventNoPayload @ 0x1403677E0 (PopDiagTraceEventNoPayload.c)
 *     PopCheckpointSystemSleep @ 0x140AAA358 (PopCheckpointSystemSleep.c)
 */

__int64 PopNotifyCallbacksPreSleep()
{
  PopCheckpointSystemSleep(8LL);
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_PRESLEEP_CALLBACKS_START);
  ExNotifyCallback(ExCbPowerState, (PVOID)3, 0LL);
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_PRESLEEP_CALLBACKS_STOP);
  return PopCheckpointSystemSleep(9LL);
}
