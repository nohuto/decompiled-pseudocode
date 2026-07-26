/*
 * XREFs of ?ndisReturnPeriodicReceives@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU1@@Z @ 0x1C00AB998
 * Callers:
 *     NdisReturnNetBufferLists @ 0x1C0002580 (NdisReturnNetBufferLists.c)
 *     ?ndisMTopReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C0011EB0 (-ndisMTopReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisReturnNetBufferListsInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C0012D74 (-ndisReturnNetBufferListsInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?ndisMDispatchReceiveNetBufferListsWithLock@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C0032490 (-ndisMDispatchReceiveNetBufferListsWithLock@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisMDispatchReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C009E310 (-ndisMDispatchReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ndisDoPeriodicReceivesIndication @ 0x1C00A9F54 (ndisDoPeriodicReceivesIndication.c)
 *     ndisMIndicateSplitNblChain @ 0x1C00AAC30 (ndisMIndicateSplitNblChain.c)
 * Callees:
 *     NdisFreeNetBufferList @ 0x1C0003990 (NdisFreeNetBufferList.c)
 */

struct _NET_BUFFER_LIST *__fastcall ndisReturnPeriodicReceives(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NET_BUFFER_LIST *a2)
{
  struct _NET_BUFFER_LIST *v2; // rdi
  _QWORD *p_Alignment; // r14
  struct _NET_BUFFER_LIST *v4; // rbx
  struct _NET_BUFFER_LIST *Alignment; // rbp
  _NET_BUFFER *FirstNetBuffer; // rax
  struct _NPAGED_LOOKASIDE_LIST *v8; // r15
  _MDL *CurrentMdl; // rsi

  v2 = 0LL;
  p_Alignment = 0LL;
  v4 = a2;
  if ( a2 )
  {
    do
    {
      Alignment = (struct _NET_BUFFER_LIST *)v4->Link.Alignment;
      v4->Link.Alignment = 0LL;
      if ( v4->NdisPoolHandle == PoolHandle )
      {
        _InterlockedDecrement(&a1->PeriodicReceiveQueue.NblsAllocated);
        FirstNetBuffer = v4->FirstNetBuffer;
        v8 = (struct _NPAGED_LOOKASIDE_LIST *)v4->MiniportReserved[1];
        CurrentMdl = FirstNetBuffer->CurrentMdl;
        if ( (CurrentMdl->MdlFlags & 0x20) != 0 )
          MmUnmapLockedPages(CurrentMdl->MappedSystemVa, FirstNetBuffer->CurrentMdl);
        if ( v8 )
          ExFreeToNPagedLookasideList(v8, CurrentMdl);
        else
          ExFreePoolWithTag(CurrentMdl, 0);
        NdisFreeNetBufferList(v4);
      }
      else
      {
        if ( v2 )
          *p_Alignment = v4;
        else
          v2 = v4;
        p_Alignment = &v4->Link.Alignment;
      }
      v4 = Alignment;
    }
    while ( Alignment );
  }
  return v2;
}
