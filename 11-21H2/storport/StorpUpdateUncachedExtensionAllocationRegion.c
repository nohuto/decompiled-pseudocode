/*
 * XREFs of StorpUpdateUncachedExtensionAllocationRegion @ 0x1C0047530
 * Callers:
 *     StorPortGetUncachedExtension @ 0x1C00433F0 (StorPortGetUncachedExtension.c)
 * Callees:
 *     RaidDmaAllocateUncachedExtension @ 0x1C003D17C (RaidDmaAllocateUncachedExtension.c)
 *     StorFreeContiguousMemory @ 0x1C008EF80 (StorFreeContiguousMemory.c)
 */

__int64 __fastcall StorpUpdateUncachedExtensionAllocationRegion(__int64 a1, int *a2)
{
  __int64 v2; // rdi
  unsigned int v3; // ebp
  __int64 v4; // rsi
  int UncachedExtension; // r14d
  unsigned int v8; // ebp
  __int64 v9; // r8
  __int64 v10; // rcx

  v2 = a1 + 784;
  v3 = 0x80000000;
  v4 = a1 + 752;
  do
  {
    UncachedExtension = RaidDmaAllocateUncachedExtension(
                          v4,
                          v3,
                          *(_QWORD *)(a1 + 4168),
                          *(_QWORD *)(a1 + 4160),
                          *(_QWORD *)(a1 + 4176),
                          *(_DWORD *)(a1 + 4152),
                          *a2,
                          v2);
    if ( UncachedExtension >= 0 )
    {
      v10 = *(_QWORD *)(a1 + 792);
      *(_QWORD *)(a1 + 4168) = v10 & 0xFFFFFFFF00000000uLL;
      *(_QWORD *)(a1 + 4160) = v10 | 0xFFFFFFFFLL;
      goto LABEL_11;
    }
    v3 >>= 1;
  }
  while ( v3 >= 0x8000000 );
  if ( *a2 == 0x80000000 )
    return (unsigned int)UncachedExtension;
  v8 = 0x80000000;
  while ( 1 )
  {
    UncachedExtension = RaidDmaAllocateUncachedExtension(
                          v4,
                          v8,
                          *(_QWORD *)(a1 + 4168),
                          *(_QWORD *)(a1 + 4160),
                          *(_QWORD *)(a1 + 4176),
                          *(_DWORD *)(a1 + 4152),
                          0x80000000,
                          v2);
    if ( UncachedExtension >= 0 )
      break;
    v8 >>= 1;
    if ( v8 < 0x8000000 )
      return (unsigned int)UncachedExtension;
  }
  v9 = *(_QWORD *)(a1 + 792);
  *a2 = 0x80000000;
  *(_QWORD *)(a1 + 4168) = v9 & 0xFFFFFFFF00000000uLL;
  *(_QWORD *)(a1 + 4160) = v9 | 0xFFFFFFFFLL;
LABEL_11:
  StorFreeContiguousMemory(v4, v2);
  return (unsigned int)UncachedExtension;
}
