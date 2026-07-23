/*
 * XREFs of Feature_2415126843__private_IsEnabledDeviceUsage @ 0x140411764
 * Callers:
 *     RtlQueryAtomInAtomTable @ 0x1407152D0 (RtlQueryAtomInAtomTable.c)
 * Callees:
 *     Feature_2415126843__private_IsEnabledFallback @ 0x14041179C (Feature_2415126843__private_IsEnabledFallback.c)
 */

__int64 Feature_2415126843__private_IsEnabledDeviceUsage()
{
  if ( (Feature_2415126843__private_featureState & 0x10) != 0 )
    return Feature_2415126843__private_featureState & 1;
  else
    return Feature_2415126843__private_IsEnabledFallback((unsigned int)Feature_2415126843__private_featureState, 3LL);
}
