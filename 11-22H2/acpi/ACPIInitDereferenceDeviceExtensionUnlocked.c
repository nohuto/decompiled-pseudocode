/*
 * XREFs of ACPIInitDereferenceDeviceExtensionUnlocked @ 0x1C002D0E0
 * Callers:
 *     DispatchNotificationWorker @ 0x1C0004DA0 (DispatchNotificationWorker.c)
 *     ACPIDockIntfDereference @ 0x1C00093E0 (ACPIDockIntfDereference.c)
 *     ACPIDockIrpRemoveDevice @ 0x1C0009590 (ACPIDockIrpRemoveDevice.c)
 *     ACPIBuildMissingEjectionRelations @ 0x1C000D9B4 (ACPIBuildMissingEjectionRelations.c)
 *     ACPIDetectFilterDevices @ 0x1C001AA30 (ACPIDetectFilterDevices.c)
 *     ACPIDetectPdoDevices @ 0x1C001AE54 (ACPIDetectPdoDevices.c)
 *     AcpiDeviceResetDereference @ 0x1C0023790 (AcpiDeviceResetDereference.c)
 *     ACPIExtListEnumNext @ 0x1C0026414 (ACPIExtListEnumNext.c)
 *     ACPIFilterIrpRemoveDevice @ 0x1C0028860 (ACPIFilterIrpRemoveDevice.c)
 *     ACPIFilterIrpSetPower @ 0x1C0028B30 (ACPIFilterIrpSetPower.c)
 *     OSNotifyCreateOperationRegionWorker @ 0x1C00329E0 (OSNotifyCreateOperationRegionWorker.c)
 *     ACPIRootIrpRemoveDevice @ 0x1C003D2A0 (ACPIRootIrpRemoveDevice.c)
 *     ACPIInterfaceDereferenceDeviceExtension @ 0x1C0081BE0 (ACPIInterfaceDereferenceDeviceExtension.c)
 *     ACPIPepCleanupPlatformNotificationSupport @ 0x1C008A794 (ACPIPepCleanupPlatformNotificationSupport.c)
 * Callees:
 *     ACPIInitDereferenceDeviceExtensionLocked @ 0x1C002D080 (ACPIInitDereferenceDeviceExtensionLocked.c)
 */

char __fastcall ACPIInitDereferenceDeviceExtensionUnlocked(ULONG_PTR BugCheckParameter4)
{
  KIRQL v2; // di

  v2 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
  KeAcquireSpinLockAtDpcLevel(&AcpiDeviceTreeLock);
  LOBYTE(BugCheckParameter4) = ACPIInitDereferenceDeviceExtensionLocked(BugCheckParameter4);
  KeReleaseSpinLockFromDpcLevel(&AcpiDeviceTreeLock);
  KeReleaseSpinLock(&AcpiPowerLock, v2);
  return BugCheckParameter4;
}
