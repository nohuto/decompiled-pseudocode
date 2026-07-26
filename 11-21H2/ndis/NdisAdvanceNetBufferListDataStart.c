/*
 * XREFs of NdisAdvanceNetBufferListDataStart @ 0x1C003A3C0
 * Callers:
 *     NdisFreeFragmentNetBufferList @ 0x1C00AE5C0 (NdisFreeFragmentNetBufferList.c)
 *     NdisFreeReassembledNetBufferList @ 0x1C00AE690 (NdisFreeReassembledNetBufferList.c)
 * Callees:
 *     NdisAdvanceNetBufferDataStart @ 0x1C0007950 (NdisAdvanceNetBufferDataStart.c)
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
