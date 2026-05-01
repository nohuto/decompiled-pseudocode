/*
 * XREFs of RtlFreeHeap_0 @ 0x18004F218
 * Callers:
 *     CompatCacheLookupPackage @ 0x18002FE90 (CompatCacheLookupPackage.c)
 *     CompatCachepGetPackageAlias @ 0x1800301EC (CompatCachepGetPackageAlias.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOLEAN __stdcall RtlFreeHeap_0(HANDLE HeapHandle, ULONG Flags, PVOID P)
{
  return RtlFreeHeap(HeapHandle, Flags, P);
}
