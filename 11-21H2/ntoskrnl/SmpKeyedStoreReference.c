/*
 * XREFs of SmpKeyedStoreReference @ 0x14037D810
 * Callers:
 *     SmpPageWrite @ 0x14037BC58 (SmpPageWrite.c)
 * Callees:
 *     SmpKeyedStoreEntryGet @ 0x1402A1124 (SmpKeyedStoreEntryGet.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     SmKmStoreReference @ 0x14035F464 (SmKmStoreReference.c)
 */

__int64 __fastcall SmpKeyedStoreReference(signed __int64 *BugCheckParameter2, __int64 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v4; // esi
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v10; // [rsp+50h] [rbp+18h] BYREF

  v10 = a3;
  CurrentThread = KeGetCurrentThread();
  v4 = -1;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)BugCheckParameter2, 0LL);
  v7 = SmpKeyedStoreEntryGet((ULONG_PTR)BugCheckParameter2, &v10, 0LL, 1);
  v8 = v7;
  if ( v7 )
  {
    SmKmStoreReference(a2, *(unsigned __int16 *)(v7 + 16));
    v4 = *(unsigned __int16 *)(v8 + 16);
  }
  if ( _InterlockedCompareExchange64(BugCheckParameter2, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(BugCheckParameter2);
  KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
  KeLeaveCriticalRegion();
  return v4;
}
