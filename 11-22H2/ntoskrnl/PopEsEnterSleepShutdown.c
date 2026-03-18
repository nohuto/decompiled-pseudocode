/*
 * XREFs of PopEsEnterSleepShutdown @ 0x1409983A8
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140AA91B0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14032C2A0 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C404 (PopAcquireRwLockExclusive.c)
 *     PopCurrentPowerState @ 0x1407A7258 (PopCurrentPowerState.c)
 *     PopEsSnapTelemetry @ 0x140998548 (PopEsSnapTelemetry.c)
 */

void PopEsEnterSleepShutdown()
{
  __int64 v0; // rdx
  _OWORD v1[2]; // [rsp+20h] [rbp-28h] BYREF

  memset(v1, 0, sizeof(v1));
  PopCurrentPowerState(v1);
  PopAcquireRwLockExclusive((ULONG_PTR)&PopEsLock);
  PopEsSnapTelemetry(v1, v0);
  PopEsLastStateChangeTimeStamp = 0LL;
  PopReleaseRwLock(&PopEsLock);
}
