/*
 * XREFs of Feature_1410919738__private_IsEnabledDeviceUsage @ 0x1404116EC
 * Callers:
 *     SepCopyTokenAccessInformation @ 0x1407F4034 (SepCopyTokenAccessInformation.c)
 * Callees:
 *     Feature_1410919738__private_IsEnabledFallback @ 0x140411724 (Feature_1410919738__private_IsEnabledFallback.c)
 */

__int64 Feature_1410919738__private_IsEnabledDeviceUsage()
{
  if ( (Feature_1410919738__private_featureState & 0x10) != 0 )
    return Feature_1410919738__private_featureState & 1;
  else
    return Feature_1410919738__private_IsEnabledFallback((unsigned int)Feature_1410919738__private_featureState, 3LL);
}
