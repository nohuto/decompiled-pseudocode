/*
 * XREFs of HalpMmAllocatePerProcessorMemory @ 0x14037F9F4
 * Callers:
 *     HalpTimerInitializeProfiling @ 0x14037AE60 (HalpTimerInitializeProfiling.c)
 *     HalpInitializePmcCounterSetInfo @ 0x140B69184 (HalpInitializePmcCounterSetInfo.c)
 * Callees:
 *     HalpMmAllocateMemoryInternal @ 0x14037DCA8 (HalpMmAllocateMemoryInternal.c)
 *     HalQueryMaximumProcessorCount @ 0x14037FA40 (HalQueryMaximumProcessorCount.c)
 *     memset @ 0x140435E00 (memset.c)
 */

void *__fastcall HalpMmAllocatePerProcessorMemory(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  void *MemoryInternal; // rax
  void *v4; // rbx

  v2 = HalQueryMaximumProcessorCount(a1, a2) * a1;
  MemoryInternal = (void *)HalpMmAllocateMemoryInternal(v2, 1u);
  v4 = MemoryInternal;
  if ( MemoryInternal )
    memset(MemoryInternal, 0, v2);
  return v4;
}
