/*
 * XREFs of NdisAdvanceNetBufferListDataStart @ 0x1C00400D0
 * Callers:
 *     NdisFreeFragmentNetBufferList @ 0x1C00B44A0 (NdisFreeFragmentNetBufferList.c)
 *     NdisFreeReassembledNetBufferList @ 0x1C00B4570 (NdisFreeReassembledNetBufferList.c)
 * Callees:
 *     NdisAdvanceNetBufferDataStart @ 0x1C0005B30 (NdisAdvanceNetBufferDataStart.c)
 */

void __stdcall NdisAdvanceNetBufferListDataStart(
        PNET_BUFFER_LIST NetBufferList,
        ULONG DataOffsetDelta,
        BOOLEAN FreeMdl,
        NET_BUFFER_FREE_MDL_HANDLER FreeMdlMdlHandler)
{
  struct _NET_BUFFER *i; // rbx

  for ( i = NetBufferList->FirstNetBuffer; i; i = (struct _NET_BUFFER *)i->Link.Alignment )
    NdisAdvanceNetBufferDataStart(i, DataOffsetDelta, FreeMdl, FreeMdlMdlHandler);
}
