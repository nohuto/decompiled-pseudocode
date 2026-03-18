/*
 * XREFs of ?wil_details_FeatureDescriptors_SkipPadding@@YAPEBUwil_details_FeatureDescriptor@@_K@Z @ 0x1C0025ED4
 * Callers:
 *     ?wil_details_RegisterFeatureStagingChangeNotification@@YAJPEA_K@Z @ 0x1C01F47F0 (-wil_details_RegisterFeatureStagingChangeNotification@@YAJPEA_K@Z.c)
 *     ?wil_details_OnFeatureConfigurationChange@@YAXPEAX@Z @ 0x1C0301930 (-wil_details_OnFeatureConfigurationChange@@YAXPEAX@Z.c)
 *     ?wil_details_UpdateFeatureConfiguredStates@@YAXXZ @ 0x1C03019D8 (-wil_details_UpdateFeatureConfiguredStates@@YAXXZ.c)
 *     ?wil_InitializeFeatureStaging@@YAJXZ @ 0x1C03C7078 (-wil_InitializeFeatureStaging@@YAJXZ.c)
 *     ?wil_details_PopulateInitialConfiguredFeatureStates@@YAJXZ @ 0x1C03C7148 (-wil_details_PopulateInitialConfiguredFeatureStates@@YAJXZ.c)
 * Callees:
 *     <none>
 */

const struct wil_details_FeatureDescriptor *__fastcall wil_details_FeatureDescriptors_SkipPadding(
        const unsigned __int64 *a1)
{
  while ( a1 < &wil_details_featureDescriptors_a )
  {
    if ( *a1 )
      return (const struct wil_details_FeatureDescriptor *)a1;
    ++a1;
  }
  return 0LL;
}
