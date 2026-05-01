/*
 * XREFs of RtlAllocateHeap_0 @ 0x18004A46C
 * Callers:
 *     CompatCacheLookupPackage @ 0x180034070 (CompatCacheLookupPackage.c)
 *     CompatCachepGetPackageAlias @ 0x1800343C0 (CompatCachepGetPackageAlias.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
PVOID __stdcall RtlAllocateHeap_0(PVOID HeapHandle, ULONG Flags, SIZE_T Size)
{
  return RtlAllocateHeap(HeapHandle, Flags, Size);
}
