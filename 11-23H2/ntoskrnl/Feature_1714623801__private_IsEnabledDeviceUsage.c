/*
 * XREFs of Feature_1714623801__private_IsEnabledDeviceUsage @ 0x14040FB34
 * Callers:
 *     FsRtlAddBaseMcbEntryEx @ 0x14033A510 (FsRtlAddBaseMcbEntryEx.c)
 * Callees:
 *     Feature_1714623801__private_IsEnabledFallback @ 0x14040FB6C (Feature_1714623801__private_IsEnabledFallback.c)
 */

__int64 Feature_1714623801__private_IsEnabledDeviceUsage()
{
  if ( (Feature_1714623801__private_featureState & 0x10) != 0 )
    return Feature_1714623801__private_featureState & 1;
  else
    return Feature_1714623801__private_IsEnabledFallback((unsigned int)Feature_1714623801__private_featureState, 3LL);
}
