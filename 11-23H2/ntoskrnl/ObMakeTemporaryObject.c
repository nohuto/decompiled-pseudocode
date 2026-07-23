/*
 * XREFs of ObMakeTemporaryObject @ 0x1407E0F60
 * Callers:
 *     IoDeleteDevice @ 0x1403050A0 (IoDeleteDevice.c)
 *     IopCompleteUnloadOrDelete @ 0x140305590 (IopCompleteUnloadOrDelete.c)
 *     IopLoadDriver @ 0x1407947C8 (IopLoadDriver.c)
 *     NtMakeTemporaryObject @ 0x1407E0EE0 (NtMakeTemporaryObject.c)
 *     IoCreateDriver @ 0x1408104D0 (IoCreateDriver.c)
 *     IopUnloadDriver @ 0x140857B78 (IopUnloadDriver.c)
 *     IoDeleteDriver @ 0x140947520 (IoDeleteDriver.c)
 *     ObShutdownSystem @ 0x14097B000 (ObShutdownSystem.c)
 *     ObpDirectoryTeardownCallback @ 0x140A74240 (ObpDirectoryTeardownCallback.c)
 *     IovpUnloadDriver @ 0x140AC1EA8 (IovpUnloadDriver.c)
 *     IopInitializeBuiltinDriver @ 0x140B3DB64 (IopInitializeBuiltinDriver.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140231120 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140231280 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegion @ 0x140231550 (KeLeaveCriticalRegion.c)
 *     ObpDeleteNameCheck @ 0x140740330 (ObpDeleteNameCheck.c)
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
