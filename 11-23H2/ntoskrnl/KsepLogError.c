/*
 * XREFs of KsepLogError @ 0x14020A5AC
 * Callers:
 *     KseKPSOHookDriverTargeted @ 0x1405829E0 (KseKPSOHookDriverTargeted.c)
 *     KseAddHardwareId @ 0x140693960 (KseAddHardwareId.c)
 *     KsepGetShimCallbacksForDriver @ 0x140693B60 (KsepGetShimCallbacksForDriver.c)
 *     KsepEngineGetShimsFromRegistry @ 0x1406945C4 (KsepEngineGetShimsFromRegistry.c)
 *     KsepSdbMapToMemory @ 0x140694E7C (KsepSdbMapToMemory.c)
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
 *     KseShimDatabaseBootInitialize @ 0x140B73254 (KseShimDatabaseBootInitialize.c)
 * Callees:
 *     KsepLogEtwMessage @ 0x14020A5DC (KsepLogEtwMessage.c)
 */

__int64 KsepLogError(__int64 a1, __int64 a2, ...)
{
  va_list va; // [rsp+50h] [rbp+18h] BYREF

  va_start(va, a2);
  return KsepLogEtwMessage(a1, 0LL, a2, (__int64 *)va);
}
