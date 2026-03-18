/*
 * XREFs of wil_UninitializeFeatureStaging @ 0x1C00BD008
 * Callers:
 *     DriverEntry @ 0x1C0032660 (DriverEntry.c)
 *     DriverUnload @ 0x1C0052C70 (DriverUnload.c)
 * Callees:
 *     <none>
 */

__int64 wil_UninitializeFeatureStaging()
{
  __int64 result; // rax

  if ( wil_details_featureChangeNotification )
  {
    result = RtlUnregisterFeatureConfigurationChangeNotification();
    wil_details_featureChangeNotification = 0LL;
  }
  return result;
}
