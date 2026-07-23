/*
 * XREFs of Feature_1597180219__private_IsEnabledDeviceUsage @ 0x140412CCC
 * Callers:
 *     NtPssCaptureVaSpaceBulk @ 0x140A054A0 (NtPssCaptureVaSpaceBulk.c)
 * Callees:
 *     Feature_1597180219__private_IsEnabledFallback @ 0x140412D04 (Feature_1597180219__private_IsEnabledFallback.c)
 */

__int64 Feature_1597180219__private_IsEnabledDeviceUsage()
{
  if ( (Feature_1597180219__private_featureState & 0x10) != 0 )
    return Feature_1597180219__private_featureState & 1;
  else
    return Feature_1597180219__private_IsEnabledFallback((unsigned int)Feature_1597180219__private_featureState, 3LL);
}
