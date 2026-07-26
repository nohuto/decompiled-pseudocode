/*
 * XREFs of ?ComputeRoundedAverage@@YA_K_K0@Z @ 0x1C0057914
 * Callers:
 *     ?ndisCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E_K@Z @ 0x1C0058C60 (-ndisCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E_K@Z.c)
 *     ndisPublishSleepStudyNicAutoPowerSaverCustomData @ 0x1C012B000 (ndisPublishSleepStudyNicAutoPowerSaverCustomData.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall ComputeRoundedAverage(__int64 a1, unsigned __int64 a2)
{
  if ( a2 > 1 )
    return (a1 + (a2 >> 1)) / a2;
  return a1;
}
