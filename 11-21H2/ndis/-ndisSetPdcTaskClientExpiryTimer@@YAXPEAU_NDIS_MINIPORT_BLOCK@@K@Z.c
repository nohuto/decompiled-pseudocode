/*
 * XREFs of ?ndisSetPdcTaskClientExpiryTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C0093E88
 * Callers:
 *     ?ndisPMPDCTaskClient@@YAXPEAX@Z @ 0x1C0091910 (-ndisPMPDCTaskClient@@YAXPEAX@Z.c)
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0005F20 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C00106B4 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisPowerSaveClearStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x1C0014340 (-ndisPowerSaveClearStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z.c)
 *     PdcTaskClientRequest @ 0x1C0137D98 (PdcTaskClientRequest.c)
 */

void __fastcall ndisSetPdcTaskClientExpiryTimer(struct _NDIS_MINIPORT_BLOCK *a1)
{
  if ( ndisReferenceMiniport(a1, 0x13u) )
  {
    if ( KeSetCoalescableTimer(
           &a1->PdcTaskClientDisableTimer.Timer,
           (LARGE_INTEGER)-300000000LL,
           0,
           0,
           &a1->PdcTaskClientDisableTimer.Dpc) )
    {
      ndisDereferenceMiniport(a1, 0x13u);
    }
  }
  else
  {
    PdcTaskClientRequest(a1->PdcHandle, 0LL);
    ndisPowerSaveClearStop((__int64)a1, 0xCu);
    _InterlockedExchange(&a1->PdcTaskClientMode, 0);
  }
}
