/*
 * XREFs of RtlAllocateHeap_0 @ 0x18004A3DC
 * Callers:
 *     CompatCacheLookupPackage @ 0x180034040 (CompatCacheLookupPackage.c)
 *     CompatCachepGetPackageAlias @ 0x180034390 (CompatCachepGetPackageAlias.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
PVOID __stdcall RtlAllocateHeap_0(PVOID HeapHandle, ULONG Flags, SIZE_T Size)
{
  return RtlAllocateHeap(HeapHandle, Flags, Size);
}
