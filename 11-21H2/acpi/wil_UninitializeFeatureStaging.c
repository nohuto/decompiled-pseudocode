/*
 * XREFs of wil_UninitializeFeatureStaging @ 0x1C008E354
 * Callers:
 *     ACPIUnload @ 0x1C00524C0 (ACPIUnload.c)
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
