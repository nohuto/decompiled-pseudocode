/*
 * XREFs of RtlAllocateHeap_0 @ 0x18004F20C
 * Callers:
 *     CompatCacheLookupPackage @ 0x18002FE90 (CompatCacheLookupPackage.c)
 *     CompatCachepGetPackageAlias @ 0x1800301EC (CompatCachepGetPackageAlias.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
PVOID __stdcall RtlAllocateHeap_0(PVOID HeapHandle, ULONG Flags, SIZE_T Size)
{
  return RtlAllocateHeap(HeapHandle, Flags, Size);
}
