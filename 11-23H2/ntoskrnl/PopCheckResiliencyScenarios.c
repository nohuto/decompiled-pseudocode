/*
 * XREFs of PopCheckResiliencyScenarios @ 0x140701090
 * Callers:
 *     PopCoalescingSetActiveState @ 0x14058DDDC (PopCoalescingSetActiveState.c)
 *     PopPowerRequestCallbackExecutionRequired @ 0x1407A68C0 (PopPowerRequestCallbackExecutionRequired.c)
 *     PopDeepSleepPowerSettingCallback @ 0x140863AC0 (PopDeepSleepPowerSettingCallback.c)
 *     PopCoalescingPowerSettingCallback @ 0x140863F20 (PopCoalescingPowerSettingCallback.c)
 *     PopUpdateConsoleDisplayState @ 0x140873AD4 (PopUpdateConsoleDisplayState.c)
 *     PdcPoResiliencyClient @ 0x140997CF0 (PdcPoResiliencyClient.c)
 *     PopPdcIdleResiliencyCallback @ 0x14099827C (PopPdcIdleResiliencyCallback.c)
 *     PopTransitionSystemPowerStateEx @ 0x140AA8F60 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PopDeepSleepEnabled @ 0x14028E9D8 (PopDeepSleepEnabled.c)
 *     PopDeepSleepClearDisengageReason @ 0x14028E9EC (PopDeepSleepClearDisengageReason.c)
 *     PopDeepSleepSetDisengageReason @ 0x14028EAD8 (PopDeepSleepSetDisengageReason.c)
 *     PpmReleaseLock @ 0x14032C510 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x14032C560 (PpmAcquireLock.c)
 *     PoFxSendSystemLatencyUpdate @ 0x14032C5C0 (PoFxSendSystemLatencyUpdate.c)
 *     PpmGetDeepSleepPlatformStateIndex @ 0x1405846CC (PpmGetDeepSleepPlatformStateIndex.c)
 *     PopEnsureCoalescingWorkerWillRun @ 0x14058DEF0 (PopEnsureCoalescingWorkerWillRun.c)
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
    if ( byte_140C3DA14 )
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
      if ( byte_140C3DA14 && !PopDeepSleepEnabled() )
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
