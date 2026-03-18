/*
 * XREFs of ?CheckCommonComputeScribbleSupport@CSuperWetInkManager@@AEAAJPEA_N@Z @ 0x1801CB484
 * Callers:
 *     ?CheckHostComputeScribbleSupport@CSuperWetInkManager@@AEAAJAEBUVailSuperWetStroke@1@PEA_N@Z @ 0x1801CB4CC (-CheckHostComputeScribbleSupport@CSuperWetInkManager@@AEAAJAEBUVailSuperWetStroke@1@PEA_N@Z.c)
 *     ?CheckLocalComputeScribbleSupport@CSuperWetInkManager@@AEAAJAEBUSuperWetStroke@1@PEA_N@Z @ 0x1801CB60C (-CheckLocalComputeScribbleSupport@CSuperWetInkManager@@AEAAJAEBUSuperWetStroke@1@PEA_N@Z.c)
 * Callees:
 *     McTemplateU0q_EventWriteTransfer @ 0x18012DB24 (McTemplateU0q_EventWriteTransfer.c)
 */

__int64 __fastcall CSuperWetInkManager::CheckCommonComputeScribbleSupport(CSuperWetInkManager *this, bool *a2)
{
  bool v2; // zf

  v2 = CCommonRegistryData::SuperWetEnabled == 0;
  *a2 = 0;
  if ( v2 )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
      McTemplateU0q_EventWriteTransfer(
        (__int64)&Microsoft_Windows_Dwm_Core_Provider_Context,
        (__int64)&EVTDESC_COMPUTESCRIBBLE_INCOMPATIBLE);
  }
  else
  {
    *a2 = 1;
  }
  return 0LL;
}
