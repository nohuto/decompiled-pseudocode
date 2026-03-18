/*
 * XREFs of ObMakeTemporaryObject @ 0x1406E1700
 * Callers:
 *     IoDeleteDevice @ 0x1402D3820 (IoDeleteDevice.c)
 *     IopCompleteUnloadOrDelete @ 0x1402D5CA8 (IopCompleteUnloadOrDelete.c)
 *     NtMakeTemporaryObject @ 0x1406E1680 (NtMakeTemporaryObject.c)
 *     IopLoadDriver @ 0x14074A178 (IopLoadDriver.c)
 *     IoCreateDriver @ 0x14084F500 (IoCreateDriver.c)
 *     IopUnloadDriver @ 0x140856DC0 (IopUnloadDriver.c)
 *     IoDeleteDriver @ 0x140936380 (IoDeleteDriver.c)
 *     ObShutdownSystem @ 0x140983EF0 (ObShutdownSystem.c)
 *     ObpDirectoryTeardownCallback @ 0x140A349B0 (ObpDirectoryTeardownCallback.c)
 *     IovpUnloadDriver @ 0x140A81078 (IovpUnloadDriver.c)
 *     IopInitializeBuiltinDriver @ 0x140B11EBC (IopInitializeBuiltinDriver.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     ObpDeleteNameCheck @ 0x1407A3190 (ObpDeleteNameCheck.c)
 */

void __stdcall ObMakeTemporaryObject(PVOID Object)
{
  struct _KTHREAD *CurrentThread; // rax
  char *v2; // rdi

  CurrentThread = KeGetCurrentThread();
  v2 = (char *)Object - 48;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)Object - 32, 0LL);
  v2[27] &= ~0x10u;
  ExReleasePushLockEx((ULONG_PTR)(v2 + 16), 0LL);
  KeLeaveCriticalRegion();
  ObpDeleteNameCheck(v2);
}
