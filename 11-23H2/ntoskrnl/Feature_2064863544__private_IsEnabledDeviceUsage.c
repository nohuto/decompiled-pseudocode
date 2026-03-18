/*
 * XREFs of Feature_2064863544__private_IsEnabledDeviceUsage @ 0x140410CFC
 * Callers:
 *     KiSetFeatureBits @ 0x140A8D4C4 (KiSetFeatureBits.c)
 * Callees:
 *     Feature_2064863544__private_IsEnabledFallback @ 0x140410D34 (Feature_2064863544__private_IsEnabledFallback.c)
 */

__int64 Feature_2064863544__private_IsEnabledDeviceUsage()
{
  if ( (Feature_2064863544__private_featureState & 0x10) != 0 )
    return Feature_2064863544__private_featureState & 1;
  else
    return Feature_2064863544__private_IsEnabledFallback((unsigned int)Feature_2064863544__private_featureState, 3LL);
}
