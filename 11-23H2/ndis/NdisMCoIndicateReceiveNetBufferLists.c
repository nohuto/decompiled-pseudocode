/*
 * XREFs of NdisMCoIndicateReceiveNetBufferLists @ 0x1C0040980
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0038370 (_guard_dispatch_icall_nop.c)
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
