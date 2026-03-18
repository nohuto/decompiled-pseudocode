/*
 * XREFs of AMLIGetNameSpaceObject @ 0x1C00483D8
 * Callers:
 *     ACPIInterruptDispatchEventDpc @ 0x1C0003670 (ACPIInterruptDispatchEventDpc.c)
 *     ACPIDockIsDockDevice @ 0x1C0009A34 (ACPIDockIsDockDevice.c)
 *     ACPIBuildDevicePowerNodes @ 0x1C000C5A4 (ACPIBuildDevicePowerNodes.c)
 *     ACPIBuildDeviceResetPowerNode @ 0x1C000CAD0 (ACPIBuildDeviceResetPowerNode.c)
 *     ACPIBuildMissingEjectionRelations @ 0x1C000D9B4 (ACPIBuildMissingEjectionRelations.c)
 *     ACPIBuildWakeEventDeviceContext @ 0x1C00140F0 (ACPIBuildWakeEventDeviceContext.c)
 *     ACPIConvertDependenciesToPnpReservations @ 0x1C00143C8 (ACPIConvertDependenciesToPnpReservations.c)
 *     ACPIVerifyAndCopyFirmwareDependencies @ 0x1C00146C0 (ACPIVerifyAndCopyFirmwareDependencies.c)
 *     AreDependenciesSatisfied @ 0x1C0014914 (AreDependenciesSatisfied.c)
 *     ACPIIsPowerNodeMissingDependencies @ 0x1C0022160 (ACPIIsPowerNodeMissingDependencies.c)
 *     ACPIPowerNodeDiscoverDependencies @ 0x1C0022448 (ACPIPowerNodeDiscoverDependencies.c)
 *     ACPIEcInitOpRegionHandler @ 0x1C00251D0 (ACPIEcInitOpRegionHandler.c)
 *     ACPIGpeBuildEventMasks @ 0x1C002BE64 (ACPIGpeBuildEventMasks.c)
 *     ACPIIoctlEvalPreProcessingV1 @ 0x1C002FE78 (ACPIIoctlEvalPreProcessingV1.c)
 *     ACPIIoctlEvalPreProcessingV1Ex @ 0x1C00301B4 (ACPIIoctlEvalPreProcessingV1Ex.c)
 *     ACPIIoctlEvalPreProcessingV2 @ 0x1C00304F4 (ACPIIoctlEvalPreProcessingV2.c)
 *     ACPIIoctlEvalPreProcessingV2Ex @ 0x1C0030834 (ACPIIoctlEvalPreProcessingV2Ex.c)
 *     ACPIIoctlGetDeviceSpecificData @ 0x1C0030F78 (ACPIIoctlGetDeviceSpecificData.c)
 *     ACPIThermalAcquireCoolingInterfaces @ 0x1C003FAF8 (ACPIThermalAcquireCoolingInterfaces.c)
 *     ACPIThermalActivateConstraint @ 0x1C003FCA0 (ACPIThermalActivateConstraint.c)
 *     ACPIThermalGetSensorDevice @ 0x1C0040BD0 (ACPIThermalGetSensorDevice.c)
 *     LinkNodeCrackPrt @ 0x1C005CEBC (LinkNodeCrackPrt.c)
 *     AcpiGetFullyQualifiedBiosName @ 0x1C0084000 (AcpiGetFullyQualifiedBiosName.c)
 *     ExternalRequestBiosNameDeviceAssociation @ 0x1C00842E4 (ExternalRequestBiosNameDeviceAssociation.c)
 *     RegisterOperationRegionHandler @ 0x1C008BB34 (RegisterOperationRegionHandler.c)
 *     UnRegisterOperationRegionHandler @ 0x1C008BE00 (UnRegisterOperationRegionHandler.c)
 *     ACPIRootInitialize @ 0x1C0093778 (ACPIRootInitialize.c)
 *     NotifyHalWithMachineStatesAndRetrieveInterruptModel @ 0x1C00A7C0C (NotifyHalWithMachineStatesAndRetrieveInterruptModel.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00019D0 (__security_check_cookie.c)
 *     memmove @ 0x1C0001E80 (memmove.c)
 *     AMLIGetNameSpaceObjectNoLock @ 0x1C00484F0 (AMLIGetNameSpaceObjectNoLock.c)
 */

__int64 __fastcall AMLIGetNameSpaceObject(_BYTE *Src, __int64 a2, __int64 a3, unsigned int a4)
{
  size_t v8; // rbx
  _BYTE *Pool2; // rdi
  KIRQL v10; // bl
  unsigned int v11; // esi
  _BYTE P[128]; // [rsp+20h] [rbp-B8h] BYREF

  v8 = -1LL;
  do
    ++v8;
  while ( Src[v8] );
  if ( v8 + 1 >= 0x80 )
  {
    Pool2 = (_BYTE *)ExAllocatePool2(64LL, v8 + 1, 1768973121LL);
    if ( !Pool2 )
      return 3221225626LL;
  }
  else
  {
    Pool2 = P;
  }
  memmove(Pool2, Src, v8);
  Pool2[v8] = 0;
  v10 = ExAcquireSpinLockShared(&ACPINamespaceLock);
  v11 = AMLIGetNameSpaceObjectNoLock(Pool2, a2, a3, a4);
  ExReleaseSpinLockShared(&ACPINamespaceLock, v10);
  if ( P != Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  return v11;
}
