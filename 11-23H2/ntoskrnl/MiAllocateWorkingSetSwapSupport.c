/*
 * XREFs of MiAllocateWorkingSetSwapSupport @ 0x1403429F8
 * Callers:
 *     MiGetKernelStackSwapSupport @ 0x140341E0C (MiGetKernelStackSwapSupport.c)
 *     MmOutSwapWorkingSet @ 0x140342000 (MmOutSwapWorkingSet.c)
 *     MiReAllocateWorkingSetSwapSupport @ 0x1403429A0 (MiReAllocateWorkingSetSwapSupport.c)
 *     MmOutSwapVirtualAddresses @ 0x140652C4C (MmOutSwapVirtualAddresses.c)
 * Callees:
 *     MiAllocatePool @ 0x1402DF1A0 (MiAllocatePool.c)
 */

_QWORD *__fastcall MiAllocateWorkingSetSwapSupport(__int64 a1)
{
  _QWORD *result; // rax

  result = MiAllocatePool(64, 16 * a1 + 40, 0x53576D4Du);
  if ( result )
  {
    result[1] = a1;
    *result = ((unsigned __int64)result + 47) & 0xFFFFFFFFFFFFFFF8uLL;
  }
  return result;
}
