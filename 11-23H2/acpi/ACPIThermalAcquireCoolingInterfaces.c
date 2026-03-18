/*
 * XREFs of ACPIThermalAcquireCoolingInterfaces @ 0x1C003FAF8
 * Callers:
 *     ACPIInitStartDevice @ 0x1C002DA4C (ACPIInitStartDevice.c)
 *     ACPIProcessorStartDeviceWorker @ 0x1C003A1E0 (ACPIProcessorStartDeviceWorker.c)
 *     ACPIBusIrpCancelRemoveOrStopDevice @ 0x1C007E360 (ACPIBusIrpCancelRemoveOrStopDevice.c)
 *     ACPIFanStartDevice @ 0x1C0085280 (ACPIFanStartDevice.c)
 *     ACPIRootIrpCancelRemoveOrStopDevice @ 0x1C0093C70 (ACPIRootIrpCancelRemoveOrStopDevice.c)
 *     ACPIThermalStartDevice @ 0x1C0095DE0 (ACPIThermalStartDevice.c)
 * Callees:
 *     ACPIThermalAssocaiteConstraint @ 0x1C003FE44 (ACPIThermalAssocaiteConstraint.c)
 *     ACPIThermalQueryCoolingInterfaces @ 0x1C004171C (ACPIThermalQueryCoolingInterfaces.c)
 *     AMLIDereferenceHandleEx @ 0x1C0047B60 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNameSpaceObject @ 0x1C00483D8 (AMLIGetNameSpaceObject.c)
 */

__int64 __fastcall ACPIThermalAcquireCoolingInterfaces(__int64 a1)
{
  KIRQL v2; // al
  __int64 *v3; // rdi
  KIRQL v4; // r14
  __int64 *v5; // rcx

  v2 = KeAcquireSpinLockRaiseToDpc(&AcpiThermalConstraintLock);
  *(_BYTE *)(a1 + 664) = 1;
  v3 = (__int64 *)AcpiThermalUnclaimedConstraintList;
  v4 = v2;
  while ( v3 != &AcpiThermalUnclaimedConstraintList )
  {
    v5 = v3;
    v3 = (__int64 *)*v3;
    AMLIGetNameSpaceObject(v5 + 5);
  }
  KeReleaseSpinLock(&AcpiThermalConstraintLock, v4);
  return 3221225659LL;
}
