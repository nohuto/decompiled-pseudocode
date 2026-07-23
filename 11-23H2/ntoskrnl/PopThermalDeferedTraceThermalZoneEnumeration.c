/*
 * XREFs of PopThermalDeferedTraceThermalZoneEnumeration @ 0x1403A1AC8
 * Callers:
 *     PopDiagInitialize @ 0x140B4F1E0 (PopDiagInitialize.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140230E80 (ExAcquirePushLockSharedEx.c)
 *     PopReleaseRwLock @ 0x14032C710 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C874 (PopAcquireRwLockExclusive.c)
 *     PopDiagTraceThermalZoneEnumeration @ 0x1403A1B5C (PopDiagTraceThermalZoneEnumeration.c)
 */

void PopThermalDeferedTraceThermalZoneEnumeration()
{
  struct _KTHREAD *CurrentThread; // rax
  PVOID *i; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&PopPolicyDeviceLock, 0LL);
  for ( i = (PVOID *)PopThermal; i != &PopThermal; i = (PVOID *)*i )
  {
    PopAcquireRwLockExclusive((ULONG_PTR)(i + 54));
    if ( (*((_BYTE *)i + 65) & 0x12) == 2 )
      PopDiagTraceThermalZoneEnumeration(i);
    PopReleaseRwLock((__int64 *)i + 54);
  }
  PopReleaseRwLock((__int64 *)&PopPolicyDeviceLock);
}
