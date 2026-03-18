/*
 * XREFs of AMLIGetParent @ 0x1C0048744
 * Callers:
 *     CmosConfigSpaceHandler @ 0x1C0019B90 (CmosConfigSpaceHandler.c)
 *     ACPIDevicePowerProcessPhase2SystemSubPhase1 @ 0x1C001F7A0 (ACPIDevicePowerProcessPhase2SystemSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase3 @ 0x1C00212D0 (ACPIDevicePowerProcessPhase5SystemSubPhase3.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase4 @ 0x1C0021470 (ACPIDevicePowerProcessPhase5SystemSubPhase4.c)
 *     OSNotifyCreateDevice @ 0x1C0032758 (OSNotifyCreateDevice.c)
 *     OSNotifyCreateOperationRegion @ 0x1C003287C (OSNotifyCreateOperationRegion.c)
 *     OSNotifyCreateProcessor @ 0x1C0032ADC (OSNotifyCreateProcessor.c)
 *     OSNotifyDeviceCheck @ 0x1C0032CA0 (OSNotifyDeviceCheck.c)
 *     GetOpRegionScope @ 0x1C0034B80 (GetOpRegionScope.c)
 *     GetPciAddressWorker @ 0x1C0034E20 (GetPciAddressWorker.c)
 *     IsPciBusAsyncWorker @ 0x1C0035370 (IsPciBusAsyncWorker.c)
 *     IsPciDeviceWorker @ 0x1C00359A0 (IsPciDeviceWorker.c)
 *     PciConfigSpaceHandlerWorker @ 0x1C00360A0 (PciConfigSpaceHandlerWorker.c)
 *     AcpiSetupNativeMethodContext @ 0x1C0037EC0 (AcpiSetupNativeMethodContext.c)
 *     InternalRawAccessOpRegionHandler @ 0x1C0039CE0 (InternalRawAccessOpRegionHandler.c)
 *     ACPIRootIrpQueryPower @ 0x1C003D100 (ACPIRootIrpQueryPower.c)
 *     AMLIIterateParentNext @ 0x1C00488C4 (AMLIIterateParentNext.c)
 *     AcpiArblibAllocateArbiterInstance @ 0x1C007CB74 (AcpiArblibAllocateArbiterInstance.c)
 *     ACPIRootInitialize @ 0x1C0093778 (ACPIRootInitialize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AMLIGetParent(__int64 a1)
{
  KIRQL v2; // al
  __int64 v3; // rbx

  v2 = ExAcquireSpinLockShared(&ACPINamespaceLock);
  v3 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
  if ( v3 )
  {
    dword_1C006F938 = 0;
    v3 += 120LL;
    pszDest = 0;
    if ( (gdwfAMLI & 4) != 0 )
      _InterlockedIncrement((volatile signed __int32 *)(v3 + 8));
  }
  ExReleaseSpinLockShared(&ACPINamespaceLock, v2);
  return v3;
}
