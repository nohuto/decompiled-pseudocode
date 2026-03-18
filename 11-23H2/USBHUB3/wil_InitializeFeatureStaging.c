/*
 * XREFs of wil_InitializeFeatureStaging @ 0x1C0093008
 * Callers:
 *     DriverEntry @ 0x1C0093240 (DriverEntry.c)
 * Callees:
 *     wil_details_EvaluateFeatureDependencies @ 0x1C0076138 (wil_details_EvaluateFeatureDependencies.c)
 *     wil_details_PopulateInitialConfiguredFeatureStates @ 0x1C00930CC (wil_details_PopulateInitialConfiguredFeatureStates.c)
 */

__int64 wil_InitializeFeatureStaging()
{
  unsigned int v0; // ebx
  _UNKNOWN **i; // rax
  unsigned int v2; // eax
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v0 = 0;
  if ( LODWORD(WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink) )
    return 0LL;
  LODWORD(WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink) = 1;
  v4 = RtlQueryFeatureConfigurationChangeStamp();
  wil_details_PopulateInitialConfiguredFeatureStates();
  wil_details_EvaluateFeatureDependencies();
  for ( i = &wil_details_featureDescriptors_a; i < (_UNKNOWN **)&wil_details_featureDescriptors_z; ++i )
  {
    if ( *i )
    {
LABEL_7:
      if ( i )
      {
        if ( *((_BYTE *)i + 29) || *((_BYTE *)i + 30) || *((_BYTE *)i + 28) )
        {
          for ( i += 7; i < (_UNKNOWN **)&wil_details_featureDescriptors_z; ++i )
          {
            if ( *i )
              goto LABEL_7;
          }
        }
        else
        {
          v2 = RtlRegisterFeatureConfigurationChangeNotification(
                 wil_details_ReevaluateOnFeatureConfigurationChange,
                 0LL,
                 &v4,
                 &WPP_MAIN_CB.Dpc.DpcData);
          if ( !v2 )
            return 0LL;
          WPP_MAIN_CB.Dpc.DpcData = 0LL;
          return v2;
        }
      }
      return v0;
    }
  }
  return v0;
}
