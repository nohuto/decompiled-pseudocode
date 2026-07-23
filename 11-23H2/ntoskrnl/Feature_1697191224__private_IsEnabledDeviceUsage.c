/*
 * XREFs of Feature_1697191224__private_IsEnabledDeviceUsage @ 0x140412C78
 * Callers:
 *     NtSetInformationWorkerFactory @ 0x140303120 (NtSetInformationWorkerFactory.c)
 * Callees:
 *     Feature_1697191224__private_IsEnabledFallback @ 0x140412CB0 (Feature_1697191224__private_IsEnabledFallback.c)
 */

__int64 Feature_1697191224__private_IsEnabledDeviceUsage()
{
  if ( (Feature_1697191224__private_featureState & 0x10) != 0 )
    return Feature_1697191224__private_featureState & 1;
  else
    return Feature_1697191224__private_IsEnabledFallback((unsigned int)Feature_1697191224__private_featureState, 3LL);
}
