/*
 * XREFs of wil_UninitializeFeatureStaging @ 0x1C006D008
 * Callers:
 *     DriverEntry @ 0x1C0074360 (DriverEntry.c)
 *     DriverCleanup @ 0x1C0079890 (DriverCleanup.c)
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
