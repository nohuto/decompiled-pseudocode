/*
 * XREFs of ?ndisPMPDCTaskClient@@YAXPEAX@Z @ 0x1C0097910
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0002F40 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C0A0 (WPP_RECORDER_SF_q.c)
 *     ?ndisPowerSaveStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x1C0018258 (-ndisPowerSaveStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z.c)
 *     ?ndisSetPdcTaskClientExpiryTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C0099EA8 (-ndisSetPdcTaskClientExpiryTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     PdcTaskClientRequest @ 0x1C0143C74 (PdcTaskClientRequest.c)
 */

void __fastcall ndisPMPDCTaskClient(_QWORD *P, __int64 a2)
{
  struct _NDIS_MINIPORT_BLOCK *v2; // rbx
  unsigned int v4; // edx

  v2 = (struct _NDIS_MINIPORT_BLOCK *)P[4];
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x84u,
      (struct _GUID *)&WPP_b2e58fb44a513861c2538b26e5e9140e_Traceguids,
      v2);
  if ( !_InterlockedCompareExchange(&v2->PdcTaskClientMode, 1, 0) )
  {
    LOBYTE(a2) = 1;
    if ( (int)PdcTaskClientRequest(v2->PdcHandle, a2) < 0 )
    {
      _InterlockedExchange(&v2->PdcTaskClientMode, 0);
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          0xBu,
          0x85u,
          (struct _GUID *)&WPP_b2e58fb44a513861c2538b26e5e9140e_Traceguids,
          v2);
    }
    else
    {
      ndisPowerSaveStop((__int64)v2, 12LL);
      ndisSetPdcTaskClientExpiryTimer(v2, v4);
    }
  }
  ExFreePoolWithTag(P, 0);
  ndisDereferenceMiniport(v2, 0x12u);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x86u,
      (struct _GUID *)&WPP_b2e58fb44a513861c2538b26e5e9140e_Traceguids,
      v2);
}
