/*
 * XREFs of ?ndisMIndicateReceiveNblsWithThrottling@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C0039800
 * Callers:
 *     <none>
 * Callees:
 *     ndisMQueueReceiveNetBufferLists @ 0x1C0039896 (ndisMQueueReceiveNetBufferLists.c)
 *     ndisMIndicateSplitNblChain @ 0x1C00A41C4 (ndisMIndicateSplitNblChain.c)
 *     ?ndisPeriodicReceivesGetMaxNblCount@@YAKPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00A4F38 (-ndisPeriodicReceivesGetMaxNblCount@@YAKPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
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
