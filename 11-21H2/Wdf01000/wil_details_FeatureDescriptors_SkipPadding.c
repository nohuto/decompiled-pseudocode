/*
 * XREFs of wil_details_FeatureDescriptors_SkipPadding @ 0x1C0036698
 * Callers:
 *     wil_details_EvaluateFeatureDependencies @ 0x1C00BD0AC (wil_details_EvaluateFeatureDependencies.c)
 *     wil_details_RegisterFeatureStagingChangeNotification @ 0x1C00BD26C (wil_details_RegisterFeatureStagingChangeNotification.c)
 *     wil_details_UpdateFeatureConfiguredStates @ 0x1C00BD2D0 (wil_details_UpdateFeatureConfiguredStates.c)
 *     wil_details_PopulateInitialConfiguredFeatureStates @ 0x1C00C90F0 (wil_details_PopulateInitialConfiguredFeatureStates.c)
 * Callees:
 *     <none>
 */

const wil_details_FeatureDescriptor *__fastcall wil_details_FeatureDescriptors_SkipPadding(
        const wil_details_FeatureDescriptor *p)
{
  while ( 1 )
  {
    if ( p >= wil_details_featureDescriptors_z )
      return 0LL;
    if ( p->featureStateCache )
      break;
    p = (const wil_details_FeatureDescriptor *)((char *)p + 8);
  }
  return p;
}
