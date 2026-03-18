/*
 * XREFs of ExEnterCriticalRegionAndAcquireSharedWaitForExclusive @ 0x14046B360
 * Callers:
 *     DifExEnterCriticalRegionAndAcquireSharedWaitForExclusiveWrapper @ 0x1405D8890 (DifExEnterCriticalRegionAndAcquireSharedWaitForExclusiveWrapper.c)
 *     VerifierExEnterCriticalRegionAndAcquireSharedWaitForExclusive @ 0x140ACE080 (VerifierExEnterCriticalRegionAndAcquireSharedWaitForExclusive.c)
 * Callees:
 *     ExAcquireSharedWaitForExclusive @ 0x1403C8950 (ExAcquireSharedWaitForExclusive.c)
 */

PVOID __stdcall ExEnterCriticalRegionAndAcquireSharedWaitForExclusive(PERESOURCE Resource)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireSharedWaitForExclusive(Resource, 1u);
  return KeGetCurrentThread()->WaitBlock[2].SparePtr;
}
