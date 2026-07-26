/*
 * XREFs of NdisCoSendNetBufferLists @ 0x1C00407E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00381E0 (_guard_dispatch_icall_nop.c)
 */

void __stdcall NdisCoSendNetBufferLists(NDIS_HANDLE NdisVcHandle, PNET_BUFFER_LIST NetBufferLists, ULONG SendFlags)
{
  (*((void (__fastcall **)(NDIS_HANDLE, PNET_BUFFER_LIST, ULONG))NdisVcHandle + 31))(
    NdisVcHandle,
    NetBufferLists,
    SendFlags);
}
