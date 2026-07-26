/*
 * XREFs of ?ndisMEvaluateMagicPacketWake@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PM_WAKE_PACKET@@@Z @ 0x1C008DDE8
 * Callers:
 *     ?ndisMValidatePMWakePacket@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C008E340 (-ndisMValidatePMWakePacket@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 * Callees:
 *     ?ndisCreatePMPdcTaskClientWorkItem@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C008D210 (-ndisCreatePMPdcTaskClientWorkItem@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMValidatePMWakePacketForMagicPacket@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PM_WAKE_PACKET@@@Z @ 0x1C008E4A0 (-ndisMValidatePMWakePacketForMagicPacket@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PM_WAKE_PACKET@.c)
 */

void __fastcall ndisMEvaluateMagicPacketWake(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_PM_WAKE_PACKET *a2)
{
  if ( ndisAcOnLine
    && a1->AoAc
    && a1->MediaType == NdisMedium802_3
    && a1->ModernStandbyWoLMagicPacketEnable == 1
    && a1->PdcHandle
    && !a1->PdcTaskClientMode )
  {
    if ( ndisMValidatePMWakePacketForMagicPacket(a1, a2) )
      ndisCreatePMPdcTaskClientWorkItem(a1);
  }
}
