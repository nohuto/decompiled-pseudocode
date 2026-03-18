/*
 * XREFs of wil_atomic_uint32_compare_exchange_relaxed @ 0x1C000A968
 * Callers:
 *     wil_details_EvaluateFeatureDependencies_ReevaluateCachedFeatureEnabledState @ 0x1C00B01C4 (wil_details_EvaluateFeatureDependencies_ReevaluateCachedFeatureEnabledState.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil_atomic_uint32_compare_exchange_relaxed(
        volatile unsigned int *object,
        unsigned int *expected,
        signed __int32 desired)
{
  unsigned int v3; // eax
  signed __int32 v4; // ett

  v4 = *expected;
  v3 = _InterlockedCompareExchange((volatile signed __int32 *)object, desired, *expected);
  if ( v4 == v3 )
    return 1LL;
  *expected = v3;
  return 0LL;
}
