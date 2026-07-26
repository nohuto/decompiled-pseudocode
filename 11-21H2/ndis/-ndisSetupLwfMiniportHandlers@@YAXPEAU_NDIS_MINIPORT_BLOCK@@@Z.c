/*
 * XREFs of ?ndisSetupLwfMiniportHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0019FF0
 * Callers:
 *     ?ndisFilterAttachCleanUp@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C0015FB8 (-ndisFilterAttachCleanUp@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     NdisFSetAttributes @ 0x1C00191C0 (NdisFSetAttributes.c)
 *     ?ndisHandleFilterHandlersChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0019540 (-ndisHandleFilterHandlersChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisSetupNdis6OpenHandlers@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0019EEC (-ndisSetupNdis6OpenHandlers@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAU_NDIS_MINIPO.c)
 *     ?ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z @ 0x1C013C890 (-ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z.c)
 *     ?ndisSetMiniportHandlers@@_Y2PAGENPNP@@AXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C013CD04 (-ndisSetMiniportHandlers@@_Y2PAGENPNP@@AXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C990 (WPP_RECORDER_SF_q.c)
 *     ?ndisSetupNoFilterHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00192A0 (-ndisSetupNoFilterHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisSetupUpwardHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C001A0AC (-ndisSetupUpwardHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisSetupDownwardHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C001A37C (-ndisSetupDownwardHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

void __fastcall ndisSetupLwfMiniportHandlers(struct _NDIS_MINIPORT_BLOCK *a1)
{
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x3Du,
      (struct _GUID *)&WPP_63db700a80b438f6540a523b9430c1eb_Traceguids,
      a1);
  if ( a1->LowestFilter )
  {
    ndisSetupDownwardHandlers(a1);
    ndisSetupUpwardHandlers(a1);
  }
  else
  {
    a1->ReceiveFilters = 0;
    ndisSetupNoFilterHandlers(a1);
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x3Eu,
      (struct _GUID *)&WPP_63db700a80b438f6540a523b9430c1eb_Traceguids,
      a1);
}
