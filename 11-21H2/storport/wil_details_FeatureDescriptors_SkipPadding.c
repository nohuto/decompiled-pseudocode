/*
 * XREFs of wil_details_FeatureDescriptors_SkipPadding @ 0x1C0023AC0
 * Callers:
 *     wil_details_EvaluateFeatureDependencies @ 0x1C0084148 (wil_details_EvaluateFeatureDependencies.c)
 *     wil_details_RegisterFeatureStagingChangeNotification @ 0x1C008430C (wil_details_RegisterFeatureStagingChangeNotification.c)
 *     wil_details_UpdateFeatureConfiguredStates @ 0x1C0084370 (wil_details_UpdateFeatureConfiguredStates.c)
 *     wil_details_PopulateInitialConfiguredFeatureStates @ 0x1C00970BC (wil_details_PopulateInitialConfiguredFeatureStates.c)
 * Callees:
 *     <none>
 */

PDEVICE_OBJECT *__fastcall wil_details_FeatureDescriptors_SkipPadding(PDEVICE_OBJECT *a1)
{
  while ( 1 )
  {
    if ( a1 >= &WPP_GLOBAL_Control )
      return 0LL;
    if ( *a1 )
      break;
    ++a1;
  }
  return a1;
}
