/*
 * XREFs of Feature_378570040__private_IsEnabledDeviceUsage @ 0x18009F5B8
 * Callers:
 *     RtlpIsNameInExpressionPrivate @ 0x180108F4C (RtlpIsNameInExpressionPrivate.c)
 * Callees:
 *     <none>
 */

__int64 Feature_378570040__private_IsEnabledDeviceUsage()
{
  __int64 v1; // [rsp+8h] [rbp+8h]

  LODWORD(v1) = Feature_378570040__private_featureState;
  if ( (Feature_378570040__private_featureState & 0x10) != 0 )
    return Feature_378570040__private_featureState & 1;
  else
    return Feature_378570040__private_IsEnabledFallback(v1, 3LL);
}
