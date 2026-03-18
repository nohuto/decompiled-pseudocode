/*
 * XREFs of PopNotifyCallbacksPreSleep @ 0x14098BA7C
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140AA90F0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     ExNotifyCallback @ 0x14033BF40 (ExNotifyCallback.c)
 *     PopDiagTraceEventNoPayload @ 0x140367640 (PopDiagTraceEventNoPayload.c)
 *     PopCheckpointSystemSleep @ 0x140AAA4E8 (PopCheckpointSystemSleep.c)
 */

__int64 PopNotifyCallbacksPreSleep()
{
  PopCheckpointSystemSleep(8LL);
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_PRESLEEP_CALLBACKS_START);
  ExNotifyCallback(ExCbPowerState, (PVOID)3, 0LL);
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_PRESLEEP_CALLBACKS_STOP);
  return PopCheckpointSystemSleep(9LL);
}
