/*
 * XREFs of Feature_3003324730__private_IsEnabledDeviceUsage @ 0x1C00373E8
 * Callers:
 *     ndisDispatchRequest @ 0x1C0002B08 (ndisDispatchRequest.c)
 * Callees:
 *     Feature_3003324730__private_IsEnabledFallback @ 0x1C0037420 (Feature_3003324730__private_IsEnabledFallback.c)
 */

__int64 Feature_3003324730__private_IsEnabledDeviceUsage()
{
  if ( (Feature_3003324730__private_featureState & 0x10) != 0 )
    return Feature_3003324730__private_featureState & 1;
  else
    return Feature_3003324730__private_IsEnabledFallback((unsigned int)Feature_3003324730__private_featureState, 3LL);
}
