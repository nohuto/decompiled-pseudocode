/*
 * XREFs of wil_InitializeFeatureStaging @ 0x1C0160078
 * Callers:
 *     DriverEntry @ 0x1C01608CC (DriverEntry.c)
 * Callees:
 *     wil_details_FeatureDescriptors_SkipPadding @ 0x1C0036254 (wil_details_FeatureDescriptors_SkipPadding.c)
 *     wil_details_EvaluateFeatureDependencies @ 0x1C010C070 (wil_details_EvaluateFeatureDependencies.c)
 *     wil_details_PopulateInitialConfiguredFeatureStates @ 0x1C0160114 (wil_details_PopulateInitialConfiguredFeatureStates.c)
 */

__int64 wil_InitializeFeatureStaging()
{
  unsigned int v0; // ebx
  int **i; // rcx
  _BYTE *v2; // rax
  unsigned int v3; // eax
  ULONGLONG ObservedChangeStamp; // [rsp+30h] [rbp+8h] BYREF

  v0 = 0;
  if ( g_wil_details_isFeatureStagingInitialized )
    return 0LL;
  g_wil_details_isFeatureStagingInitialized = 1;
  ObservedChangeStamp = RtlQueryFeatureConfigurationChangeStamp();
  wil_details_PopulateInitialConfiguredFeatureStates();
  wil_details_EvaluateFeatureDependencies();
  for ( i = &wil_details_featureDescriptors_a; ; i = (int **)(v2 + 56) )
  {
    v2 = wil_details_FeatureDescriptors_SkipPadding(i);
    if ( !v2 )
      break;
    if ( !v2[29] && !v2[30] && !v2[28] )
    {
      v3 = RtlRegisterFeatureConfigurationChangeNotification(
             (PRTL_FEATURE_CONFIGURATION_CHANGE_CALLBACK)wil_details_ReevaluateOnFeatureConfigurationChange,
             0LL,
             &ObservedChangeStamp,
             &g_wil_details_featureChangeNotification);
      if ( !v3 )
        return 0LL;
      g_wil_details_featureChangeNotification = 0LL;
      return v3;
    }
  }
  return v0;
}
