/*
 * XREFs of RaidAdapterCancelPauseTimer @ 0x1C0034610
 * Callers:
 *     RaidAdapterDeferredRoutine @ 0x1C0014550 (RaidAdapterDeferredRoutine.c)
 *     RaidAdapterDeleteAsyncCallbacks @ 0x1C0034EEC (RaidAdapterDeleteAsyncCallbacks.c)
 * Callees:
 *     RaidResumeAdapterQueue @ 0x1C00190A0 (RaidResumeAdapterQueue.c)
 *     RaidAdapterRestartQueues @ 0x1C001921C (RaidAdapterRestartQueues.c)
 */

BOOLEAN __fastcall RaidAdapterCancelPauseTimer(__int64 a1, struct _KTIMER *a2)
{
  BOOLEAN v3; // bl

  v3 = KeCancelTimer(a2);
  if ( v3 && !(unsigned int)RaidResumeAdapterQueue(a1) )
    RaidAdapterRestartQueues(a1, 0LL);
  return v3;
}
