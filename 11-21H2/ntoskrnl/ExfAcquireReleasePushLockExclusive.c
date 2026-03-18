/*
 * XREFs of ExfAcquireReleasePushLockExclusive @ 0x14024BA7C
 * Callers:
 *     PspLockUnlockProcessExclusive @ 0x14024BA3C (PspLockUnlockProcessExclusive.c)
 *     EtwpLockUnlockBufferList @ 0x1402E29C8 (EtwpLockUnlockBufferList.c)
 *     NtSetInformationJobObject @ 0x140685A20 (NtSetInformationJobObject.c)
 *     PfpRpCHashDeleteEntries @ 0x1406AF880 (PfpRpCHashDeleteEntries.c)
 *     ObpDeleteDirectoryObject @ 0x1406D9780 (ObpDeleteDirectoryObject.c)
 *     PspExitThread @ 0x1407A0088 (PspExitThread.c)
 *     PsLookupThreadByThreadId @ 0x1407A7D90 (PsLookupThreadByThreadId.c)
 *     AlpcReferenceBlobByHandle @ 0x1407A7EB0 (AlpcReferenceBlobByHandle.c)
 *     PsLookupProcessByProcessId @ 0x1407A8720 (PsLookupProcessByProcessId.c)
 *     PspThreadFromTicket @ 0x1407A87D0 (PspThreadFromTicket.c)
 *     PsSynchronizeWithThreadInsertion @ 0x1409AD5B8 (PsSynchronizeWithThreadInsertion.c)
 *     PsShutdownSystem @ 0x1409B1074 (PsShutdownSystem.c)
 *     EtwpUpdateLoggerSecurityDescriptor @ 0x1409EB878 (EtwpUpdateLoggerSecurityDescriptor.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029F120 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140347C10 (KeAbPreAcquire.c)
 *     ExfReleasePushLockExclusive @ 0x140359EF0 (ExfReleasePushLockExclusive.c)
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
