/*
 * XREFs of KsepDebugPrint @ 0x1405811C4
 * Callers:
 *     KseKPSOHookDriverTargeted @ 0x1405829E0 (KseKPSOHookDriverTargeted.c)
 *     KseAddHardwareId @ 0x140693960 (KseAddHardwareId.c)
 *     KsepGetShimCallbacksForDriver @ 0x140693B60 (KsepGetShimCallbacksForDriver.c)
 *     KseShimDriverIoCallbacks @ 0x140693D74 (KseShimDriverIoCallbacks.c)
 *     KsepGetShimsForDriver @ 0x140694008 (KsepGetShimsForDriver.c)
 *     KsepEngineGetShimsFromRegistry @ 0x1406945C4 (KsepEngineGetShimsFromRegistry.c)
 *     KseDriverLoadImage @ 0x140694730 (KseDriverLoadImage.c)
 *     KsepSdbMapToMemory @ 0x140694E7C (KsepSdbMapToMemory.c)
 *     KseDriverUnloadImage @ 0x140697128 (KseDriverUnloadImage.c)
 *     KseQueryDeviceData @ 0x1408082D0 (KseQueryDeviceData.c)
 *     KsepShimDatabaseTime @ 0x14080859C (KsepShimDatabaseTime.c)
 *     KseRegisterShimEx @ 0x140808A00 (KseRegisterShimEx.c)
 *     KsepResolveApplicableShimsForDriver @ 0x14085B9FC (KsepResolveApplicableShimsForDriver.c)
 *     KsepApplyShimsToDriver @ 0x14085E804 (KsepApplyShimsToDriver.c)
 *     KsepSdbBootInitialize @ 0x140862088 (KsepSdbBootInitialize.c)
 *     KseUnregisterShim @ 0x1409772A0 (KseUnregisterShim.c)
 *     KsepDeletePatchSdb @ 0x1409776F4 (KsepDeletePatchSdb.c)
 *     KseVersionLieInitialize @ 0x140B36014 (KseVersionLieInitialize.c)
 *     KseInitialize @ 0x140B495CC (KseInitialize.c)
 *     KsepEngineReadFlags @ 0x140B6126C (KsepEngineReadFlags.c)
 *     KsepMatchInitMachineInfo @ 0x140B6137C (KsepMatchInitMachineInfo.c)
 *     KsepMatchInitBiosInfo @ 0x140B6162C (KsepMatchInitBiosInfo.c)
 *     KseShimDatabaseBootInitialize @ 0x140B73254 (KseShimDatabaseBootInitialize.c)
 *     KseDriverScopeInitialize @ 0x140B75328 (KseDriverScopeInitialize.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x14032AA40 (vDbgPrintExWithPrefixInternal.c)
 */

__int64 KsepDebugPrint(__int64 a1, const char *a2, ...)
{
  va_list va; // [rsp+60h] [rbp+18h] BYREF

  va_start(va, a2);
  return vDbgPrintExWithPrefixInternal(&Src, 0x65u, 0, a2, va, 1);
}
