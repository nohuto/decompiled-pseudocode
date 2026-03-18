/*
 * XREFs of Feature_Servicing_MmStPoolCorruptionRaceCondition__private_IsEnabledNoReporting @ 0x14041A120
 * Callers:
 *     MiStealPage @ 0x1403BC3DC (MiStealPage.c)
 * Callees:
 *     Feature_Servicing_MmStPoolCorruptionRaceCondition__private_IsEnabledFallback @ 0x14041A100 (Feature_Servicing_MmStPoolCorruptionRaceCondition__private_IsEnabledFallback.c)
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
