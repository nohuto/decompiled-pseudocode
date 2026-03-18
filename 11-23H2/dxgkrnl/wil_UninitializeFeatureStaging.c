/*
 * XREFs of wil_UninitializeFeatureStaging @ 0x1C01673F4
 * Callers:
 *     DxgkUnload @ 0x1C030A890 (DxgkUnload.c)
 *     DriverEntry @ 0x1C03DEE7C (DriverEntry.c)
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
