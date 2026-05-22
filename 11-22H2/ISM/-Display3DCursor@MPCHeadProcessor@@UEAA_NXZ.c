/*
 * XREFs of ?Display3DCursor@MPCHeadProcessor@@UEAA_NXZ @ 0x1801F6810
 * Callers:
 *     ?PostHitTestProcessing@MPCHeadProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputInfo@@@Z @ 0x1801F6890 (-PostHitTestProcessing@MPCHeadProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputInf.c)
 * Callees:
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x18003FC64 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 */

bool __fastcall MPCHeadProcessor::Display3DCursor(MPCHeadProcessor *this)
{
  return *((_DWORD *)MPCHolographicInputManager::GetInstance() + 840) != 512;
}
