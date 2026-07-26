/*
 * XREFs of NdisFreeMemoryWithTagPriority @ 0x1C00C3530
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall NdisFreeMemoryWithTagPriority(NDIS_HANDLE NdisHandle, PVOID VirtualAddress, ULONG Tag)
{
  ExFreePoolWithTag(VirtualAddress, Tag);
}
