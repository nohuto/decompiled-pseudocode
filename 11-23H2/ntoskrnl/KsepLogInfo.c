/*
 * XREFs of KsepLogInfo @ 0x14037424C
 * Callers:
 *     KsepGetShimCallbacksForDriver @ 0x140693B60 (KsepGetShimCallbacksForDriver.c)
 *     KseShimDriverIoCallbacks @ 0x140693D74 (KseShimDriverIoCallbacks.c)
 *     KsepGetShimsForDriver @ 0x140694008 (KsepGetShimsForDriver.c)
 *     KseDriverLoadImage @ 0x140694730 (KseDriverLoadImage.c)
 *     KseDriverUnloadImage @ 0x140697128 (KseDriverUnloadImage.c)
 *     KseQueryDeviceData @ 0x1408082D0 (KseQueryDeviceData.c)
 *     KseRegisterShimEx @ 0x140808A00 (KseRegisterShimEx.c)
 *     KsepResolveApplicableShimsForDriver @ 0x14085B9FC (KsepResolveApplicableShimsForDriver.c)
 *     KsepApplyShimsToDriver @ 0x14085E804 (KsepApplyShimsToDriver.c)
 *     KseUnregisterShim @ 0x1409772A0 (KseUnregisterShim.c)
 *     KseInitialize @ 0x140B495CC (KseInitialize.c)
 *     KsepEngineReadFlags @ 0x140B6126C (KsepEngineReadFlags.c)
 *     KsepMatchInitBiosInfo @ 0x140B6162C (KsepMatchInitBiosInfo.c)
 *     KseDriverScopeInitialize @ 0x140B75328 (KseDriverScopeInitialize.c)
 * Callees:
 *     KsepLogEtwMessage @ 0x14020A5DC (KsepLogEtwMessage.c)
 */

void KsepLogInfo(int a1, const char *a2, ...)
{
  va_list va; // [rsp+50h] [rbp+18h] BYREF

  va_start(va, a2);
  KsepLogEtwMessage(a1, 2, a2, va);
}
