/*
 * XREFs of Feature_1358681402__private_IsEnabledDeviceUsage @ 0x14041226C
 * Callers:
 *     EtwpTraceThreadRundown @ 0x140383280 (EtwpTraceThreadRundown.c)
 *     EtwTraceThread @ 0x1406AD060 (EtwTraceThread.c)
 * Callees:
 *     Feature_1358681402__private_IsEnabledFallback @ 0x1404122A4 (Feature_1358681402__private_IsEnabledFallback.c)
 */

__int64 Feature_1358681402__private_IsEnabledDeviceUsage()
{
  if ( (Feature_1358681402__private_featureState & 0x10) != 0 )
    return Feature_1358681402__private_featureState & 1;
  else
    return Feature_1358681402__private_IsEnabledFallback((unsigned int)Feature_1358681402__private_featureState, 3LL);
}
