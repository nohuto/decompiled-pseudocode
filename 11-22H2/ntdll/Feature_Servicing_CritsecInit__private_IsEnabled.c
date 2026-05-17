/*
 * XREFs of Feature_Servicing_CritsecInit__private_IsEnabled @ 0x18009E30C
 * Callers:
 *     LdrRemoveLoadAsDataTable @ 0x180008560 (LdrRemoveLoadAsDataTable.c)
 *     LdrAddLoadAsDataTable @ 0x1800088C0 (LdrAddLoadAsDataTable.c)
 *     LdrpGetLoadAsEntry @ 0x180008AE0 (LdrpGetLoadAsEntry.c)
 *     LdrpGetFromMUIMemCache @ 0x180023058 (LdrpGetFromMUIMemCache.c)
 *     LdrpGetFileSizeFromLoadAsDataTable @ 0x1800270A0 (LdrpGetFileSizeFromLoadAsDataTable.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x1800310E4 (LdrpSetAlternateResourceModuleHandle.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x18006B820 (LdrUnloadAlternateResourceModuleEx.c)
 *     LdrFlushAlternateResourceModules @ 0x180087D10 (LdrFlushAlternateResourceModules.c)
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x1800EBC94 (LdrpGetAlternateResourceModuleHandleEx.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1800D7BB4 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_GetCachedFeatureEnabledState @ 0x1800D7D44 (wil_details_FeatureStateCache_GetCachedFeatureEnabledState.c)
 */

__int64 Feature_Servicing_CritsecInit__private_IsEnabled()
{
  unsigned int CachedFeatureEnabledState; // eax
  unsigned int v1; // ebx

  CachedFeatureEnabledState = wil_details_FeatureStateCache_GetCachedFeatureEnabledState(
                                &Feature_Servicing_CritsecInit__private_featureState,
                                &Feature_Servicing_CritsecInit__private_descriptor);
  v1 = (CachedFeatureEnabledState >> 3) & 1;
  wil_details_FeatureReporting_ReportUsageToService(
    (unsigned int)&Feature_Servicing_CritsecInit__private_reporting,
    39745427,
    (CachedFeatureEnabledState >> 8) & 1,
    (CachedFeatureEnabledState >> 9) & 1,
    (__int64)&Feature_Servicing_CritsecInit_logged_traits,
    v1);
  return v1;
}
