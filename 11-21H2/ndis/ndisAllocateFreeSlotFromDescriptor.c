/*
 * XREFs of ndisAllocateFreeSlotFromDescriptor @ 0x1C0022948
 * Callers:
 *     ?ndisAllocatePerProcessorSlot@@YAPEAUPNDIS_PER_PROCESSOR_SLOT__@@K@Z @ 0x1C00228A8 (-ndisAllocatePerProcessorSlot@@YAPEAUPNDIS_PER_PROCESSOR_SLOT__@@K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisAllocateFreeSlotFromDescriptor(__int64 a1, int a2)
{
  int v2; // r8d
  unsigned int v3; // r8d
  __int64 result; // rax

  v2 = *(_DWORD *)(a1 + 16);
  if ( v2 == -16777217 )
    return 0LL;
  v3 = v2 & 0x1FFFFFF;
  *(_DWORD *)(a1 + 16) = *(_DWORD *)(a1 + 4LL * v3 + 20);
  result = a1 + 4096 + 8LL * v3;
  *(_DWORD *)(a1 + 4LL * v3 + 20) = a2;
  return result;
}
