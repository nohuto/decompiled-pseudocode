/*
 * XREFs of Feature_1045946681__private_IsEnabledDeviceUsage @ 0x14040FFD4
 * Callers:
 *     IopAllocateAndPopulateWriteIrp @ 0x140224220 (IopAllocateAndPopulateWriteIrp.c)
 * Callees:
 *     Feature_1045946681__private_IsEnabledFallback @ 0x14041000C (Feature_1045946681__private_IsEnabledFallback.c)
 */

__int64 Feature_1045946681__private_IsEnabledDeviceUsage()
{
  if ( (Feature_1045946681__private_featureState & 0x10) != 0 )
    return Feature_1045946681__private_featureState & 1;
  else
    return Feature_1045946681__private_IsEnabledFallback((unsigned int)Feature_1045946681__private_featureState, 3LL);
}
