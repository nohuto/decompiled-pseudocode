/*
 * XREFs of PopThermalSxEntry @ 0x14058FC48
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140AA90F0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140230D90 (ExAcquirePushLockSharedEx.c)
 *     PopReleaseRwLock @ 0x14032C480 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C5E4 (PopAcquireRwLockExclusive.c)
 *     PopCoolingSxTransition @ 0x140586B10 (PopCoolingSxTransition.c)
 *     PopThermalStandbyEndTracking @ 0x14058FB98 (PopThermalStandbyEndTracking.c)
 *     PopTraceThermalZoneActiveActivity @ 0x140595D4C (PopTraceThermalZoneActiveActivity.c)
 *     PopTraceThermalZonePassiveHistogram @ 0x140595F20 (PopTraceThermalZonePassiveHistogram.c)
 *     PopThermalUpdateActiveTimeTracking @ 0x140848090 (PopThermalUpdateActiveTimeTracking.c)
 *     PopThermalUpdatePassiveTimeTracking @ 0x14098AFC0 (PopThermalUpdatePassiveTimeTracking.c)
 */

void PopThermalSxEntry()
{
  __int64 v0; // rdx
  __int64 v1; // r8
  struct _KTHREAD *CurrentThread; // rax
  PVOID *i; // rbx
  __int64 v4; // rdx

  if ( !_InterlockedExchange(&PopThermalStateTransitionInProgress, 1) )
  {
    PopAcquireRwLockExclusive((ULONG_PTR)&PopSystemThermalInfo);
    PopThermalStandbyEndTracking(4LL, v0, v1);
    PopReleaseRwLock(&PopSystemThermalInfo);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)&PopPolicyDeviceLock, 0LL);
    for ( i = (PVOID *)PopThermal; i != &PopThermal; i = (PVOID *)*i )
    {
      PopAcquireRwLockExclusive((ULONG_PTR)(i + 54));
      if ( *((_BYTE *)i + 145) )
      {
        LOBYTE(v4) = *((_BYTE *)i + 80);
        PopThermalUpdatePassiveTimeTracking(i + 63, v4);
        PopTraceThermalZonePassiveHistogram(i);
      }
      if ( *((_BYTE *)i + 505) )
      {
        LOBYTE(v4) = *((_BYTE *)i + 69);
        PopThermalUpdateActiveTimeTracking(i + 63, v4);
        PopTraceThermalZoneActiveActivity(i);
      }
      *((_BYTE *)i + 504) = 1;
      PopReleaseRwLock((__int64 *)i + 54);
    }
    PopReleaseRwLock((__int64 *)&PopPolicyDeviceLock);
    PopCoolingSxTransition(1);
    PopAcquireRwLockExclusive((ULONG_PTR)&PopThermalStateTransitionContext);
    byte_140C3C8D0 = 0;
    PopReleaseRwLock(&PopThermalStateTransitionContext);
  }
}
