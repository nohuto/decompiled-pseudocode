/*
 * XREFs of KsepDebugPrint @ 0x140580D64
 * Callers:
 *     KseKPSOHookDriverTargeted @ 0x140582580 (KseKPSOHookDriverTargeted.c)
 *     KseAddHardwareId @ 0x140693960 (KseAddHardwareId.c)
 *     KsepGetShimCallbacksForDriver @ 0x140693B60 (KsepGetShimCallbacksForDriver.c)
 *     KseShimDriverIoCallbacks @ 0x140693D74 (KseShimDriverIoCallbacks.c)
 *     KsepGetShimsForDriver @ 0x140694008 (KsepGetShimsForDriver.c)
 *     KsepEngineGetShimsFromRegistry @ 0x1406945C4 (KsepEngineGetShimsFromRegistry.c)
 *     KseDriverLoadImage @ 0x140694730 (KseDriverLoadImage.c)
 *     KsepSdbMapToMemory @ 0x140694E7C (KsepSdbMapToMemory.c)
 *     KseDriverUnloadImage @ 0x140697128 (KseDriverUnloadImage.c)
 *     KseQueryDeviceData @ 0x14080A580 (KseQueryDeviceData.c)
 *     KsepShimDatabaseTime @ 0x14080A84C (KsepShimDatabaseTime.c)
 *     KseRegisterShimEx @ 0x14080ACB0 (KseRegisterShimEx.c)
 *     KsepResolveApplicableShimsForDriver @ 0x14085BCB0 (KsepResolveApplicableShimsForDriver.c)
 *     KsepApplyShimsToDriver @ 0x14085E728 (KsepApplyShimsToDriver.c)
 *     KsepSdbBootInitialize @ 0x140861F18 (KsepSdbBootInitialize.c)
 *     KseUnregisterShim @ 0x140977150 (KseUnregisterShim.c)
 *     KsepDeletePatchSdb @ 0x1409775A4 (KsepDeletePatchSdb.c)
 *     KseVersionLieInitialize @ 0x140B3970C (KseVersionLieInitialize.c)
 *     KseInitialize @ 0x140B4CCCC (KseInitialize.c)
 *     KsepEngineReadFlags @ 0x140B64DDC (KsepEngineReadFlags.c)
 *     KsepMatchInitMachineInfo @ 0x140B64EEC (KsepMatchInitMachineInfo.c)
 *     KsepMatchInitBiosInfo @ 0x140B6519C (KsepMatchInitBiosInfo.c)
 *     KseShimDatabaseBootInitialize @ 0x140B74000 (KseShimDatabaseBootInitialize.c)
 *     KseDriverScopeInitialize @ 0x140B761B8 (KseDriverScopeInitialize.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x14032A5D0 (vDbgPrintExWithPrefixInternal.c)
 */

__int64 KsepDebugPrint(__int64 a1, const char *a2, ...)
{
  va_list va; // [rsp+60h] [rbp+18h] BYREF

  va_start(va, a2);
  return vDbgPrintExWithPrefixInternal(&Src, 0x65u, 0, a2, va, 1);
}
