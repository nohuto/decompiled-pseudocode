/*
 * XREFs of PsReferenceImpersonationToken @ 0x1406A77B0
 * Callers:
 *     CmpOpenHiveFile @ 0x140713F8C (CmpOpenHiveFile.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AC800 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 */

PACCESS_TOKEN __stdcall PsReferenceImpersonationToken(
        PETHREAD Thread,
        PBOOLEAN CopyOnOpen,
        PBOOLEAN EffectiveOnly,
        PSECURITY_IMPERSONATION_LEVEL ImpersonationLevel)
{
  struct _KTHREAD *CurrentThread; // r13
  void *v10; // rbp
  BOOLEAN v11; // al

  if ( (*(_DWORD *)(&Thread[1].SwapListEntry + 1) & 8) == 0 )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&Thread[1].WaitBlockList, 0LL);
  if ( (*(_DWORD *)(&Thread[1].SwapListEntry + 1) & 8) != 0 )
  {
    v10 = Thread[1].WaitBlock[1].Thread;
    v11 = 0;
    if ( !v10 )
    {
      v10 = (void *)(*(_QWORD *)((char *)&Thread[1].116 + 4) & 0xFFFFFFFFFFFFFFF8uLL);
      if ( (*(_DWORD *)(&Thread[1].SwapListEntry + 1) & 0x100) != 0 )
        v11 = 1;
    }
    *CopyOnOpen = v11;
    ObfReferenceObjectWithTag(v10, 0x746C6644u);
    *ImpersonationLevel = *((_DWORD *)&Thread[1].0 + 1) & 3;
    *EffectiveOnly = (*(_BYTE *)(&Thread[1].MiscFlags + 1) & 4) != 0;
  }
  else
  {
    v10 = 0LL;
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&Thread[1].WaitBlockList, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&Thread[1].WaitBlockList);
  KeAbPostRelease((ULONG_PTR)&Thread[1].WaitBlockList);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return v10;
}
