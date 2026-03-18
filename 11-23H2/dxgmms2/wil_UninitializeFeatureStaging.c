/*
 * XREFs of wil_UninitializeFeatureStaging @ 0x1C0085008
 * Callers:
 *     DriverUnload @ 0x1C002CE80 (DriverUnload.c)
 *     DriverEntry @ 0x1C010D1F8 (DriverEntry.c)
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
