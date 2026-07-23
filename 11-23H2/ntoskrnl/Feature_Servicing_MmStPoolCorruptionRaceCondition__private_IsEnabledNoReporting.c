/*
 * XREFs of Feature_Servicing_MmStPoolCorruptionRaceCondition__private_IsEnabledNoReporting @ 0x14041A4B0
 * Callers:
 *     MiStealPage @ 0x1403BC5BC (MiStealPage.c)
 * Callees:
 *     Feature_Servicing_MmStPoolCorruptionRaceCondition__private_IsEnabledFallback @ 0x14041A490 (Feature_Servicing_MmStPoolCorruptionRaceCondition__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_MmStPoolCorruptionRaceCondition__private_IsEnabledNoReporting()
{
  if ( (Feature_Servicing_MmStPoolCorruptionRaceCondition__private_featureState & 2) != 0 )
    return Feature_Servicing_MmStPoolCorruptionRaceCondition__private_featureState & 1;
  else
    return Feature_Servicing_MmStPoolCorruptionRaceCondition__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_MmStPoolCorruptionRaceCondition__private_featureState,
             0);
}
