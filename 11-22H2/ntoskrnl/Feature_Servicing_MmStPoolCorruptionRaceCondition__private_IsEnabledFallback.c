/*
 * XREFs of Feature_Servicing_MmStPoolCorruptionRaceCondition__private_IsEnabledFallback @ 0x1404199F8
 * Callers:
 *     Feature_Servicing_MmStPoolCorruptionRaceCondition__private_IsEnabledNoReporting @ 0x140419A18 (Feature_Servicing_MmStPoolCorruptionRaceCondition__private_IsEnabledNoReporting.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x14040F26C (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_Servicing_MmStPoolCorruptionRaceCondition__private_IsEnabledFallback(
        __int64 a1,
        unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_Servicing_MmStPoolCorruptionRaceCondition__private_descriptor);
}
