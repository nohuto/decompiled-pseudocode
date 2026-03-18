/*
 * XREFs of Feature_3515646266__private_IsEnabledDeviceUsage @ 0x1C00030D8
 * Callers:
 *     CiNdisThrottle @ 0x1C000B4B0 (CiNdisThrottle.c)
 *     CiNdisUpdateThrottleState @ 0x1C000CC90 (CiNdisUpdateThrottleState.c)
 *     CiNdisCleanupThrottle @ 0x1C000DD24 (CiNdisCleanupThrottle.c)
 * Callees:
 *     Feature_3515646266__private_IsEnabledFallback @ 0x1C0003110 (Feature_3515646266__private_IsEnabledFallback.c)
 */

__int64 Feature_3515646266__private_IsEnabledDeviceUsage()
{
  if ( (Feature_3515646266__private_featureState & 0x10) != 0 )
    return Feature_3515646266__private_featureState & 1;
  else
    return Feature_3515646266__private_IsEnabledFallback((unsigned int)Feature_3515646266__private_featureState, 3LL);
}
