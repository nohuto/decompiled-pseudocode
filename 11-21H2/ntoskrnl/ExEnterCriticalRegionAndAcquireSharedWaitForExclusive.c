/*
 * XREFs of ExEnterCriticalRegionAndAcquireSharedWaitForExclusive @ 0x140461910
 * Callers:
 *     DifExEnterCriticalRegionAndAcquireSharedWaitForExclusiveWrapper @ 0x140608290 (DifExEnterCriticalRegionAndAcquireSharedWaitForExclusiveWrapper.c)
 *     VerifierExEnterCriticalRegionAndAcquireSharedWaitForExclusive @ 0x140A8D720 (VerifierExEnterCriticalRegionAndAcquireSharedWaitForExclusive.c)
 * Callees:
 *     ExAcquireSharedWaitForExclusive @ 0x14039B280 (ExAcquireSharedWaitForExclusive.c)
 */

PVOID __stdcall ExEnterCriticalRegionAndAcquireSharedWaitForExclusive(PERESOURCE Resource)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireSharedWaitForExclusive(Resource, 1u);
  return KeGetCurrentThread()->WaitBlock[2].SparePtr;
}
