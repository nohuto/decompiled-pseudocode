/*
 * XREFs of MiAllocateWorkingSetSwapSupport @ 0x1402609F4
 * Callers:
 *     MiGetKernelStackSwapSupport @ 0x14025FF40 (MiGetKernelStackSwapSupport.c)
 *     MmOutSwapWorkingSet @ 0x140260144 (MmOutSwapWorkingSet.c)
 *     MiReAllocateWorkingSetSwapSupport @ 0x14026099C (MiReAllocateWorkingSetSwapSupport.c)
 *     MmOutSwapVirtualAddresses @ 0x140375974 (MmOutSwapVirtualAddresses.c)
 * Callees:
 *     MiAllocatePool @ 0x1402828F0 (MiAllocatePool.c)
 */

unsigned __int64 *__fastcall MiAllocateWorkingSetSwapSupport(unsigned __int64 a1)
{
  unsigned __int64 *result; // rax

  result = (unsigned __int64 *)MiAllocatePool(64LL, 16 * a1 + 40, 1398238541LL);
  if ( result )
  {
    result[1] = a1;
    *result = ((unsigned __int64)result + 47) & 0xFFFFFFFFFFFFFFF8uLL;
  }
  return result;
}
