/*
 * XREFs of KsepLogInfo @ 0x1403C09C8
 * Callers:
 *     KseDriverUnloadImage @ 0x1406EAFE4 (KseDriverUnloadImage.c)
 *     KsepGetShimsForDriver @ 0x14075C7BC (KsepGetShimsForDriver.c)
 *     KseDriverLoadImage @ 0x14075CCC8 (KseDriverLoadImage.c)
 *     KsepGetShimCallbacksForDriver @ 0x14075EC70 (KsepGetShimCallbacksForDriver.c)
 *     KseShimDriverIoCallbacks @ 0x14075ECF4 (KseShimDriverIoCallbacks.c)
 *     KseQueryDeviceData @ 0x1407EC640 (KseQueryDeviceData.c)
 *     KseRegisterShimEx @ 0x140825A70 (KseRegisterShimEx.c)
 *     KseUnregisterShim @ 0x140963EA0 (KseUnregisterShim.c)
 *     KsepApplyShimsToDriver @ 0x140964230 (KsepApplyShimsToDriver.c)
 *     KsepResolveApplicableShimsForDriver @ 0x1409646B4 (KsepResolveApplicableShimsForDriver.c)
 *     KseInitialize @ 0x140AFFF64 (KseInitialize.c)
 *     KsepMatchInitBiosInfo @ 0x140B001A8 (KsepMatchInitBiosInfo.c)
 *     KsepEngineReadFlags @ 0x140B01140 (KsepEngineReadFlags.c)
 *     KseDriverScopeInitialize @ 0x140B01600 (KseDriverScopeInitialize.c)
 * Callees:
 *     KsepLogEtwMessage @ 0x140368CB8 (KsepLogEtwMessage.c)
 */

void KsepLogInfo(int a1, const char *a2, ...)
{
  va_list va; // [rsp+50h] [rbp+18h] BYREF

  va_start(va, a2);
  KsepLogEtwMessage(a1, 2, a2, va);
}
