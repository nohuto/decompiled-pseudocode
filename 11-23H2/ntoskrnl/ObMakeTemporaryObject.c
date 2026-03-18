/*
 * XREFs of ObMakeTemporaryObject @ 0x1407E0C90
 * Callers:
 *     IoDeleteDevice @ 0x140304E10 (IoDeleteDevice.c)
 *     IopCompleteUnloadOrDelete @ 0x140305300 (IopCompleteUnloadOrDelete.c)
 *     IopLoadDriver @ 0x1407945D8 (IopLoadDriver.c)
 *     NtMakeTemporaryObject @ 0x1407E0C10 (NtMakeTemporaryObject.c)
 *     IoCreateDriver @ 0x140810200 (IoCreateDriver.c)
 *     IopUnloadDriver @ 0x140857938 (IopUnloadDriver.c)
 *     IoDeleteDriver @ 0x140947320 (IoDeleteDriver.c)
 *     ObShutdownSystem @ 0x14097AE00 (ObShutdownSystem.c)
 *     ObpDirectoryTeardownCallback @ 0x140A73F90 (ObpDirectoryTeardownCallback.c)
 *     IovpUnloadDriver @ 0x140AC1EB8 (IovpUnloadDriver.c)
 *     IopInitializeBuiltinDriver @ 0x140B3DB64 (IopInitializeBuiltinDriver.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140231030 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140231190 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegion @ 0x140231460 (KeLeaveCriticalRegion.c)
 *     ObpDeleteNameCheck @ 0x140740140 (ObpDeleteNameCheck.c)
 */

void __stdcall ObMakeTemporaryObject(PVOID Object)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v2; // rdi

  CurrentThread = KeGetCurrentThread();
  v2 = (__int64 *)((char *)Object - 48);
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)Object - 32, 0LL);
  *((_BYTE *)v2 + 27) &= ~0x10u;
  ExReleasePushLockEx(v2 + 2, 0LL);
  KeLeaveCriticalRegion();
  ObpDeleteNameCheck((__int64)v2);
}
