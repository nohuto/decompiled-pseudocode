/*
 * XREFs of HalpDmaAllocateReservedMapping @ 0x140B60AF0
 * Callers:
 *     HalpDmaAllocateMappingResources @ 0x140B609CC (HalpDmaAllocateMappingResources.c)
 *     HalpDmaAllocateReservedMappingArray @ 0x140B91018 (HalpDmaAllocateReservedMappingArray.c)
 * Callees:
 *     HalpMmAllocCtxAlloc @ 0x14039B000 (HalpMmAllocCtxAlloc.c)
 *     HalpMmAllocCtxFree @ 0x1403A58A0 (HalpMmAllocCtxFree.c)
 *     MmAllocateMappingAddress @ 0x14086C6A0 (MmAllocateMappingAddress.c)
 */

__int64 __fastcall HalpDmaAllocateReservedMapping(__int64 a1)
{
  __int64 v1; // rbx
  PVOID MappingAddress; // rax
  __int64 v3; // rcx
  __int64 result; // rax

  v1 = HalpMmAllocCtxAlloc(a1, 48LL);
  if ( v1 )
  {
    MappingAddress = MmAllocateMappingAddress(0x200000uLL, 0x446C6148u);
    *(_QWORD *)(v1 + 16) = MappingAddress;
    if ( MappingAddress )
    {
      *(_DWORD *)(v1 + 24) = 0;
      result = v1;
      *(_DWORD *)(v1 + 28) = 0;
      *(_QWORD *)(v1 + 32) = 0LL;
      return result;
    }
    HalpMmAllocCtxFree(v3, v1);
  }
  return 0LL;
}
