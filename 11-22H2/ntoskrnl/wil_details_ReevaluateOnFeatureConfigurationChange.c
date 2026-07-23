/*
 * XREFs of wil_details_ReevaluateOnFeatureConfigurationChange @ 0x14067EE70
 * Callers:
 *     <none>
 * Callees:
 *     wil_details_EvaluateFeatureDependencies @ 0x140A12370 (wil_details_EvaluateFeatureDependencies.c)
 *     wil_details_UpdateFeatureConfiguredStates @ 0x140A12424 (wil_details_UpdateFeatureConfiguredStates.c)
 */

void __fastcall wil_details_ReevaluateOnFeatureConfigurationChange(PVOID a1)
{
  wil_details_UpdateFeatureConfiguredStates(a1);
  wil_details_EvaluateFeatureDependencies();
}
