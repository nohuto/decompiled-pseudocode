/*
 * XREFs of Feature_Servicing_CmpDoReOpenTransKeyInfiniteLoop__private_IsEnabledDeviceUsage @ 0x14041A24C
 * Callers:
 *     CmpDoReOpenTransKey @ 0x140A2AE84 (CmpDoReOpenTransKey.c)
 * Callees:
 *     Feature_Servicing_CmpDoReOpenTransKeyInfiniteLoop__private_IsEnabledFallback @ 0x14041A284 (Feature_Servicing_CmpDoReOpenTransKeyInfiniteLoop__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_CmpDoReOpenTransKeyInfiniteLoop__private_IsEnabledDeviceUsage()
{
  if ( (Feature_Servicing_CmpDoReOpenTransKeyInfiniteLoop__private_featureState & 0x10) != 0 )
    return Feature_Servicing_CmpDoReOpenTransKeyInfiniteLoop__private_featureState & 1;
  else
    return Feature_Servicing_CmpDoReOpenTransKeyInfiniteLoop__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_CmpDoReOpenTransKeyInfiniteLoop__private_featureState,
             3LL);
}
