/*
 * XREFs of ExEnterCriticalRegionAndAcquireSharedWaitForExclusive @ 0x14046AD00
 * Callers:
 *     DifExEnterCriticalRegionAndAcquireSharedWaitForExclusiveWrapper @ 0x1405D8920 (DifExEnterCriticalRegionAndAcquireSharedWaitForExclusiveWrapper.c)
 *     VerifierExEnterCriticalRegionAndAcquireSharedWaitForExclusive @ 0x140ACF050 (VerifierExEnterCriticalRegionAndAcquireSharedWaitForExclusive.c)
 * Callees:
 *     ExAcquireSharedWaitForExclusive @ 0x1403C82F0 (ExAcquireSharedWaitForExclusive.c)
 */

PVOID __stdcall ExEnterCriticalRegionAndAcquireSharedWaitForExclusive(PERESOURCE Resource)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireSharedWaitForExclusive(Resource, 1u);
  return KeGetCurrentThread()->WaitBlock[2].SparePtr;
}
