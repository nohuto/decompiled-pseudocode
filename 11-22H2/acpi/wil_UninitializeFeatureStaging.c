/*
 * XREFs of wil_UninitializeFeatureStaging @ 0x1C007A300
 * Callers:
 *     ACPIUnload @ 0x1C0024810 (ACPIUnload.c)
 * Callees:
 *     <none>
 */

__int64 wil_UninitializeFeatureStaging()
{
  __int64 result; // rax

  if ( g_wil_details_featureChangeNotification )
  {
    result = RtlUnregisterFeatureConfigurationChangeNotification();
    g_wil_details_featureChangeNotification = 0LL;
  }
  g_wil_details_isFeatureStagingInitialized = 0;
  return result;
}
