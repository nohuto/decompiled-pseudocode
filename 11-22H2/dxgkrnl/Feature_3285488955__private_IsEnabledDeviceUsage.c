/*
 * XREFs of Feature_3285488955__private_IsEnabledDeviceUsage @ 0x1C0025E10
 * Callers:
 *     NtDxgkGetProperties @ 0x1C01A82A0 (NtDxgkGetProperties.c)
 * Callees:
 *     Feature_3285488955__private_IsEnabledFallback @ 0x1C0025E48 (Feature_3285488955__private_IsEnabledFallback.c)
 */

__int64 Feature_3285488955__private_IsEnabledDeviceUsage()
{
  if ( (Feature_3285488955__private_featureState & 0x10) != 0 )
    return Feature_3285488955__private_featureState & 1;
  else
    return Feature_3285488955__private_IsEnabledFallback((unsigned int)Feature_3285488955__private_featureState, 3LL);
}
