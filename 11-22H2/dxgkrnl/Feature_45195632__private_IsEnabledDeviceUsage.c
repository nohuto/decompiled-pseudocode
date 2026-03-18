/*
 * XREFs of Feature_45195632__private_IsEnabledDeviceUsage @ 0x1C0027070
 * Callers:
 *     ?_ReadConfiguration@VIDPN_MGR@@AEAAJXZ @ 0x1C01FFB20 (-_ReadConfiguration@VIDPN_MGR@@AEAAJXZ.c)
 * Callees:
 *     Feature_45195632__private_IsEnabledFallback @ 0x1C00270A8 (Feature_45195632__private_IsEnabledFallback.c)
 */

__int64 Feature_45195632__private_IsEnabledDeviceUsage()
{
  if ( (Feature_45195632__private_featureState & 0x10) != 0 )
    return Feature_45195632__private_featureState & 1;
  else
    return Feature_45195632__private_IsEnabledFallback((unsigned int)Feature_45195632__private_featureState, 3LL);
}
