/*
 * XREFs of ExEnterPriorityRegionAndAcquireResourceExclusive @ 0x14060A9B0
 * Callers:
 *     DifExEnterPriorityRegionAndAcquireResourceExclusiveWrapper @ 0x1405D89A0 (DifExEnterPriorityRegionAndAcquireResourceExclusiveWrapper.c)
 * Callees:
 *     PsBoostThreadIoEx @ 0x14022FF50 (PsBoostThreadIoEx.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402390E0 (ExAcquireResourceExclusiveLite.c)
 */

PVOID __fastcall ExEnterPriorityRegionAndAcquireResourceExclusive(PERESOURCE Resource)
{
  struct _KTHREAD *CurrentThread; // rdi

  CurrentThread = KeGetCurrentThread();
  PsBoostThreadIoEx((__int64)CurrentThread, 0, 0, 0LL);
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(Resource, 1u);
  return CurrentThread->WaitBlock[2].SparePtr;
}
