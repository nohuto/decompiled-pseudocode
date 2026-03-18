/*
 * XREFs of wil_details_EvaluateFeatureDependencies_ReevaluateCachedFeatureEnabledState @ 0x1C00B01C4
 * Callers:
 *     wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState @ 0x1C00B018C (wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState.c)
 * Callees:
 *     wil_atomic_uint32_compare_exchange_relaxed @ 0x1C000A968 (wil_atomic_uint32_compare_exchange_relaxed.c)
 *     wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState @ 0x1C00B018C (wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState.c)
 */

wil_details_FeatureStateCache __fastcall wil_details_EvaluateFeatureDependencies_ReevaluateCachedFeatureEnabledState(
        wil_details_FeatureStateCache *featureState,
        wil_details_FeatureStateCache observedState,
        const wil_details_FeatureDescriptor *descriptor)
{
  unsigned int exchange; // ebx
  int v5; // edi
  const wil_details_FeatureDescriptor *const *requiresFeatures; // rsi
  bool v7; // zf
  const wil_details_FeatureDescriptor *v8; // rax
  char exchange64; // al
  unsigned int v10; // r8d
  wil_details_FeatureStateCache prev; // [rsp+48h] [rbp+10h] BYREF
  wil_details_FeatureStateCache result; // [rsp+58h] [rbp+20h]

  prev.exchange64 = 0LL;
  result.exchange64 = 0LL;
  exchange = observedState.exchange;
  v5 = (observedState.exchange >> 6) & 1;
  if ( v5 )
  {
    requiresFeatures = descriptor->requiresFeatures;
    v7 = requiresFeatures == 0LL;
LABEL_3:
    if ( !v7 )
    {
      while ( 1 )
      {
        v8 = *requiresFeatures;
        if ( !*requiresFeatures )
          break;
        if ( !v8->isAlwaysEnabled && !v8->isAlwaysDisabled )
        {
          exchange64 = wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState(
                         v8->featureStateCache,
                         *requiresFeatures).exchange64;
          v5 = v5 && (exchange64 & 1) != 0;
          ++requiresFeatures;
          v7 = v5 == 0;
          goto LABEL_3;
        }
        if ( !v5 || !v8->isEnabledByDefault )
        {
          v5 = 0;
          break;
        }
        v5 = 1;
        ++requiresFeatures;
      }
    }
  }
  for ( prev.exchange = exchange; ; exchange = prev.exchange )
  {
    v10 = v5 & 0xFFFFFFCF | exchange & 0xFFFFFFCE;
    if ( (exchange & 1) == v5 )
      v10 = v5 | exchange & 0xFFFFFFFE;
    result.exchange = v10 & 0xFFFFFDFF;
    if ( (unsigned int)wil_atomic_uint32_compare_exchange_relaxed(
                         (volatile unsigned int *)featureState,
                         (unsigned int *)&prev,
                         v10 & 0xFFFFFDFF) )
      break;
  }
  return result;
}
