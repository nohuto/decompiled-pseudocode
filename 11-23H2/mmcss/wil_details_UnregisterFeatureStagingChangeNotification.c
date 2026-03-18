/*
 * XREFs of wil_details_UnregisterFeatureStagingChangeNotification @ 0x1C000B024
 * Callers:
 *     wil_UninitializeFeatureStaging @ 0x1C000B008 (wil_UninitializeFeatureStaging.c)
 * Callees:
 *     <none>
 */

__int64 wil_details_UnregisterFeatureStagingChangeNotification()
{
  __int64 result; // rax

  if ( g_wil_details_featureChangeNotification )
  {
    result = RtlUnregisterFeatureConfigurationChangeNotification();
    g_wil_details_featureChangeNotification = 0LL;
  }
  return result;
}
