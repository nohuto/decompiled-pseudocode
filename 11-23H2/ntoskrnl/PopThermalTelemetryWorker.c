/*
 * XREFs of PopThermalTelemetryWorker @ 0x14058FF90
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140230D90 (ExAcquirePushLockSharedEx.c)
 *     PopReleaseRwLock @ 0x14032C480 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C5E4 (PopAcquireRwLockExclusive.c)
 *     PopCoolingTelemetryWorker @ 0x140586C28 (PopCoolingTelemetryWorker.c)
 *     PopTraceThermalZoneActiveActivity @ 0x140595D4C (PopTraceThermalZoneActiveActivity.c)
 *     PopTraceThermalZonePassiveHistogram @ 0x140595F20 (PopTraceThermalZonePassiveHistogram.c)
 *     PopThermalUpdateActiveTimeTracking @ 0x140848090 (PopThermalUpdateActiveTimeTracking.c)
 *     PopThermalUpdatePassiveTimeTracking @ 0x14098AFC0 (PopThermalUpdatePassiveTimeTracking.c)
 */

void PopThermalTelemetryWorker()
{
  struct _KTHREAD *CurrentThread; // rax
  PVOID *i; // rbx
  __int64 v2; // rdx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&PopPolicyDeviceLock, 0LL);
  for ( i = (PVOID *)PopThermal; i != &PopThermal; i = (PVOID *)*i )
  {
    PopAcquireRwLockExclusive((ULONG_PTR)(i + 54));
    if ( *((_BYTE *)i + 145) )
    {
      LOBYTE(v2) = *((_BYTE *)i + 80);
      PopThermalUpdatePassiveTimeTracking(i + 63, v2);
      PopTraceThermalZonePassiveHistogram(i);
    }
    if ( *((_BYTE *)i + 505) )
    {
      LOBYTE(v2) = *((_BYTE *)i + 69);
      PopThermalUpdateActiveTimeTracking(i + 63, v2);
      PopTraceThermalZoneActiveActivity(i);
    }
    PopReleaseRwLock((__int64 *)i + 54);
  }
  PopReleaseRwLock((__int64 *)&PopPolicyDeviceLock);
  PopCoolingTelemetryWorker();
  _InterlockedExchange(&dword_140C3C7C8, 0);
}
