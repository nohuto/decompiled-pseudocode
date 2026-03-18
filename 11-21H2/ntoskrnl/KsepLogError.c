/*
 * XREFs of KsepLogError @ 0x140368C88
 * Callers:
 *     KseKPSOHookDriverTargeted @ 0x14057F1F0 (KseKPSOHookDriverTargeted.c)
 *     KsepEngineGetShimsFromRegistry @ 0x14075CC14 (KsepEngineGetShimsFromRegistry.c)
 *     KsepGetShimCallbacksForDriver @ 0x14075EC70 (KsepGetShimCallbacksForDriver.c)
 *     KseAddHardwareId @ 0x1407EC8C4 (KseAddHardwareId.c)
 *     KsepShimDatabaseTime @ 0x1407ECB78 (KsepShimDatabaseTime.c)
 *     KsepSdbMapToMemory @ 0x1407ECCD0 (KsepSdbMapToMemory.c)
 *     KseRegisterShimEx @ 0x140825A70 (KseRegisterShimEx.c)
 *     KsepSdbBootInitialize @ 0x1408277FC (KsepSdbBootInitialize.c)
 *     KseUnregisterShim @ 0x140963EA0 (KseUnregisterShim.c)
 *     KsepApplyShimsToDriver @ 0x140964230 (KsepApplyShimsToDriver.c)
 *     KsepResolveApplicableShimsForDriver @ 0x1409646B4 (KsepResolveApplicableShimsForDriver.c)
 *     KsepDeletePatchSdb @ 0x140964CB8 (KsepDeletePatchSdb.c)
 *     KseInitialize @ 0x140AFFF64 (KseInitialize.c)
 *     KseVersionLieInitialize @ 0x140B003F8 (KseVersionLieInitialize.c)
 *     KsepEngineReadFlags @ 0x140B01140 (KsepEngineReadFlags.c)
 *     KsepMatchInitMachineInfo @ 0x140B01388 (KsepMatchInitMachineInfo.c)
 *     KseShimDatabaseBootInitialize @ 0x140B01670 (KseShimDatabaseBootInitialize.c)
 * Callees:
 *     KsepLogEtwMessage @ 0x140368CB8 (KsepLogEtwMessage.c)
 */

__int64 KsepLogError(__int64 a1, __int64 a2, ...)
{
  va_list va; // [rsp+50h] [rbp+18h] BYREF

  va_start(va, a2);
  return KsepLogEtwMessage(a1, 0LL, a2, (__int64 *)va);
}
