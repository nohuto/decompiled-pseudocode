/*
 * XREFs of NdisMCoIndicateReceiveNetBufferLists @ 0x1C00BDBF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0036040 (_guard_dispatch_icall_nop.c)
 */

void __stdcall NdisMCoIndicateReceiveNetBufferLists(
        NDIS_HANDLE NdisVcHandle,
        PNET_BUFFER_LIST NetBufferLists,
        ULONG NumberOfNetBufferLists,
        ULONG CoReceiveFlags)
{
  (*((void (__fastcall **)(NDIS_HANDLE, PNET_BUFFER_LIST, ULONG, ULONG))NdisVcHandle + 36))(
    NdisVcHandle,
    NetBufferLists,
    NumberOfNetBufferLists,
    CoReceiveFlags);
}
