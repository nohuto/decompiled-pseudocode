/*
 * XREFs of Feature_1480059192__private_IsEnabledDeviceUsage @ 0x1404122C4
 * Callers:
 *     EtwpEventWriteFull @ 0x140258630 (EtwpEventWriteFull.c)
 *     EtwpWriteUserEvent @ 0x1406F4170 (EtwpWriteUserEvent.c)
 * Callees:
 *     Feature_1480059192__private_IsEnabledFallback @ 0x1404122FC (Feature_1480059192__private_IsEnabledFallback.c)
 */

__int64 Feature_1480059192__private_IsEnabledDeviceUsage()
{
  if ( (Feature_1480059192__private_featureState & 0x10) != 0 )
    return Feature_1480059192__private_featureState & 1;
  else
    return Feature_1480059192__private_IsEnabledFallback((unsigned int)Feature_1480059192__private_featureState, 3LL);
}
