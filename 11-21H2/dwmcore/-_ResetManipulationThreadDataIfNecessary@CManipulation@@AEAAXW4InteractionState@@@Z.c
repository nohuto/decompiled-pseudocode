/*
 * XREFs of ?_ResetManipulationThreadDataIfNecessary@CManipulation@@AEAAXW4InteractionState@@@Z @ 0x1801F5390
 * Callers:
 *     ?UpdateOnManipulationThread@CManipulation@@UEAAJAEBUUpdateOnManipulationThreadArgs@@PEAUIManipulationTelemetryData@InteractionLatencyTelemetry@@@Z @ 0x1801F4CB0 (-UpdateOnManipulationThread@CManipulation@@UEAAJAEBUUpdateOnManipulationThreadArgs@@PEAUIManipul.c)
 *     ?UpdateOnManipulationThreadWithoutDelta@CManipulation@@UEAAJAEBUUpdateOnManipulationThreadWithoutDeltaArgs@@@Z @ 0x1801F4FE0 (-UpdateOnManipulationThreadWithoutDelta@CManipulation@@UEAAJAEBUUpdateOnManipulationThreadWithou.c)
 * Callees:
 *     ?Reset@ManipulationData@@QEAAXXZ @ 0x1801F44F4 (-Reset@ManipulationData@@QEAAXXZ.c)
 *     ?_UpdateCaptureState@CManipulation@@AEAAX_N@Z @ 0x1801F59AC (-_UpdateCaptureState@CManipulation@@AEAAX_N@Z.c)
 */

void __fastcall CManipulation::_ResetManipulationThreadDataIfNecessary(__int64 a1, int a2)
{
  int v2; // eax
  int v3; // r9d
  char v4; // r8

  v2 = *(_DWORD *)(a1 + 236);
  v3 = a2;
  if ( a2 != v2 )
  {
    v4 = *(_BYTE *)(a1 + 448);
    if ( (v4 & 4) != 0 )
      goto LABEL_7;
    if ( (unsigned int)(v2 - 2) <= 2 && (unsigned int)(a2 - 2) > 2 )
    {
      CManipulation::_UpdateCaptureState((CManipulation *)a1, 0);
      v4 = *(_BYTE *)(a1 + 448);
    }
    if ( (v4 & 4) != 0 )
    {
LABEL_7:
      if ( (unsigned int)(*(_DWORD *)(a1 + 236) - 2) > 2 && (unsigned int)(v3 - 2) <= 2 )
        ManipulationData::Reset((ManipulationData *)(a1 + 80));
    }
  }
}
