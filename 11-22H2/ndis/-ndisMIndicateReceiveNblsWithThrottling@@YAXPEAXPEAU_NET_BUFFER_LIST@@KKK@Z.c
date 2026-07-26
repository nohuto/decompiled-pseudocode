/*
 * XREFs of ?ndisMIndicateReceiveNblsWithThrottling@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C003E410
 * Callers:
 *     <none>
 * Callees:
 *     ndisMQueueReceiveNetBufferLists @ 0x1C003E616 (ndisMQueueReceiveNetBufferLists.c)
 *     ?ndisPeriodicReceivesGetMaxNblCount@@YAKPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C003E6A0 (-ndisPeriodicReceivesGetMaxNblCount@@YAKPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisMIndicateSplitNblChain @ 0x1C00AAC30 (ndisMIndicateSplitNblChain.c)
 */

void __fastcall ndisMIndicateReceiveNblsWithThrottling(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NET_BUFFER_LIST *a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5)
{
  int MaxNblCount; // eax

  if ( (a5 & 1) != 0 || KeGetCurrentIrql() )
  {
    ndisMQueueReceiveNetBufferLists(&a1->Header, a5);
  }
  else
  {
    MaxNblCount = ndisPeriodicReceivesGetMaxNblCount(a1);
    ndisMIndicateSplitNblChain((struct _NDIS_FILTER_BLOCK *)a1, a2, a5, MaxNblCount);
  }
}
