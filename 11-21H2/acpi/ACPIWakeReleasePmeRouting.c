/*
 * XREFs of ACPIWakeReleasePmeRouting @ 0x1C00636D0
 * Callers:
 *     PcisuppReleasePciInterfaces @ 0x1C00B61A0 (PcisuppReleasePciInterfaces.c)
 * Callees:
 *     <none>
 */

void ACPIWakeReleasePmeRouting()
{
  KIRQL v0; // al
  PVOID v1; // rbx

  v0 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
  v1 = PciPmeInterface;
  PciPmeInterface = 0LL;
  PciPmeInterfaceInstantiated = 0;
  KeReleaseSpinLock(&AcpiPowerLock, v0);
  ExFreePoolWithTag(v1, 0);
}
