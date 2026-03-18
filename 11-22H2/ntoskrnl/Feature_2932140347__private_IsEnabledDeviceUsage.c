/*
 * XREFs of Feature_2932140347__private_IsEnabledDeviceUsage @ 0x140410994
 * Callers:
 *     PoCaptureReasonContext @ 0x140209BF8 (PoCaptureReasonContext.c)
 *     PoStoreRequester @ 0x14032CD64 (PoStoreRequester.c)
 *     PoDestroyReasonContext @ 0x14032D130 (PoDestroyReasonContext.c)
 *     PopDiagTracePowerRequestCreate @ 0x1407A7E10 (PopDiagTracePowerRequestCreate.c)
 *     PopPowerRequestStatsGetIdForRequest @ 0x1407A8268 (PopPowerRequestStatsGetIdForRequest.c)
 *     PopPowerRequestStatsIsDetailedRequestReason @ 0x1407A84C0 (PopPowerRequestStatsIsDetailedRequestReason.c)
 * Callees:
 *     Feature_2932140347__private_IsEnabledFallback @ 0x1404109CC (Feature_2932140347__private_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_2932140347__private_IsEnabledDeviceUsage()
{
  if ( (Feature_2932140347__private_featureState & 0x10) != 0 )
    return Feature_2932140347__private_featureState & 1;
  else
    return Feature_2932140347__private_IsEnabledFallback((unsigned int)Feature_2932140347__private_featureState, 3LL);
}
