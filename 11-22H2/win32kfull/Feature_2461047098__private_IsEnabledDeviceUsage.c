/*
 * XREFs of Feature_2461047098__private_IsEnabledDeviceUsage @ 0x1C01409C8
 * Callers:
 *     ?CleanupPvtData@@YAXPEAVPFF@@@Z @ 0x1C02D6070 (-CleanupPvtData@@YAXPEAVPFF@@@Z.c)
 * Callees:
 *     Feature_2461047098__private_IsEnabledFallback @ 0x1C0140A00 (Feature_2461047098__private_IsEnabledFallback.c)
 */

__int64 Feature_2461047098__private_IsEnabledDeviceUsage()
{
  if ( (Feature_2461047098__private_featureState & 0x10) != 0 )
    return Feature_2461047098__private_featureState & 1;
  else
    return Feature_2461047098__private_IsEnabledFallback((unsigned int)Feature_2461047098__private_featureState, 3LL);
}
