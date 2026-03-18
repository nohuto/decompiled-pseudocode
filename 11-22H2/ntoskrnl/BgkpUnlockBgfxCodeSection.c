/*
 * XREFs of BgkpUnlockBgfxCodeSection @ 0x140AF02E0
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x1403AD4F0 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkResumeFinished @ 0x140A99AF8 (BgkResumeFinished.c)
 *     BgkResumePrepare @ 0x140A99B34 (BgkResumePrepare.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F700 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140231030 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     MmUnlockPagableImageSection @ 0x14025A320 (MmUnlockPagableImageSection.c)
 *     ExfTryToWakePushLock @ 0x1402BD930 (ExfTryToWakePushLock.c)
 */

_QWORD *BgkpUnlockBgfxCodeSection()
{
  struct _KTHREAD *CurrentThread; // rax
  char v1; // bl

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C70D20, 0LL);
  if ( !--dword_140C6AC84 )
  {
    MmUnlockPagableImageSection(ImageSectionHandle);
    ImageSectionHandle = 0LL;
  }
  v1 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C70D20, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v1 & 2) != 0 && (v1 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C70D20);
  KeAbPostRelease((ULONG_PTR)&qword_140C70D20);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
