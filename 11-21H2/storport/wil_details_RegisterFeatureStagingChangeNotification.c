/*
 * XREFs of wil_details_RegisterFeatureStagingChangeNotification @ 0x1C008430C
 * Callers:
 *     wil_InitializeFeatureStaging @ 0x1C0097078 (wil_InitializeFeatureStaging.c)
 * Callees:
 *     wil_details_FeatureDescriptors_SkipPadding @ 0x1C0023AC0 (wil_details_FeatureDescriptors_SkipPadding.c)
 */

PDEVICE_OBJECT *wil_details_RegisterFeatureStagingChangeNotification()
{
  PDEVICE_OBJECT *i; // rcx
  PDEVICE_OBJECT *result; // rax
  __int64 v2; // r8

  for ( i = (PDEVICE_OBJECT *)&wil_details_featureDescriptors_a; ; i = result + 6 )
  {
    result = wil_details_FeatureDescriptors_SkipPadding(i);
    if ( !result )
      break;
    if ( !*((_BYTE *)result + 21) && !*((_BYTE *)result + 22) && !*((_BYTE *)result + 20) )
    {
      result = (PDEVICE_OBJECT *)RtlRegisterFeatureConfigurationChangeNotification(
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
