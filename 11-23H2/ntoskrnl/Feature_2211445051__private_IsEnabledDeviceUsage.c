/*
 * XREFs of Feature_2211445051__private_IsEnabledDeviceUsage @ 0x14041213C
 * Callers:
 *     SeValidSecurityDescriptor @ 0x1407B4150 (SeValidSecurityDescriptor.c)
 * Callees:
 *     Feature_2211445051__private_IsEnabledFallback @ 0x140412174 (Feature_2211445051__private_IsEnabledFallback.c)
 */

__int64 Feature_2211445051__private_IsEnabledDeviceUsage()
{
  if ( (Feature_2211445051__private_featureState & 0x10) != 0 )
    return Feature_2211445051__private_featureState & 1;
  else
    return Feature_2211445051__private_IsEnabledFallback((unsigned int)Feature_2211445051__private_featureState, 3LL);
}
