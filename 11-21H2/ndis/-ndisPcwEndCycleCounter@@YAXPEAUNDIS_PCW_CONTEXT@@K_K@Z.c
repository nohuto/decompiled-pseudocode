/*
 * XREFs of ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C008C874
 * Callers:
 *     ndisMiniportDpc @ 0x1C000122C (ndisMiniportDpc.c)
 *     ndisInterruptDpc @ 0x1C00014D0 (ndisInterruptDpc.c)
 *     ndisMiniportMessageIsr @ 0x1C00019D0 (ndisMiniportMessageIsr.c)
 *     ?ndisMSendCompleteNetBufferListsInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x1C0002170 (-ndisMSendCompleteNetBufferListsInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z.c)
 *     ?ndisMSendCompleteNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KPEAUNDIS_PCW_CONTEXT@@@Z @ 0x1C00024F4 (-ndisMSendCompleteNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KPEAUNDIS.c)
 *     ?ndisMTopReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C00025B0 (-ndisMTopReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C0002C10 (-ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisReturnNetBufferListsInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C0003230 (-ndisReturnNetBufferListsInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     NdisMSendNetBufferListsComplete @ 0x1C0003540 (NdisMSendNetBufferListsComplete.c)
 *     NdisSendNetBufferLists @ 0x1C00049F0 (NdisSendNetBufferLists.c)
 *     NdisMAllocateNetBufferSGList @ 0x1C0004E00 (NdisMAllocateNetBufferSGList.c)
 *     ?ndisMSendNBLToMiniportInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKE@Z @ 0x1C00052B0 (-ndisMSendNBLToMiniportInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKE@Z.c)
 *     NdisReturnNetBufferLists @ 0x1C0005660 (NdisReturnNetBufferLists.c)
 *     NdisMIndicateReceiveNetBufferLists @ 0x1C0013860 (NdisMIndicateReceiveNetBufferLists.c)
 *     ?ndisMDispatchReceiveNetBufferListsWithLock@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C0023370 (-ndisMDispatchReceiveNetBufferListsWithLock@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisSendNBLToFilter@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x1C0035140 (-ndisSendNBLToFilter@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 *     ndisMiniportIsr @ 0x1C005F1A0 (ndisMiniportIsr.c)
 *     ?ndisMDispatchReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C0098440 (-ndisMDispatchReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ndisDoPeriodicReceivesIndication @ 0x1C00A354C (ndisDoPeriodicReceivesIndication.c)
 *     ndisMIndicateSplitNblChain @ 0x1C00A41C4 (ndisMIndicateSplitNblChain.c)
 *     ?ndisMSendNetBufferListsCompleteInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@KE@Z @ 0x1C00AB5B0 (-ndisMSendNetBufferListsCompleteInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@KE@.c)
 *     ndisMIsr @ 0x1C00C27A0 (ndisMIsr.c)
 *     NdisBuildScatterGatherList @ 0x1C00C9250 (NdisBuildScatterGatherList.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisPcwEndCycleCounter(struct NDIS_PCW_CONTEXT *a1, unsigned int a2, __int64 a3)
{
  unsigned int Number; // eax
  unsigned __int64 v4; // r9
  unsigned __int64 v5; // rax

  Number = *((_DWORD *)a1 + 4);
  if ( Number == -1 )
  {
    Number = KeGetPcr()->Prcb.Number;
    *((_DWORD *)a1 + 4) = Number;
  }
  v4 = *(_QWORD *)a1 + ndisPcwOffsetToPerCpuData + (unsigned __int64)(ndisPcwPerCpuDataStride * Number);
  v5 = __rdtsc();
  *(_QWORD *)(v4 + 8 * a3) += (((unsigned __int64)HIDWORD(v5) << 32) | (unsigned int)v5)
                            - *(_QWORD *)(v4 + 8LL * a2 + 304);
  *(_QWORD *)(v4 + 8LL * a2 + 304) = 0LL;
}
