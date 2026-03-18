/*
 * XREFs of Feature_997142843__private_IsEnabledDeviceUsage @ 0x140411524
 * Callers:
 *     RtlQueryAtomInAtomTable @ 0x1407150C0 (RtlQueryAtomInAtomTable.c)
 * Callees:
 *     Feature_997142843__private_IsEnabledFallback @ 0x14041155C (Feature_997142843__private_IsEnabledFallback.c)
 */

__int64 Feature_997142843__private_IsEnabledDeviceUsage()
{
  if ( (Feature_997142843__private_featureState & 0x10) != 0 )
    return Feature_997142843__private_featureState & 1;
  else
    return Feature_997142843__private_IsEnabledFallback((unsigned int)Feature_997142843__private_featureState, 3LL);
}
