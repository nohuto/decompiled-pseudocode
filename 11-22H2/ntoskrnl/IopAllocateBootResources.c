/*
 * XREFs of IopAllocateBootResources @ 0x140819210
 * Callers:
 *     IopAllocateLegacyBootResources @ 0x140B3D848 (IopAllocateLegacyBootResources.c)
 *     IopReportBootResources @ 0x140B441C0 (IopReportBootResources.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140231460 (KeLeaveCriticalRegion.c)
 *     KeWaitForSingleObject @ 0x140243CC0 (KeWaitForSingleObject.c)
 *     KeReleaseSemaphore @ 0x140321250 (KeReleaseSemaphore.c)
 *     IopAllocateBootResourcesInternal @ 0x140819298 (IopAllocateBootResourcesInternal.c)
 */

__int64 __fastcall IopAllocateBootResources(unsigned int a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int BootResourcesInternal; // ebx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  KeWaitForSingleObject(&PpRegistrySemaphore, DelayExecution, 0, 0, 0LL);
  BootResourcesInternal = IopAllocateBootResourcesInternal(a1, a2);
  KeReleaseSemaphore(&PpRegistrySemaphore, 0, 1, 0);
  KeLeaveCriticalRegion();
  return BootResourcesInternal;
}
