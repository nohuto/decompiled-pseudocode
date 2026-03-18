/*
 * XREFs of PopThermalDeferedTraceThermalZoneEnumeration @ 0x140373B44
 * Callers:
 *     PopDiagInitialize @ 0x140B38B18 (PopDiagInitialize.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140230D90 (ExAcquirePushLockSharedEx.c)
 *     PopReleaseRwLock @ 0x14032C2A0 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C404 (PopAcquireRwLockExclusive.c)
 *     PopDiagTraceThermalZoneEnumeration @ 0x1403736A4 (PopDiagTraceThermalZoneEnumeration.c)
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
      PopDiagTraceThermalZoneEnumeration((__int64)i);
    PopReleaseRwLock((__int64 *)i + 54);
  }
  PopReleaseRwLock((__int64 *)&PopPolicyDeviceLock);
}
