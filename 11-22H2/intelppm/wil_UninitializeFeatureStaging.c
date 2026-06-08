/*
 * XREFs of wil_UninitializeFeatureStaging @ 0x1C00250AC
 * Callers:
 *     EvtDriverUnload @ 0x1C00370D0 (EvtDriverUnload.c)
 *     DriverEntry @ 0x1C00482F8 (DriverEntry.c)
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
