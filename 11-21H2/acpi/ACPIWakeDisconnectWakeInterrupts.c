/*
 * XREFs of ACPIWakeDisconnectWakeInterrupts @ 0x1C002FABC
 * Callers:
 *     ACPIFilterIrpRemoveDevice @ 0x1C002CDC0 (ACPIFilterIrpRemoveDevice.c)
 *     ACPIBusIrpRemoveDevice @ 0x1C004C350 (ACPIBusIrpRemoveDevice.c)
 *     ACPIBusIrpSurpriseRemoval @ 0x1C004C940 (ACPIBusIrpSurpriseRemoval.c)
 *     ACPIFilterIrpSurpriseRemoval @ 0x1C00AED70 (ACPIFilterIrpSurpriseRemoval.c)
 * Callees:
 *     ACPIWakeRemoveDevicesAndUpdate @ 0x1C001FF34 (ACPIWakeRemoveDevicesAndUpdate.c)
 *     ACPIDereferenceWaitWakePowerRequest @ 0x1C00623F0 (ACPIDereferenceWaitWakePowerRequest.c)
 */

__int64 __fastcall ACPIWakeDisconnectWakeInterrupts(__int64 a1)
{
  PVOID *v2; // rbx
  PVOID *v3; // rcx
  PVOID Entry[3]; // [rsp+20h] [rbp-18h] BYREF
  KIRQL Irql; // [rsp+48h] [rbp+10h] BYREF

  Irql = 0;
  Entry[1] = Entry;
  Entry[0] = Entry;
  IoAcquireCancelSpinLock(&Irql);
  KeAcquireSpinLockAtDpcLevel(&AcpiPowerLock);
  ACPIWakeRemoveDevicesAndUpdate(a1, (__int64)Entry);
  KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
  IoReleaseCancelSpinLock(Irql);
  v2 = (PVOID *)Entry[0];
  while ( v2 != Entry )
  {
    v3 = v2;
    v2 = (PVOID *)*v2;
    ACPIDereferenceWaitWakePowerRequest(v3);
  }
  return 0LL;
}
