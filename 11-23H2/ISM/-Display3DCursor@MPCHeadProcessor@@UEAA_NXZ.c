/*
 * XREFs of ?Display3DCursor@MPCHeadProcessor@@UEAA_NXZ @ 0x1801E9AE0
 * Callers:
 *     ?PostHitTestProcessing@MPCHeadProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputInfo@@@Z @ 0x1801E9B60 (-PostHitTestProcessing@MPCHeadProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputInf.c)
 * Callees:
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x180040694 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 */

bool __fastcall MPCHeadProcessor::Display3DCursor(MPCHeadProcessor *this)
{
  return *((_DWORD *)MPCHolographicInputManager::GetInstance() + 840) != 512;
}
