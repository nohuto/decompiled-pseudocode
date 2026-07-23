/*
 * XREFs of Feature_1179641144__private_IsEnabledDeviceUsage @ 0x140412194
 * Callers:
 *     WmipQueryAllDataMultiple @ 0x1409E0E74 (WmipQueryAllDataMultiple.c)
 *     WmipQuerySingleMultiple @ 0x1409E117C (WmipQuerySingleMultiple.c)
 * Callees:
 *     Feature_1179641144__private_IsEnabledFallback @ 0x1404121CC (Feature_1179641144__private_IsEnabledFallback.c)
 */

__int64 Feature_1179641144__private_IsEnabledDeviceUsage()
{
  if ( (Feature_1179641144__private_featureState & 0x10) != 0 )
    return Feature_1179641144__private_featureState & 1;
  else
    return Feature_1179641144__private_IsEnabledFallback((unsigned int)Feature_1179641144__private_featureState, 3LL);
}
