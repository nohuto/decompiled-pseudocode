/*
 * XREFs of wil_details_FeatureDescriptors_SkipPadding @ 0x1403C77F8
 * Callers:
 *     wil_details_OnFeatureConfigurationChange @ 0x1409116D0 (wil_details_OnFeatureConfigurationChange.c)
 *     wil_details_UpdateFeatureConfiguredStates @ 0x140911780 (wil_details_UpdateFeatureConfiguredStates.c)
 *     CmInitSystem0 @ 0x140B131D4 (CmInitSystem0.c)
 *     wil_InitializeFeatureStagingFromBuffers @ 0x140B15550 (wil_InitializeFeatureStagingFromBuffers.c)
 *     wil_details_PopulateInitialConfiguredFeatureStatesFromBuffers @ 0x140B15608 (wil_details_PopulateInitialConfiguredFeatureStatesFromBuffers.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall wil_details_FeatureDescriptors_SkipPadding(__int64 *a1)
{
  while ( a1 < &wil_details_featureDescriptors_z )
  {
    if ( *a1 )
      return a1;
    ++a1;
  }
  return 0LL;
}
