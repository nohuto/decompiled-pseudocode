/*
 * XREFs of wil_details_RegisterFeatureStagingChangeNotification @ 0x1C008E23C
 * Callers:
 *     wil_InitializeFeatureStaging @ 0x1C00BB078 (wil_InitializeFeatureStaging.c)
 * Callees:
 *     wil_details_FeatureDescriptors_SkipPadding @ 0x1C002F2BC (wil_details_FeatureDescriptors_SkipPadding.c)
 */

_BYTE *wil_details_RegisterFeatureStagingChangeNotification()
{
  _QWORD *i; // rcx
  _BYTE *result; // rax
  __int64 v2; // r8

  for ( i = &wil_details_featureDescriptors_a; ; i = result + 48 )
  {
    result = wil_details_FeatureDescriptors_SkipPadding(i);
    if ( !result )
      break;
    if ( !result[21] && !result[22] && !result[20] )
    {
      result = (_BYTE *)RtlRegisterFeatureConfigurationChangeNotification(
                          wil_details_OnFeatureConfigurationChange,
                          0LL,
                          v2,
                          &wil_details_featureChangeNotification);
      if ( (_DWORD)result )
        wil_details_featureChangeNotification = 0LL;
      return result;
    }
  }
  return result;
}
