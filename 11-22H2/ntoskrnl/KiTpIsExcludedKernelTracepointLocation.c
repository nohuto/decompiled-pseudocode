/*
 * XREFs of KiTpIsExcludedKernelTracepointLocation @ 0x1409765F0
 * Callers:
 *     KiTpIsSupportedKernelTracepointLocation @ 0x1409766E0 (KiTpIsSupportedKernelTracepointLocation.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F700 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140231030 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402BD930 (ExfTryToWakePushLock.c)
 *     RtlNumberOfSetBitsInRange @ 0x1405A8DA0 (RtlNumberOfSetBitsInRange.c)
 *     KiTpBuildExcludedKernelTracepointBitmap @ 0x1409763D0 (KiTpBuildExcludedKernelTracepointBitmap.c)
 */

__int64 __fastcall KiTpIsExcludedKernelTracepointLocation(__int64 a1)
{
  unsigned int v1; // edi
  struct _KTHREAD *CurrentThread; // rax
  _RTL_BITMAP BitMapHeader; // [rsp+20h] [rbp-18h] BYREF

  v1 = 0;
  if ( !KiTpExcludedRangeBitMap.Buffer )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&KiTpStateLock, 0LL);
    if ( !KiTpExcludedRangeBitMap.Buffer )
      KiTpExcludedRangeBitMap = *KiTpBuildExcludedKernelTracepointBitmap(&BitMapHeader);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&KiTpStateLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&KiTpStateLock);
    KeAbPostRelease((ULONG_PTR)&KiTpStateLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    if ( !KiTpExcludedRangeBitMap.Buffer )
      return 1LL;
  }
  LOBYTE(v1) = RtlNumberOfSetBitsInRange(
                 &KiTpExcludedRangeBitMap,
                 (unsigned __int64)(a1 - (_QWORD)PsNtosImageBase) >> 4,
                 ((unsigned __int64)(a1 - (_QWORD)PsNtosImageBase + 16) >> 4)
               - ((unsigned __int64)(a1 - (_QWORD)PsNtosImageBase) >> 4)) != 0;
  return v1;
}
