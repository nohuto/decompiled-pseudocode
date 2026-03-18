/*
 * XREFs of wil_details_IsEnabledFallback @ 0x1C00249D8
 * Callers:
 *     Feature_DxgkGpuVaIoMmu__private_IsEnabledFallback @ 0x1C0024020 (Feature_DxgkGpuVaIoMmu__private_IsEnabledFallback.c)
 *     Feature_Servicing_CleanUpDisplayedPrimary__private_IsEnabledFallback @ 0x1C0024D10 (Feature_Servicing_CleanUpDisplayedPrimary__private_IsEnabledFallback.c)
 *     Feature_41457977__private_IsEnabledFallback @ 0x1C0024DF8 (Feature_41457977__private_IsEnabledFallback.c)
 *     Feature_1344054585__private_IsEnabledFallback @ 0x1C002549C (Feature_1344054585__private_IsEnabledFallback.c)
 *     Feature_3285488955__private_IsEnabledFallback @ 0x1C0025E48 (Feature_3285488955__private_IsEnabledFallback.c)
 *     Feature_1999418683__private_IsEnabledFallback @ 0x1C00262D0 (Feature_1999418683__private_IsEnabledFallback.c)
 *     Feature_3021246777__private_IsEnabledFallback @ 0x1C0026324 (Feature_3021246777__private_IsEnabledFallback.c)
 *     Feature_856993082__private_IsEnabledFallback @ 0x1C002645C (Feature_856993082__private_IsEnabledFallback.c)
 *     Feature_112499000__private_IsEnabledFallback @ 0x1C00269C0 (Feature_112499000__private_IsEnabledFallback.c)
 *     Feature_1834517816__private_IsEnabledFallback @ 0x1C0026A3C (Feature_1834517816__private_IsEnabledFallback.c)
 *     Feature_2683613496__private_IsEnabledFallback @ 0x1C0026A90 (Feature_2683613496__private_IsEnabledFallback.c)
 *     Feature_2177406266__private_IsEnabledFallback @ 0x1C0026C10 (Feature_2177406266__private_IsEnabledFallback.c)
 *     Feature_275551545__private_IsEnabledFallback @ 0x1C0026C64 (Feature_275551545__private_IsEnabledFallback.c)
 *     Feature_4123222330__private_IsEnabledFallback @ 0x1C0026CB8 (Feature_4123222330__private_IsEnabledFallback.c)
 *     Feature_425239864__private_IsEnabledFallback @ 0x1C0026D0C (Feature_425239864__private_IsEnabledFallback.c)
 *     Feature_809279800__private_IsEnabledFallback @ 0x1C0026D60 (Feature_809279800__private_IsEnabledFallback.c)
 *     Feature_45195632__private_IsEnabledFallback @ 0x1C00270A8 (Feature_45195632__private_IsEnabledFallback.c)
 *     Feature_36371531__private_IsEnabledFallback @ 0x1C0027160 (Feature_36371531__private_IsEnabledFallback.c)
 *     Feature_DolbyVisionVSVDBv4_Support__private_IsEnabledFallback @ 0x1C0027344 (Feature_DolbyVisionVSVDBv4_Support__private_IsEnabledFallback.c)
 *     Feature_45097502__private_IsEnabledFallback @ 0x1C00274C4 (Feature_45097502__private_IsEnabledFallback.c)
 *     Feature_DolbyVisionV1Fix__private_IsEnabledFallback @ 0x1C0027D40 (Feature_DolbyVisionV1Fix__private_IsEnabledFallback.c)
 *     Feature_CompositionTextures__private_IsEnabledFallback @ 0x1C0027E20 (Feature_CompositionTextures__private_IsEnabledFallback.c)
 *     Feature_Servicing_CompTexturesNoRedirectionFix__private_IsEnabledFallback @ 0x1C0027E74 (Feature_Servicing_CompTexturesNoRedirectionFix__private_IsEnabledFallback.c)
 *     Feature_P010DisplayableSupport__private_IsEnabledFallback @ 0x1C0027F68 (Feature_P010DisplayableSupport__private_IsEnabledFallback.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1C00245B0 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState @ 0x1C0024728 (wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x1C0024828 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 */

__int64 __fastcall wil_details_IsEnabledFallback(__int64 a1, unsigned int a2, volatile signed __int32 **a3)
{
  char v5; // bl
  __int64 v6; // rdi

  v5 = a1;
  if ( (a1 & 2) != 0 )
  {
    v6 = (unsigned int)a1;
  }
  else
  {
    v6 = wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState(*a3, a1, (__int64)a3);
    v5 = v6;
  }
  if ( a2 )
  {
    wil_details_FeatureReporting_ReportUsageToService((__int64)a3, v6, a2);
    if ( a2 - 3 <= 1 )
      wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(v6, a2, (__int64)a3);
  }
  return v5 & 1;
}
