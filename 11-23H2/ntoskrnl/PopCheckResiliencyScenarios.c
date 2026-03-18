/*
 * XREFs of PopCheckResiliencyScenarios @ 0x140700E80
 * Callers:
 *     PopCoalescingSetActiveState @ 0x14058D8EC (PopCoalescingSetActiveState.c)
 *     PopPowerRequestCallbackExecutionRequired @ 0x1407A66D0 (PopPowerRequestCallbackExecutionRequired.c)
 *     PopDeepSleepPowerSettingCallback @ 0x140863880 (PopDeepSleepPowerSettingCallback.c)
 *     PopCoalescingPowerSettingCallback @ 0x140863CE0 (PopCoalescingPowerSettingCallback.c)
 *     PopUpdateConsoleDisplayState @ 0x140873894 (PopUpdateConsoleDisplayState.c)
 *     PdcPoResiliencyClient @ 0x140997AF0 (PdcPoResiliencyClient.c)
 *     PopPdcIdleResiliencyCallback @ 0x14099807C (PopPdcIdleResiliencyCallback.c)
 *     PopTransitionSystemPowerStateEx @ 0x140AA90F0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PopDeepSleepEnabled @ 0x14028E748 (PopDeepSleepEnabled.c)
 *     PopDeepSleepClearDisengageReason @ 0x14028E75C (PopDeepSleepClearDisengageReason.c)
 *     PopDeepSleepSetDisengageReason @ 0x14028E848 (PopDeepSleepSetDisengageReason.c)
 *     PpmReleaseLock @ 0x14032C280 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x14032C2D0 (PpmAcquireLock.c)
 *     PoFxSendSystemLatencyUpdate @ 0x14032C330 (PoFxSendSystemLatencyUpdate.c)
 *     PpmGetDeepSleepPlatformStateIndex @ 0x1405841DC (PpmGetDeepSleepPlatformStateIndex.c)
 *     PopEnsureCoalescingWorkerWillRun @ 0x14058DA00 (PopEnsureCoalescingWorkerWillRun.c)
 */

void PopCheckResiliencyScenarios()
{
  char v0; // si
  char v1; // bl
  char v2; // di
  bool v3; // al
  char v4; // cl

  v0 = PopCurrentCoalescingSpindownTimeout != 0;
  if ( !PopDeepSleepEnforced && !PopCoalescingEnforced )
  {
    v1 = 1;
    if ( byte_140C3DA34 )
    {
      v2 = PopPdcIdleResiliency;
      if ( PopDeepSleepEnabled() )
      {
        if ( v2 )
          PpmDripsStateIndex = PpmGetDeepSleepPlatformStateIndex();
        else
          PpmDripsStateIndex = -1;
      }
    }
    else
    {
      v2 = 0;
    }
    v3 = PopDeepSleepEnabled();
    if ( !v4 || !PopDppeCoalescingSpindownTimeout )
      v1 = 0;
    if ( v2 && v3 )
    {
      PopDeepSleepClearDisengageReason(0);
    }
    else
    {
      PopDeepSleepSetDisengageReason(0);
      if ( byte_140C3DA34 && !PopDeepSleepEnabled() )
      {
        PpmAcquireLock(&PopFxSystemLatencyLock);
        if ( PopIdleResiliencyIsEngagedWithoutDeepSleep != v2 )
        {
          PopIdleResiliencyIsEngagedWithoutDeepSleep = v2;
          PoFxSendSystemLatencyUpdate();
        }
        PpmReleaseLock((__int64 *)&PopFxSystemLatencyLock);
      }
    }
    if ( v1 != v0 )
    {
      PopCoalescingState = (2 * v1) | PopCoalescingState & 0xFD;
      PopEnsureCoalescingWorkerWillRun();
    }
  }
}
