/*
 * XREFs of BgkpUnlockBgfxCodeSection @ 0x140AEF590
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x1403ADB80 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkResumeFinished @ 0x140A99A38 (BgkResumeFinished.c)
 *     BgkResumePrepare @ 0x140A99A74 (BgkResumePrepare.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F700 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140231030 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     MmUnlockPagableImageSection @ 0x14025A440 (MmUnlockPagableImageSection.c)
 *     ExfTryToWakePushLock @ 0x1402BD960 (ExfTryToWakePushLock.c)
 */

_QWORD *BgkpUnlockBgfxCodeSection()
{
  struct _KTHREAD *CurrentThread; // rax
  char v1; // bl

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C70C60, 0LL);
  if ( !--dword_140C6AB7C )
  {
    MmUnlockPagableImageSection(ImageSectionHandle);
    ImageSectionHandle = 0LL;
  }
  v1 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C70C60, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v1 & 2) != 0 && (v1 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C70C60);
  KeAbPostRelease((ULONG_PTR)&qword_140C70C60);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
