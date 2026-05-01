/*
 * XREFs of RtlFreeHeap_0 @ 0x18004A478
 * Callers:
 *     CompatCacheLookupPackage @ 0x180034070 (CompatCacheLookupPackage.c)
 *     CompatCachepGetPackageAlias @ 0x1800343C0 (CompatCachepGetPackageAlias.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOLEAN __stdcall RtlFreeHeap_0(HANDLE HeapHandle, ULONG Flags, PVOID P)
{
  return RtlFreeHeap(HeapHandle, Flags, P);
}
