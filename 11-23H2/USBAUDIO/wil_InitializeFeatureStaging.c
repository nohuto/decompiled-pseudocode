/*
 * XREFs of wil_InitializeFeatureStaging @ 0x1C0041078
 * Callers:
 *     DriverEntry @ 0x1C003DD34 (DriverEntry.c)
 * Callees:
 *     wil_details_FeatureDescriptors_SkipPadding @ 0x1C0009EFC (wil_details_FeatureDescriptors_SkipPadding.c)
 *     wil_details_EvaluateFeatureDependencies @ 0x1C002BA14 (wil_details_EvaluateFeatureDependencies.c)
 *     wil_details_PopulateInitialConfiguredFeatureStates @ 0x1C0041114 (wil_details_PopulateInitialConfiguredFeatureStates.c)
 */

__int64 wil_InitializeFeatureStaging()
{
  unsigned int v0; // ebx
  _QWORD *i; // rcx
  _BYTE *v2; // rax
  unsigned int v3; // eax
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v0 = 0;
  if ( WPP_MAIN_CB.ActiveThreadCount )
    return 0LL;
  WPP_MAIN_CB.ActiveThreadCount = 1;
  v5 = RtlQueryFeatureConfigurationChangeStamp();
  wil_details_PopulateInitialConfiguredFeatureStates();
  wil_details_EvaluateFeatureDependencies();
  for ( i = wil_details_featureDescriptors_a; ; i = v2 + 56 )
  {
    v2 = wil_details_FeatureDescriptors_SkipPadding(i);
    if ( !v2 )
      break;
    if ( !v2[29] && !v2[30] && !v2[28] )
    {
      v3 = RtlRegisterFeatureConfigurationChangeNotification(
             wil_details_ReevaluateOnFeatureConfigurationChange,
             0LL,
             &v5,
             &WPP_MAIN_CB.Dpc.DpcData);
      if ( !v3 )
        return 0LL;
      WPP_MAIN_CB.Dpc.DpcData = 0LL;
      return v3;
    }
  }
  return v0;
}
