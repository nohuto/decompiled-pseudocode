/*
 * XREFs of PopEnforceResiliencyScenarios @ 0x140994238
 * Callers:
 *     NtPowerInformation @ 0x140783F20 (NtPowerInformation.c)
 *     PopTransitionSystemPowerStateEx @ 0x140AA90F0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PpmReleaseLock @ 0x14032C280 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x14032C2D0 (PpmAcquireLock.c)
 *     PoFxSendSystemLatencyUpdate @ 0x14032C330 (PoFxSendSystemLatencyUpdate.c)
 *     PopEnsureCoalescingWorkerWillRun @ 0x14058DA00 (PopEnsureCoalescingWorkerWillRun.c)
 *     PopEnforceDeepSleep @ 0x140994184 (PopEnforceDeepSleep.c)
 */

void __fastcall PopEnforceResiliencyScenarios(int *a1)
{
  int v2; // ecx

  PopEnforceDeepSleep();
  PpmAcquireLock(&PopFxSystemLatencyLock);
  PoFxSendSystemLatencyUpdate();
  PpmReleaseLock((__int64 *)&PopFxSystemLatencyLock);
  v2 = *a1;
  if ( *a1 )
  {
    if ( PopCurrentCoalescingSpindownTimeout )
      return;
    PopCoalescingState |= 2u;
    PopCoalescingEnforced = 1;
    PopEnforcedCoalescingSpindownTimeout = v2;
    goto LABEL_7;
  }
  if ( PopCurrentCoalescingSpindownTimeout && PopCoalescingEnforced )
  {
    PopCoalescingState &= ~2u;
    PopEnforcedCoalescingSpindownTimeout = 0;
    PopCoalescingEnforced = 0;
LABEL_7:
    PopEnsureCoalescingWorkerWillRun();
  }
}
