/*
 * XREFs of ObpLockDirectoryShared @ 0x1406C2B00
 * Callers:
 *     NtQueryDirectoryObject @ 0x1406C2660 (NtQueryDirectoryObject.c)
 *     ObpCreateSymbolicLinkName @ 0x1407B6CD0 (ObpCreateSymbolicLinkName.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140230E80 (ExAcquirePushLockSharedEx.c)
 */

__int64 __fastcall ObpLockDirectoryShared(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax

  *(_QWORD *)a1 = a2;
  *(_BYTE *)(a1 + 21) = 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  return ExAcquirePushLockSharedEx(a2 + 296, 0LL);
}
