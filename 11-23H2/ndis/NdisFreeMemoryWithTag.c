/*
 * XREFs of NdisFreeMemoryWithTag @ 0x1C00255F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall NdisFreeMemoryWithTag(PVOID VirtualAddress, ULONG Tag)
{
  ExFreePoolWithTag(VirtualAddress, Tag);
}
