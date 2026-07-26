/*
 * XREFs of ??0NDIS_PCW_CONTEXT@@QEAA@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0013024
 * Callers:
 *     NdisSendNetBufferLists @ 0x1C0003650 (NdisSendNetBufferLists.c)
 *     ?ndisReturnNetBufferListsInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C0012F04 (-ndisReturnNetBufferListsInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?ndisSendNBLToFilter@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x1C0037280 (-ndisSendNBLToFilter@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 *     ndisMiniportDpc @ 0x1C003D030 (ndisMiniportDpc.c)
 *     ndisMiniportIsr @ 0x1C003D1F0 (ndisMiniportIsr.c)
 *     ndisQueueDpcWorkItem @ 0x1C003D306 (ndisQueueDpcWorkItem.c)
 *     NdisMQueueDpcEx @ 0x1C003D650 (NdisMQueueDpcEx.c)
 *     ?ndisOidPreRSSParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00A33A0 (-ndisOidPreRSSParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisPostSetMiniportRSSParameters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x1C00A4198 (-ndisPostSetMiniportRSSParameters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z.c)
 *     ?ndisMSendNetBufferListsCompleteInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@KE@Z @ 0x1C00B0FFC (-ndisMSendNetBufferListsCompleteInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@KE@.c)
 *     ndisMIsr @ 0x1C00C73F0 (ndisMIsr.c)
 *     NdisBuildScatterGatherList @ 0x1C00CDF40 (NdisBuildScatterGatherList.c)
 * Callees:
 *     <none>
 */

NDIS_PCW_CONTEXT *__fastcall NDIS_PCW_CONTEXT::NDIS_PCW_CONTEXT(
        NDIS_PCW_CONTEXT *this,
        struct _NDIS_MINIPORT_BLOCK *a2)
{
  int PcwDatapathEventMask; // eax
  wchar_t *Buffer; // rax

  *((_DWORD *)this + 4) = -1;
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  PcwDatapathEventMask = a2->PcwDatapathEventMask;
  if ( PcwDatapathEventMask || a2->PcwDatapathCycleMask )
  {
    *((_DWORD *)this + 2) = PcwDatapathEventMask;
    *((_DWORD *)this + 3) = a2->PcwDatapathCycleMask;
    Buffer = a2->Reserved4.Buffer;
    *(_QWORD *)this = Buffer;
    if ( !Buffer )
      *(_QWORD *)this = a2->Reserved4.Buffer;
  }
  return this;
}
