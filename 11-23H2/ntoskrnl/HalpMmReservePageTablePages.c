/*
 * XREFs of HalpMmReservePageTablePages @ 0x14037E70C
 * Callers:
 *     HalpMmInitSystem @ 0x140A90910 (HalpMmInitSystem.c)
 * Callees:
 *     HalpInterruptModel @ 0x14031FD6C (HalpInterruptModel.c)
 *     HalpMmGetPteAddressSafe @ 0x14037E58C (HalpMmGetPteAddressSafe.c)
 *     HalQueryMaximumProcessorCount @ 0x14037FA40 (HalQueryMaximumProcessorCount.c)
 */

__int64 HalpMmReservePageTablePages()
{
  __int64 result; // rax
  __int64 v1; // rdx
  __int64 v2; // rcx
  unsigned __int64 v3; // rdi
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // rsi

  result = HalpInterruptModel();
  if ( (_DWORD)result == 3 )
  {
    result = HalQueryMaximumProcessorCount(v2, v1);
    v1 = ((unsigned int)result + 16LL) << 18;
  }
  v3 = 0LL;
  v4 = HalpOriginalHeapStart;
  v5 = (unsigned __int64)(v1 + (HalpMmEarlyPhysicalPagesAllocated << 12) + 0x1FFFFF) >> 21;
  if ( v5 )
  {
    do
    {
      if ( v4 > HalpOriginalHeapEnd )
        break;
      result = HalpMmGetPteAddressSafe(v4);
      ++v3;
      v4 += 0x200000LL;
    }
    while ( v3 < v5 );
  }
  return result;
}
