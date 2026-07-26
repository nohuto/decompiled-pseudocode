/*
 * XREFs of NdisFreeFragmentNetBufferList @ 0x1C00B44C0
 * Callers:
 *     NdisAllocateFragmentNetBufferList @ 0x1C00B3D50 (NdisAllocateFragmentNetBufferList.c)
 * Callees:
 *     NdisFreeNetBufferList @ 0x1C0003B20 (NdisFreeNetBufferList.c)
 *     NdisFreeNetBuffer @ 0x1C0005E20 (NdisFreeNetBuffer.c)
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C0013284 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     NdisAdvanceNetBufferListDataStart @ 0x1C0040250 (NdisAdvanceNetBufferListDataStart.c)
 */

void __stdcall NdisFreeFragmentNetBufferList(
        PNET_BUFFER_LIST FragmentNetBufferList,
        ULONG DataOffsetDelta,
        ULONG FreeFragmentFlags)
{
  char v5; // bp
  _NET_BUFFER *FirstNetBuffer; // rsi
  struct _MDL *MdlChain; // rcx
  struct _MDL *Next; // rbx
  _NET_BUFFER *Alignment; // rbx

  FragmentNetBufferList->Link.Alignment = 0LL;
  if ( *(_DWORD *)ndisNblTrackerMode )
    ndisNblTrackerTransferOwnershipInternal(FragmentNetBufferList, 0LL, 0x98uLL, 8LL, 0);
  v5 = *((_BYTE *)FragmentNetBufferList->NdisPoolHandle + 44) & 1;
  NdisAdvanceNetBufferListDataStart(
    FragmentNetBufferList,
    DataOffsetDelta,
    1u,
    (NET_BUFFER_FREE_MDL_HANDLER)ndisFreeMdlInternal);
  FirstNetBuffer = FragmentNetBufferList->FirstNetBuffer;
  if ( FirstNetBuffer )
  {
    do
    {
      MdlChain = FirstNetBuffer->MdlChain;
      if ( MdlChain )
      {
        do
        {
          Next = MdlChain->Next;
          IoFreeMdl(MdlChain);
          MdlChain = Next;
        }
        while ( Next );
      }
      Alignment = (_NET_BUFFER *)FirstNetBuffer->Link.Alignment;
      if ( FirstNetBuffer != FragmentNetBufferList->FirstNetBuffer || !v5 )
        NdisFreeNetBuffer(FirstNetBuffer);
      FirstNetBuffer = Alignment;
    }
    while ( Alignment );
  }
  NdisFreeNetBufferList(FragmentNetBufferList);
}
