/*
 * XREFs of PopThermalSxEntry @ 0x140590138
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140AA8F60 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140230E80 (ExAcquirePushLockSharedEx.c)
 *     PopReleaseRwLock @ 0x14032C710 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C874 (PopAcquireRwLockExclusive.c)
 *     PopCoolingSxTransition @ 0x140587000 (PopCoolingSxTransition.c)
 *     PopThermalStandbyEndTracking @ 0x140590088 (PopThermalStandbyEndTracking.c)
 *     PopTraceThermalZoneActiveActivity @ 0x14059623C (PopTraceThermalZoneActiveActivity.c)
 *     PopTraceThermalZonePassiveHistogram @ 0x140596410 (PopTraceThermalZonePassiveHistogram.c)
 *     PopThermalUpdateActiveTimeTracking @ 0x140848390 (PopThermalUpdateActiveTimeTracking.c)
 *     PopThermalUpdatePassiveTimeTracking @ 0x14098B1C0 (PopThermalUpdatePassiveTimeTracking.c)
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
    byte_140C3C750 = 0;
    PopReleaseRwLock(&PopThermalStateTransitionContext);
  }
}
