/*
 * XREFs of ?ndisNicAutoPowerSaverControlIdleTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00A6F28
 * Callers:
 *     ndisWnfPdcCallback @ 0x1C0055690 (ndisWnfPdcCallback.c)
 *     ?ndisSubmitIdleRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C00A88C8 (-ndisSubmitIdleRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 * Callees:
 *     ?ndisClearIdleTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00A68D4 (-ndisClearIdleTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisSetIdleTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00A8284 (-ndisSetIdleTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

void __fastcall ndisNicAutoPowerSaverControlIdleTimer(struct _NDIS_MINIPORT_BLOCK *a1)
{
  if ( a1->AoAc
    && (a1->PnPFlags & 0x60) == 0x60
    && (unsigned int)(a1->DeviceCaps.DeviceWake - 2) <= 2
    && (a1->PMHardwareCapabilities.Flags & 4) != 0
    && a1->SelectiveSuspend )
  {
    if ( ndisConnectedStandby )
      ndisSetIdleTimer(a1);
    else
      ndisClearIdleTimer(a1);
  }
}
