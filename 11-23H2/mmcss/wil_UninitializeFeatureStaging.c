/*
 * XREFs of wil_UninitializeFeatureStaging @ 0x1C000B008
 * Callers:
 *     CiDriverUnload @ 0x1C000D870 (CiDriverUnload.c)
 *     DriverEntry @ 0x1C000F200 (DriverEntry.c)
 * Callees:
 *     wil_details_UnregisterFeatureStagingChangeNotification @ 0x1C000B024 (wil_details_UnregisterFeatureStagingChangeNotification.c)
 */

__int64 wil_UninitializeFeatureStaging()
{
  __int64 result; // rax

  result = wil_details_UnregisterFeatureStagingChangeNotification();
  g_wil_details_isFeatureStagingInitialized = 0;
  return result;
}
