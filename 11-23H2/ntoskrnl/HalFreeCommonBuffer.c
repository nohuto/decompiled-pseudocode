/*
 * XREFs of HalFreeCommonBuffer @ 0x1405014E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

void __stdcall HalFreeCommonBuffer(
        PDMA_ADAPTER DmaAdapter,
        ULONG Length,
        PHYSICAL_ADDRESS LogicalAddress,
        PVOID VirtualAddress,
        BOOLEAN CacheEnabled)
{
  ((void (__fastcall *)(_QWORD, _DWORD, _QWORD, _QWORD, _BYTE))DmaAdapter->DmaOperations->FreeCommonBuffer)(
    DmaAdapter,
    Length,
    (_LARGE_INTEGER)LogicalAddress.QuadPart,
    VirtualAddress,
    CacheEnabled);
}
