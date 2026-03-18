/*
 * XREFs of KiAllocateHeteroConfigBuffer @ 0x140A5B8A4
 * Callers:
 *     KiCompleteKernelInit @ 0x140A58CF8 (KiCompleteKernelInit.c)
 * Callees:
 *     KeGetThreadWorkloadClassCount @ 0x14025E824 (KeGetThreadWorkloadClassCount.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 KiAllocateHeteroConfigBuffer()
{
  int ThreadWorkloadClassCount; // ebx
  __int64 Pool2; // rax

  ThreadWorkloadClassCount = KeGetThreadWorkloadClassCount();
  Pool2 = ExAllocatePool2(64LL, (unsigned int)(1320 * ThreadWorkloadClassCount + 24), 1699243339LL);
  if ( !Pool2 )
    return 3221225626LL;
  *(_DWORD *)(Pool2 + 20) = ThreadWorkloadClassCount;
  KiHeteroConfig = Pool2;
  return 0LL;
}
