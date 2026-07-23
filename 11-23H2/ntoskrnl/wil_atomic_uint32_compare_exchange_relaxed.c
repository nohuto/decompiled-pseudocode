/*
 * XREFs of wil_atomic_uint32_compare_exchange_relaxed @ 0x1405085FC
 * Callers:
 *     wil_details_FeatureReporting_ReportUsageToServiceDirect @ 0x14022FDE0 (wil_details_FeatureReporting_ReportUsageToServiceDirect.c)
 *     wil_details_EvaluateFeatureDependencies_ReevaluateCachedFeatureEnabledState @ 0x14080ECA4 (wil_details_EvaluateFeatureDependencies_ReevaluateCachedFeatureEnabledState.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil_atomic_uint32_compare_exchange_relaxed(
        volatile signed __int32 *a1,
        signed __int32 *a2,
        signed __int32 a3)
{
  signed __int32 v3; // eax
  signed __int32 v4; // ett

  v4 = *a2;
  v3 = _InterlockedCompareExchange(a1, a3, *a2);
  if ( v4 == v3 )
    return 1LL;
  *a2 = v3;
  return 0LL;
}
