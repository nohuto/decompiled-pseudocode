/*
 * XREFs of ExfAcquireReleasePushLockExclusive @ 0x140201DF4
 * Callers:
 *     EtwpLockUnlockBufferList @ 0x1402279D4 (EtwpLockUnlockBufferList.c)
 *     PspLockUnlockProcessExclusive @ 0x140361BC8 (PspLockUnlockProcessExclusive.c)
 *     ObpDeleteDirectoryObject @ 0x140698950 (ObpDeleteDirectoryObject.c)
 *     NtSetInformationJobObject @ 0x1406A4040 (NtSetInformationJobObject.c)
 *     PsLookupProcessByProcessId @ 0x1406FA580 (PsLookupProcessByProcessId.c)
 *     PsLookupThreadByThreadId @ 0x1406FB120 (PsLookupThreadByThreadId.c)
 *     AlpcReferenceBlobByHandle @ 0x14071DDF8 (AlpcReferenceBlobByHandle.c)
 *     PspExitThread @ 0x14076DC1C (PspExitThread.c)
 *     PfpRpCHashDeleteEntries @ 0x1407B59F0 (PfpRpCHashDeleteEntries.c)
 *     PsSynchronizeWithThreadInsertion @ 0x1409AE6F8 (PsSynchronizeWithThreadInsertion.c)
 *     PsShutdownSystem @ 0x1409B3744 (PsShutdownSystem.c)
 *     EtwpUpdateLoggerSecurityDescriptor @ 0x1409EC5A4 (EtwpUpdateLoggerSecurityDescriptor.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140230FD0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     ExfReleasePushLockExclusive @ 0x1402BDBA0 (ExfReleasePushLockExclusive.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FD0A0 (ExfAcquirePushLockExclusiveEx.c)
 */

__int64 __fastcall ExfAcquireReleasePushLockExclusive(ULONG_PTR BugCheckParameter2)
{
  __int64 v2; // rdi
  __int64 result; // rax

  v2 = KeAbPreAcquire(BugCheckParameter2, 0LL, 0LL);
  ExfAcquirePushLockExclusiveEx(BugCheckParameter2, v2, BugCheckParameter2);
  if ( v2 )
    *(_BYTE *)(v2 + 18) = 1;
  result = ExfReleasePushLockExclusive(BugCheckParameter2);
  if ( v2 )
    return KeAbPostRelease(BugCheckParameter2);
  return result;
}
