/*
 * XREFs of Feature_3553664313__private_IsEnabledDeviceUsage @ 0x14040FF14
 * Callers:
 *     IopAllocRealFileObject @ 0x14072F300 (IopAllocRealFileObject.c)
 * Callees:
 *     Feature_3553664313__private_IsEnabledFallback @ 0x14040FF4C (Feature_3553664313__private_IsEnabledFallback.c)
 */

__int64 Feature_3553664313__private_IsEnabledDeviceUsage()
{
  if ( (Feature_3553664313__private_featureState & 0x10) != 0 )
    return Feature_3553664313__private_featureState & 1;
  else
    return Feature_3553664313__private_IsEnabledFallback((unsigned int)Feature_3553664313__private_featureState, 3LL);
}
