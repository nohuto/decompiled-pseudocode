/*
 * XREFs of RtlFreeHeap_0 @ 0x18004A3E8
 * Callers:
 *     CompatCacheLookupPackage @ 0x180034040 (CompatCacheLookupPackage.c)
 *     CompatCachepGetPackageAlias @ 0x180034390 (CompatCachepGetPackageAlias.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOLEAN __stdcall RtlFreeHeap_0(HANDLE HeapHandle, ULONG Flags, PVOID P)
{
  return RtlFreeHeap(HeapHandle, Flags, P);
}
